#include <stdio.h>
#include <sys/stat.h>
#include "filestat.h"

struct stat stat1, stat2;

void filestat1() {
    if(stat("text1.txt", &stat1) == -1) {
        perror("stat error for text1.txt");
    }
}

void filestat2() {
    if(stat("text2.txt", &stat2) == -1) {
        perror("stat error for text2.txt");
    }
}
