#ifndef __BLOCKCMP_H__
#define __BLOCKCMP_H__

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1, stat2;
struct tm *time1, *time2;

const char *file1 = "./text1";
const char *file2 = "./text2";

void blockcmp();

#endif
