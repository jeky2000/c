#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* den här programet beräknar ut kroppen massa och hastighet
*/

int main()

 {



    double massa, hastighet, kinetisk_energi;

    /*läs massa*/


    printf("massa = ");
    scanf("%1f", &massa);

    printf("Hastighet = ");
    scanf("%1f", &hastighet);

    kinetisk_energi = massa * hastighet * hastighet/2;
    printf("kinetisk energi : %f\n", kinetisk_energi);

    return 0;
}
