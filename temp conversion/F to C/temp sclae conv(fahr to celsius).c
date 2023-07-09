#include<stdio.h>
main()
{
int fahr;
float celsius;
int lower, upper, step;

lower = 32;
upper = 212;
step = 1;

fahr = lower;
printf("Tempreature conversion from fahrenheit to celsius\n");
while(fahr <= upper)
{celsius = 5.0* (fahr-32.0) / 9.0;
printf("%d\t%0.2f\n", fahr, celsius);
fahr = fahr + step;
}
};
