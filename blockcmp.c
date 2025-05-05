#include "blockcmp.h"
void blockcmp(struct stat s1, struct stat s2, const char* filename1, const char* filename2){

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

    printf("block compare\n");

    // compare block size
    if (s1.st_blocks > s2.st_blocks) {
        printf("Text1 is bigger\n\n");
    } else if (s1.st_blocks < s2.st_blocks) {
        printf("Text2 is bigger\n\n");
    } else {
        printf("Sizes are equal\n\n");
    }
}