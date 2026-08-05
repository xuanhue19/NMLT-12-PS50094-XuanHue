#include <stdio.h>
#include <string.h>

int main ()
{

    char string1 [20] = "FpT PolytEchnIc HCM";
    char string2 [20] = " ";

    strlwr (string1);
    printf ("Chuoi 1: %s \n", string1);
    strlwr (string1);
    printf ("Chuoi 2: %s \n", string1);


    return 0;
}

