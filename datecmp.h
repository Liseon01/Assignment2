#ifndef __DATECMP_H__
#define __DATECMP_H__

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

void datecmp(const char* filename1, const char* filename2);
#endif