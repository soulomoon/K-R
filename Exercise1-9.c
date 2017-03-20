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
