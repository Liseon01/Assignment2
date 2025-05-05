#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

#include "filestat.h"
#include "filetime.h"
#include "sizecmp.h"
#include "blockcmp.h"
#include "datecmp.h"
#include "timecmp.h"

int main() {
    const char *file1 = "./text1";
    const char *file2 = "./text2";

    struct stat stat1, stat2;
    time_t time1, time2;

    filestat1(&stat1);
    filestat2(&stat2);

    filetime1(file1, &time1);
    filetime2(file2, &time2);

    sizecmp(file1, file2);
    blockcmp(file1, file2);
    datecmp(file1, file2);
    timecmp(file1, time1, file2, time2);

    return 0;
}
