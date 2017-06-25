//Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location.)

 #include <stdio.h>


int any(char s1[], char s2[]);
int anyOne(char c, char s2[]);

int main()
{
    char s1[] = "assaabb";
    printf("frome '%s'\n", s1);
    char s2[] = "b";
    printf("find '%s'\n", s2);

    int len = any(s1, s2);
    if (len != -1)
    {
        printf("found in position: '%d', '%c' \n", len, s1[len]);
    }
    else
    {
        printf("not found \n");
    }
    
}


int any(char s1[], char s2[])
{
    for (int i = 0; s1[i] !='\0'; ++i)
    {
        if (anyOne(s1[i], s2))
        {
            return i;
        }
    }
    return -1;
}

int anyOne(char c, char s2[])
{
    for (int i =0; s2[i] != '\0'; ++i)
    {
        if (s2[i] == c)
        {
            return 1;
        }
    } 
    return 0;
}

