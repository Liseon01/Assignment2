// sizecmp.h
#ifndef SIZECMP_H
#define SIZECMP_H

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

extern struct stat stat1, stat2;

const char *file1 = "./text1";
const char *file2 = "./text2";
void sizecmp();

#endif

