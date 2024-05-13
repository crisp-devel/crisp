#include "core.h"

int run  ();
int main (int argc, char** argv)                 {
    if (!make_at(&core, core) from (0)) return -1;
#ifdef PRESET_FEATURE_LIBC
#include "libc.h"
    if (!make_at(&libc, libc) from (0)) return -2;
#endif

#ifdef PRESET_FEATURE_THREAD
#include "thread.h"
#endif

    if (!mod_new()) return -3;
    this = obj_new           (
        null_t,
        this_t,
        2     ,
        run   ,
        null_t
    );

    del(this);
    mod_del();
    return true_t;
}