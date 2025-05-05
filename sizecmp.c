#include <stdio.h>
#include "sizecmp.h"

void sizecmp() {
    printf("size compare\n");
    if (stat1.st_size > stat2.st_size)
        printf("text1 is bigger\n");
    else if (stat1.st_size < stat2.st_size)
        printf("text2 is bigger\n");
    else
        printf("sizes are equal\n");
}

