//Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
#include <stdio.h>
int main()
{
    int c;
    int n;
    int len;
    int barlen;
    int lens[99];
    n = 0;
    while ((c = getchar()) != EOF)
       if (c == ' ' || c == '\n' || c == '\t')  
       {
           if (len == 0)
               continue;
           lens[n] = len;
           len = 0;
           ++n;
       }
       else
       {
           ++len;
       }
    int max = 0;
    printf("input end\n");
    for (int i = 0; i < n; ++i)    
    {
        barlen = lens[i];
        //printf("%d\n", barlen);
        for (int i = 0; i < barlen; ++i){
            printf(">"); 
        }
        printf("\n");
        if (barlen > max)
            max = barlen;
    }
    int v[n];
    for (int i = 0; i < max; ++i)    
    {
        for (int j = 0; j < n; ++j)
        {
            if ((max-i) == lens[j]) 
                v[j] = 1;
        }
        for (int j = 0; j < n; ++j)
        {
            if (v[j] == 1)
                printf("^");
            else 
                printf(" ");
            
        }
        printf("\n");

    }

}
