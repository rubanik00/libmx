#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {

    unsigned const char *frst = s1;
    unsigned const char *sec = s2;

    for (size_t i = 0; i < n; i++){
        if (frst[i] != sec[i]) {
            return frst[i] - sec[i];
        }
    }
    return 0;
}
