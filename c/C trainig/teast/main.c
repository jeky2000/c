#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter positive enter to check:\n");
    scanf("%d",&num);
    check_display(num);  /* Argument num is passed to function. */
    return num;
}
void check_display(int n){
/* There is no return value to calling function. Hence, return type of function is void. */
    int i, flag = 0;
for(i=2; i<=n/2; ++i){
    if(n%i==0){
        flag = 1;
        continue;
    }
    }
    if(flag == 1)
        printf("%d is not prime",n);
    else
        printf("%d is prime", n);

    getch();
    return n;
}
