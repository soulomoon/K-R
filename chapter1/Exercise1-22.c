#include "studio.h"

#define MAXLINE 1000   /* maximum input line length */
#define TABSIZE 4
#define SPLITSIZE 8

int findLastNoneBlank(char s[], int begin, int limit);
void insert(char bollute, char s[], int place, int len);
int split(char s[], int len);
int shiftBack(int n, char s[], int from, int len);
/* print the input line which length is larger than 80*/
int main()
{
	int len;
	int mark;
	char line[MAXLINE]= { 0 };

	while ((len = getlines(line, MAXLINE)) > 0) {
		printf("old lenth is %d \n", len);
		printf("old string is %s", line);
		
		len = split(line, len);

		printf("lenth is %d \n", len);
		printf("%s", line);
	}
	/* current input line */
	return 0;
}

void insert(char bollute, char s[], int place, int len)
{
	for (int i = len; i >= place; i--)
	{
		s[i + 1] = s[i];
	}
	s[place] = bollute;
}

int split(char s[], int len)
{
	for (int i = 0; i < len; i += SPLITSIZE)
	{
		int insertionePlace = findLastNoneBlank(s, i, i + SPLITSIZE - 1);
		insert('\n', s, insertionePlace, len);
		len++;
		i++;
		int pos = i + SPLITSIZE - 1 - insertionePlace;
		len = shiftBack(pos, s, insertionePlace + 1, len);
		i = insertionePlace + 1 - SPLITSIZE;
	}
	return len;
}

int shiftBack(int n, char s[], int from, int len)
{
	for (int i = from; i <= len - n; i++)
	{
		s[i] = s[i + n];
	}
	return len - n;
}


int findLastNoneBlank(char s[], int begin, int limit)
{
	for (int i = limit; i > begin; i--)
	{
		if (s[i] != ' ' && s[i] != '\t')
		{
			return i + 1;
		}
	}

	return begin;
}
