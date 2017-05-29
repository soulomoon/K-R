#include <stdio.h>

#define MAXLINE 1000   /* maximum input line length */
void emptyRest(char s[], int begin, int limit);
int deleteComment(char s[], int limit);
int flip(int mute);
int getlines(char line[], int maxline);
/* print the input line which length is larger than 80*/
int main()
{
	int len;
	char line[MAXLINE]= { 0 };

	while ((len = getlines(line, MAXLINE)) > 0) {
		printf("old lenth is %d \n", len);
		printf("old string is %s", line);
		
		int temp = deleteComment(line, len);
		len = temp ? temp : len;

		printf("lenth is %d \n", len);
		printf("%s", line);
	}
	/* current input line */
	return 0;
}
int flip(int mute)
{
	if (mute)
	{
		mute = 0;
	} 
	else
	{
		mute = 1;
	}


	return mute;
}

int deleteComment(char s[], int limit)
{
	char typeFlag;
	int last = 0;
	int mute = 0;

	for (int i = 0; i < limit; i++)
	{
		if (!mute && (((typeFlag = s[i]== '"')) || ((typeFlag = s[i] == '\''))))
		{
			mute = flip(mute);
            typeFlag = s[i];
			continue;
		}
		if (mute && (s[i] == typeFlag))
		{
			mute = flip(mute);
			continue;
		}
		if (s[i] == '/' && !mute && !last)
		{
			last = flip(last);
			continue;
		}
		if (s[i] == '/' && !mute && last)
		{
			emptyRest(s, i-1, limit);
			return i;
		}
		printf("%c", s[i]);
	}
	return 0;
}

void emptyRest(char s[], int begin, int limit)
{
	for (int i = begin; i < limit; i++)
	{
		if (s[i] == '\n')
		{
			return;
		}
		s[i] = ' ';
	}
}

int getlines(char s[],int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

