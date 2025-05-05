#include <stdio.h>
#include <sys/stat.h>
#include "sizecmp.h"

void sizecmp(const char *file1, const char *file2) {
    struct stat stat1, stat2;

    if (stat(file1, &stat1) != 0) {
        perror("stat failed for file1");
        return;
    }
    if (stat(file2, &stat2) != 0) {
        perror("stat failed for file2");
        return;
    }

    printf("size compare\n");
    if (stat1.st_size > stat2.st_size)
        printf("%s is bigger\n", file1);
    else if (stat1.st_size < stat2.st_size)
        printf("%s is bigger\n", file2);
    else
        printf("sizes are equal\n");
}
