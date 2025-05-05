#include <stdio.h>
#include <sys/stat.h>
#include <time.h>
#include "filetime.h"

void filetime(const char *filename, time_t *file_time) {
    struct stat statbuf;
    if (stat(filename, &statbuf) != 0) {
        perror("stat failed in filetime");
        return;
    }

    *file_time = statbuf.st_mtime;

    struct tm *temp = localtime(file_time);
    if (temp != NULL) {
        printf("%s: time information successfully retrieved\n", filename);
    } else {
        fprintf(stderr, "localtime failed for %s\n", filename);
    }
}
