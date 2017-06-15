#include <stdio.h>
#define lim 10;
int main()
{
    char s[10];
    for (int i=0; i < 10; ++i)
    {
        char c = getchar();
        printf("%c", c);
        if (c != '\n')
        {
            continue;
        }
        if (c != EOF)
        {
            continue;
        }
        s[i] = c;
    }

    printf("\n");
}
