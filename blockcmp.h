#ifndef __BLOCKCMP_H__
#define __BLOCKCMP_H__

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

void blockcmp(struct stat s1, struct stat s2, const char* filename1, const char* filename2);

#endif
