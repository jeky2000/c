#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Arean av en cirkel
printf, scanf*/


int main()
{
    const float pi = 3.14159;
    float radie, area;

    /* h�mta in ett v�rde till radie*/


    printf("ge radie  :");
    scanf("%f", &radie);

    /* ber�kna och skriv ut area*/
    area = pi*radie*radie;
    printf("Arean = %f\n", area);

    return 0;
}
*/
