//Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.
#include <stdio.h>
   /* count lines in input */
int main()
{
    int c, nl;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            c = 't';
        }
        else if (c == '\b')
        {
            putchar('\\');
            c = 'b';   
        }
        else if (c == '\\')
        {
            putchar('\\');
            c = '\\';   
        }
        putchar(c);   
    }

}
