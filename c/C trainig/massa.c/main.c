#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* den h�r programet ber�knar ut kroppen massa och hastighet
*/

int main()

 {



    double massa, hastighet, kinetisk_energi;

    /*l�s massa*/


    printf("massa = ");
    scanf("%1f", &massa);

    printf("Hastighet = ");
    scanf("%1f", &hastighet);

    kinetisk_energi = massa * hastighet * hastighet/2;
    printf("kinetisk energi : %f\n", kinetisk_energi);

    return 0;
}
