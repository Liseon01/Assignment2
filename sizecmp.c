#include "sizecmp.h"

void sizecmp() {
    if (stat(file1, &stat1) != 0) {
        perror("no file");
        return;
    }

    // // Get file state
    if (stat(file2, &stat2) != 0) {
        perror("no file");
        return;
    }

    printf("size compare\n");
    if (stat1.st_size > stat2.st_size)
        printf("text1 is bigger\n");
    else if (stat1.st_size < stat2.st_size)
        printf("text2 is bigger\n");
    else
        printf("sizes are equal\n");
}

