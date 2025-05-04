#include "filestat.h"
#include "filetime.h"
#include "sizecmp.h"
#include "blockcmp.h"
#include "datecmp.h"
#include "timecmp.h"

int main() {
    filestat1();
    filestat2();
    filetime1();
    filetime2();

    sizecmp();
    blockcmp();
    datecmp();
    timecmp();

    return 0;
}
