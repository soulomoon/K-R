//Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time.
#include <stdio.h>
#define MAXLINE 1000   /* maximum input line length */
int getlines(char line[], int maxline);
void reverse(char line[], int len);
/* print the input line which length is larger than 80*/
int main()
{
    int len;
    char line[MAXLINE];
    while ((len = getlines(line, MAXLINE)) > 0){
			printf("lenth is %d \n", len);
			reverse(line, len);
			printf("%s", line);
	}
    /* current input line */
    return 0;
}
/* getlines:  read a line into s, return length  */
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



void reverse(char line[], int len){
	int i;
	char templine[len+1];
	for (i=0; i < len; i++){
		templine[i]=line[i]; 
	}
	for (i=0; i < len-1; i++){
		line[len-i-2] = templine[i];
	}
}
