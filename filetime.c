#include <stdio.h>
#include <sys/stat.h>
#include <time.h>
#include "filetime.h"

void filetime1(const char *filename, time_t *mtime) {
    struct stat statbuf;
    if (stat(filename, &statbuf) == -1) {
        perror("stat error");
    } else {
        *mtime = statbuf.st_mtime;
        printf("%s modification time loaded.\n", filename);
    }
}

void filetime2(const char *filename, time_t *mtime) {
    struct stat statbuf;
    if (stat(filename, &statbuf) == -1) {
        perror("stat error");
    } else {
        *mtime = statbuf.st_mtime;
        printf("%s modification time loaded.\n", filename);
    }
}