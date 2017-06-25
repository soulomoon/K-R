//Exercise 1-24. Write a program to check a C program for rudimentary syntax errors like unmatched parentheses, brackets and braces. Don't forget about quotes, both single and double, escape sequences, and comments. (This program is hard if you do it in full generality.)

// This question is hard , first I have the tool to delete comments, 
// then you should have a status for each.
// first piority, things in inside '' and "" should not be consider.
// We need to set it to mute status when come to quote.
// but things inside (parentheses, brackets and braces) should not be intercross with anything each other 
#include <stdio.h>
#include <stdbool.h>
#define singleQuotes 0
#define doubleQuotes 1
#define parentheses 2
#define brackets 3
#define braces 4

bool isvalueinarray(int val, int *arr);
int len(int *arr);
int muteState[2] = {singleQuotes, doubleQuotes};

int main()
{
    printf("%d", sizeof(muteState));
    bool a = isvalueinarray(singleQuotes, muteState);
    bool b = isvalueinarray(brackets, muteState);
    printf("%d\n", a);
    printf("%d\n", b);
}

bool isvalueinarray(int val, int *arr){
    int i;
    for (i=0; i < len(arr); i++) {
        if (arr[i] == val)
            return true;
    }
    return false;
}

int len(int *arr){
    //size of would return how many bytes would be in the array, int might have many bytes
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("length is %d\n", length);
    return length;
}
