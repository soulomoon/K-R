//Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.
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
