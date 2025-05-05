#include <stdio.h>
#include <sys/stat.h>
#include "filestat.h"

struct stat stat1, stat2;

void filestat1() {
    if (stat("text1", &stat1) == -1) {
        perror("stat error for text1");
    } else {
        printf("Successfully loaded file information for text1.\n");
    }
}

void filestat2() {
    if (stat("text2", &stat2) == -1) {
        perror("stat error for text2");
    } else {
        printf("Successfully loaded file information for text2.\n");
    }
}
