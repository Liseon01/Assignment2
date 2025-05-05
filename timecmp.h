#ifndef __TIMECMP_H__
#define __TIMECMP_H__

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

void timecmp(const char* filename1, const char* filename2);

#endif