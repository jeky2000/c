#include <stdio.h>
#include <stdlib.h>


/*this is my program
it prints out my name is awesome
*/
int main()
{
    printf("%s is the best person ever\n", "jek");

    {
//%d is just for heltal
    printf("I ate %d corndogs last night\n", 9);
//%f is for decimal tal
    printf("I ate %f corndogs last night\n", 1,123345);

    printf("I ate %.2f corndogs last night\n", 1,123345);

    printf("I ate %.3f corndogs last night\n", 1,123345);
    }
       return 0;
}
/*%s means that yea some is the best person ever
if you put any name or words after comma
    so %s referse to that word
    */
