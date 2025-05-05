#include <stdio.h>
#include "filetime.h"

void filetime1() {
    struct tm *temp = localtime(&stat1.st_mtime);
    if (temp != NULL) {
        time1_val = *temp;
    } else {
        fprintf(stderr, "localtime failed for text1\n");
    }
}

void filetime2() {
    struct tm *temp = localtime(&stat2.st_mtime);
    if (temp != NULL) {
        time2_val = *temp;
    } else {
        fprintf(stderr, "localtime failed for text2\n");
    }
}

