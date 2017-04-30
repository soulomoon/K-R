#include <stdio.h>
#define MAXLINE 1000   /* maximum input line length */
int getlines(char line[], int maxline);
/* print the input line which length is larger than 80*/
int main()
{
    int len;
    char line[MAXLINE];
    while ((len = getlines(line, MAXLINE)) > 0)
        if (len > 0) {
			printf("lenth is %d \n", len);
			printf("%s", line);
        }
    /* current input line */
    return 0;
}
/* getlines:  read a line into s, return length  */
int getlines(char s[],int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
		if (c != ' ' &&  c!= '\t')
			s[i] = c;
		else
			i -= 1;
	}
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
