#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, fact, prev;
    printf("enter a number\n");
    scanf("%d", &n);
    prev = n;
    fact = 1;

    while(n > 0){
        fact = fact *n;
        n = n -1;
    }
    printf("factorial of %d is %d\n", prev, fact);


    int i, n, fact, prev;
    printf("enter a number\n");
    scanf("%d",&n);
    prev = n;
    fact = 1;
    for(i = 1; <= n;  i = i + 1){
        fact = fact * i;
    }
    printf("factorial of %d is %d\n", prev, fact);

    return 0;
}
