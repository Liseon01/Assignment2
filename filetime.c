#include <stdio.h>
#include "filetime.h"

const char *file1 = "./text1";
const char *file2 = "./text2";

void filetime1() {
    if (stat(file1, &stat1) != 0) {
        perror("no file for text1");
        return;
    }
    
    struct tm *temp = localtime(&stat1.st_mtime);
    if (temp != NULL) {
        time1_val = *temp;
    } else {
        fprintf(stderr, "localtime failed for text1\n");
    }
}

void filetime2() {

    // // Get file state
    if (stat(file2, &stat2) != 0) {
        perror("no file for text2");
        return;
    }

    struct tm *temp = localtime(&stat2.st_mtime);
    if (temp != NULL) {
        time2_val = *temp;
    } else {
        fprintf(stderr, "localtime failed for text2\n");
    }
}

