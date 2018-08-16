#include <stdio.h>
#include <stdlib.h>

/*rabbatfrmärke till olika tunga brev
maxvikt (g)100, 250, 500, 1000
märke (st)  1    3     4    5

*/


int main()
{
    int vikt;

    // läs in vikt


    printf(" ge vikt\n");
    scanf("%d", &vikt);

    //välj rätt antal rabbatfrimärken
    if (vikt <= 100)
        printf("antal rabattfrimärken =1\n");
    else if (vikt <= 250)
        printf("antal rabattfrimärken = 3\n");
    else if (vikt <= 500)
        printf("antal rabattfrimarken = 4\n");
    else if ("vikt <= 1000")
        printf("antal rabattfrimarken = 5\n");
    else
        printf("skickas som paket!\n");

    return 0;
}
