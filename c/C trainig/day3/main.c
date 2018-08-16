#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // \0 shows that is it the end of stings
    //"Jek Hurry\0"
    //white space counds alos as a croctors
//array

    char name[9] = "Jek Hurry";
    scanf("My name is %s \n", name);



    name[2] = 'w';
    printf("My name is %s \n", name);

    char food[] = "biryani";
    printf("my favorite food is  %s \n", food);

    // if you wanna change

    strcpy(food, "qaboli");
    printf("My favorite food is %s \n", food);

{
    int food;
    food = "rice";
    printf("My favorite food is %s \n",food);
}
    return 0;
}
