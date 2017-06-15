//Exercise 2-1. Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types.
#include <stdio.h>

int main()
{
    char c; 
    unsigned char uc;
    short s;
    unsigned short us;
    int i;
    unsigned int ui;
    long l;
    unsigned long ul;
    long long ll;
    unsigned long long ull;
    float f;

    printf("length: %d\n", sizeof(c));
    printf("length: %d\n", sizeof(uc));
    printf("length: %d\n", sizeof(s));
    printf("length: %d\n", sizeof(us));
    printf("length: %d\n", sizeof(i));
    printf("length: %d\n", sizeof(ui));
    printf("length: %d\n", sizeof(ll));
    printf("length: %d\n", sizeof(ull));
    printf("length: %d\n", sizeof(f));
}



