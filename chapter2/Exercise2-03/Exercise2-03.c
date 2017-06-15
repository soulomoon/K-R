//Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.
//
//for hexa digit larger than f, return 0 for that digit
#include <stdio.h>
#include <string.h>

int htoi(char s[]);
int main()
{
   int a = htoi("0x00d");
   int b = htoi("11");
   int c = htoi("a");
   printf("%d\n", a);
   printf("%d\n", b);
   printf("%d\n", c);
}

int htoi(char s[])
{
    int charInt = 0;
    int startPoint = 0;
    int len = strlen(s)/sizeof(char);
    if (len > 1) 
    {
       if (s[0]=='0' && (s[1] == 'x' || s[1] == 'X')) 
       {
           startPoint = 2;
       }
    }

    for (int i = startPoint; i < len; i++)
    {
        int temp = s[i];
        int v = (int) temp - (int) '0'; 
        if (v > 9)
        {
            v = (int) temp - (int) 'a' + 10;
            if (v > 16)
            {
                v = 0;
            }
        }
        charInt = charInt * 16 + v; 
    }
    return charInt;
}
