#include <stdio.h>
#include <stdlib.h>

/*rabbatfrm�rke till olika tunga brev
maxvikt (g)100, 250, 500, 1000
m�rke (st)  1    3     4    5

*/


int main()
{
    int vikt;

    // l�s in vikt


    printf(" ge vikt\n");
    scanf("%d", &vikt);

    //v�lj r�tt antal rabbatfrim�rken
    if (vikt <= 100)
        printf("antal rabattfrim�rken =1\n");
    else if (vikt <= 250)
        printf("antal rabattfrim�rken = 3\n");
    else if (vikt <= 500)
        printf("antal rabattfrimarken = 4\n");
    else if ("vikt <= 1000")
        printf("antal rabattfrimarken = 5\n");
    else
        printf("skickas som paket!\n");

    return 0;
}
