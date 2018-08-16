#include <stdio.h>
#include <stdlib.h>

void add(int , int ); //functions prototype...its enough to right the data type not the name of variable like a ,b

int main()
{
    add(10,20); // called into main

    return 0;
}
void add(int a, int b){
    int result = a + b;
    printf("%d and %dis %d\n",a,b,result);
}
