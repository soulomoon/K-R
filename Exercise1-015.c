#include <stdio.h>

int TempConvertor(int fahr);

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("%-3s %-6s \n", "fahr", "celsius");
    
    while (fahr <= upper) {
				celsius = TempConvertor(fahr);
        printf("%3.0f %6.1f \n", fahr, celsius);
        fahr = fahr + step;
    }
}

int TempConvertor(int fahr)
{
	return 5 * (fahr-32 / 9);
}
