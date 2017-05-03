include <stdio.h>

#define MAXLINE 1000   /* maximum input line length */
#define TABSIZE 4
int getlines(char line[], int maxline);
int insertTabs(char s[], int begin);
/* print the input line which length is larger than 80*/
int main()
{
	int len;
	char line[MAXLINE];
	while ((len = getlines(line, MAXLINE)) > 0) {
		printf("lenth is %d \n", len);
		reverse(line, len);
		printf("%s", line);
	}
	/* current input line */
	return 0;
}
/* getlines:  read a line into s, return length  */
int getlines(char s[], int lim)
{
	int c = 0, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		if (c == '\t')
		{
			i = insertTabs(s, i);
		}
		else
		{
			s[i] = c;
		}

	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int insertTabs(char s[], int begin)
{
	int i;
	for (i = 0; i < TABSIZE; i++)
		s[begin + i] = ' ';
	return begin + i - 1;
}

