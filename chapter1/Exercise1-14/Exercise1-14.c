//Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.
#include <stdio.h>
/* count digits, white space, others */
int main()
{
    int c, i, nwhite, nother;
    int ndigit[26];
    nwhite = nother = 0;
    for (i = 0; i < 26; ++i)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF)
        if (c >= 'a' && c <= 'z')
            ++ndigit[c-'a'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    for (i = 0; i < 26; ++i)
        printf("%c, %d\n", i+'a', ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);
}
