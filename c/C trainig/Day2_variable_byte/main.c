#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("I ate %d corndogs last night\n", 9);

    printf("I ate %f corndogs last night\n", 1.123345);

    printf("I ate %.2f corndogs last night\n", 1,123345);

    printf("I ate %.3f corndogs last night\n", 1,123345);

    printf("i will kill %s tonight\n","saman");

/*Variables is a place holder
e.x
x=meatball
i love x
you cant start with nummber
and no spaces*/
{
    int age;

    age = 25;

    printf("Jek is %d years old\n",age);

    {
        int age;
        age = 2015-1994;
        printf("Jek is %d years old\n",age);
    }

    {
        int age;
        int currentyear;
        int birthyear;
        currentyear = 2015;
        birthyear = 1994;
        age = currentyear-birthyear;
        printf("jek is %d years old",age);
}






}


    return 0;
}
