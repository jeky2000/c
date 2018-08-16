#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a, b, i;
    long pow= 1;
    long abs = 1;
    long fact = 1;
    scanf("%ld %ld",&a,&b);

    for (i = 1; i <= b ; i++)
    {
      pow *=a;
    }




    printf("pow: %ld  \n",pow);

    if (pow < 0)
        abs = pow * -1;

    else abs = pow;
    printf("abs: %ld\n",abs);

    for (i = 1; i <= abs ; i++)
        fact = fact * i;
        printf("fact: %ld", fact);

    getch();


    return 0;
}
