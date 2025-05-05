#include"timecmp.h"

void timecmp(struct stat s1, struct stat s2, const char* filename1, const char* filename2){
    // Get file state
    if (stat(filename1, &s1) != 0) {
        perror("no file");
        return;
    }

    // // Get file state
    if (stat(filename2, &s2) != 0) {
        perror("no file");
        return;
    }

    struct tm time1_cpy = *localtime(&s1.st_mtime);
    struct tm time2_cpy = *localtime(&s2.st_mtime);
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