//Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
#include <stdio.h>
   /* count lines in input */
int main()
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (nl!=' ' || c!=' ')
            putchar(c);
        nl=c;
    }

}
