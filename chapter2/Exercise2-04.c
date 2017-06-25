//Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each
//character in s1 that matches any character in the string s2.
 #include <stdio.h>
#define MAXLINE 1000   /* maximum input line length */

void squeezeArray(char s1[], char s2[]);
void squeeze(char s[], int c);

int main()
{
    char s1[] = "assaabb";
    printf("frome '%s'\n", s1);
    char s2[] = "a";
    printf("delete '%s'\n", s2);
    squeezeArray(s1, s2);

    printf("result is '%s'\n", s1);
    return 1;
}

void squeezeArray(char s1[], char s2[])
{
    int i = 0;
    while((s2[i] != '\0'))
    {
        squeeze(s1, s2[i]);
        ++i;
    }
}
void squeeze(char s[], int c)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}



