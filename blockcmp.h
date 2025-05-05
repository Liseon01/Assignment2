#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1, stat2;
struct tm *time1, *time2;

const char *file1 = "./text1";
const char *file2 = "./text2";

void blockcmp(){

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

    printf("block compare\n");

    // compare block size
    if (stat1.st_blocks > stat2.st_blocks) {
        printf("Text1 is bigger\n\n");
    } else if (stat1.st_blocks < stat2.st_blocks) {
        printf("Text2 is bigger\n\n");
    } else {
        printf("Sizes are equal\n\n");
    }
}