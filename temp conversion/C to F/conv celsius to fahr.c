#include<stdio.h>
main()
{
int celsius;
float fahr;
int lower, upper, step;

lower = 0;
upper = 100;
step = 1;

celsius = lower;
printf("Tempreature conversion from celsius to fahrenheit\n");
while(celsius <= upper)
{fahr = 9.0 / 5.0 * (celsius) + 32.0;
printf("%d\t%0.2f\n", celsius, fahr);
celsius = celsius + step;
}
};
