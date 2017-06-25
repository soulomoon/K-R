//Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. When either a tab or a single blank would suffice to reach a tab stop, which should be given preference?
include <stdio.h>
#define MAXLINE 1000   /* maximum input line length */
#define TABSIZE 4
int getlines(char line[], int maxline);
void deTabs(char s[], int begin, int limit);
void moveTabsSizeBack(char s[], int begin, int limit);
int findContinuesWhiteSpaces(char s[], int limit);
/* print the input line which length is larger than 80*/
int main()
{
	int len;
	int mark;
	char line[MAXLINE]= { 0 };

	while ((len = getlines(line, MAXLINE)) > 0) {
		printf("old lenth is %d \n", len);
		printf("old string is %s", line);
		while ((mark = findContinuesWhiteSpaces(line, len)) >= 0)
		{
			printf("badTabs is %d \n", mark);
			deTabs(line, mark, len);
			len = len - TABSIZE + 1;
		}
		printf("lenth is %d \n", len);
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
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int findContinuesWhiteSpaces(char s[], int limit)
{
	int continuesSpacesFlag = 0;
	int counts = 0;
	for (int i = 0; i < limit; i++)
	{
//		printf("%c", s[i]);
		if (s[i] == '\n')
		{
			return -1;
		}
		if (s[i] == ' ' && continuesSpacesFlag == 0)
		{
			counts = 0;
			continuesSpacesFlag = 1;
		}
		if (s[i] != ' ' && continuesSpacesFlag == 1)
		{
			counts = 0;
			continuesSpacesFlag = 0;
		}
		if (s[i] == ' ' && continuesSpacesFlag == 1)
		{
			counts++;
		}
		if (counts == TABSIZE)
		{
			return i - TABSIZE + 1;
		}
	}
	return -1;
}

void deTabs(char s[], int begin, int limit)
{
	for (int i = 0; i < TABSIZE; i++)
	{
		s[begin] = '\t';
	}
	moveTabsSizeBack(s, begin, limit);
}

void moveTabsSizeBack(char s[], int begin, int limit)
{
	for (int i = begin + TABSIZE; i < limit; i++)
	{
		s[i - TABSIZE + 1] = s[i];
	}
	for (int i = limit - 1; i > limit - TABSIZE; i--)
	{
		s[i] = 0;
	}
}
