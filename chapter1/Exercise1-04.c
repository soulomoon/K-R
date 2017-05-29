//Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
#include <stdio.h>

int main()
{
    int fahr;
    printf("+----+-------+\n", "fahr", "celsius");
    printf("|%4s|%7s|\n", "fahr", "celsius");

    printf("+----+-------+\n", "fahr", "celsius");
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    {
        printf("|%4d|%7.1f|\n", fahr, (5.0/9.0)*(fahr-32));
        printf("+----+-------+\n", "fahr", "celsius");
    }
}

