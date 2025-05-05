#include <datecmp.h>>

void datecmp(){

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
    printf("date compare\n");
    // Compare month & date
    if (time1_cpy.tm_mon+1 > time2_cpy.tm_mon+1 || ((time1_cpy.tm_mon+1 == time2_cpy.tm_mon+1) && (time1_cpy.tm_mday > time2_cpy.tm_mday))) {
        printf("Text2 is early\n\n");
    } else if (time1_cpy.tm_mon+1 < time2_cpy.tm_mon+1 || ((time1_cpy.tm_mon+1 == time2_cpy.tm_mon+1) && (time1_cpy.tm_mday < time2_cpy.tm_mday))) {
        printf("Text1 is early\n\n");
    } else {
        printf("same time\n\n");
    }
}