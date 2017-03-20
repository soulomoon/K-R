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
