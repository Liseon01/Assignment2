// filetime.h
#ifndef FILETIME_H
#define FILETIME_H

#include <stdio.h> 
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

extern struct stat stat1, stat2;
extern struct tm time1_val, time2_val;
extern struct tm *time1, *time2;

void filetime1();
void filetime2();

#endif

