#include <stdio.h>
#include <sys/stat.h>
#include "filestat.h"

void filestat1(struct stat *statbuf) {
    if (stat("./text1", statbuf) == -1) {
        perror("stat error for text1");
    } else {
        printf("Successfully loaded file information for text1.\n");
    }
}

void filestat2(struct stat *statbuf) {
    if (stat("./text2", statbuf) == -1) {
        perror("stat error for text2");
    } else {
        printf("Successfully loaded file information for text2.\n");
    }
}
