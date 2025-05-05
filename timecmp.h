#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1, stat2;
struct tm *time1, *time2;

const char *file1 = "./text1";
const char *file2 = "./text2";

void timecmp(){
    // Get file state
    if (stat(file1, &stat1) != 0) {
        perror("no file");
        return;
    }

    // // Get file state
    if (stat(file2, &stat2) != 0) {
        perror("no file");
        return;
    }

    struct tm time1_cpy = *localtime(&stat1.st_mtime);
    struct tm time2_cpy = *localtime(&stat2.st_mtime);
    printf("time compare\n");

    // Compare hour & minute.
    if ((time1_cpy.tm_hour > time2_cpy.tm_hour) || 
        ((time1_cpy.tm_hour == time2_cpy.tm_hour) && (time1_cpy.tm_min > time2_cpy.tm_min))) {
        printf("Text2 is early\n\n");
    } else if ((time1_cpy.tm_hour < time2_cpy.tm_hour) || 
               ((time1_cpy.tm_hour == time2_cpy.tm_hour) && (time1_cpy.tm_min < time2_cpy.tm_min))) {
        printf("Text1 is early\n\n");
    } else {
        printf("same time\n\n");
    }
}