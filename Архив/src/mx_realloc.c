#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    char *dst = NULL;
    int len = sizeof(ptr) + 4;

    if((int)size >= 0) {
        if((int)size != 0 && len > (int)size)
            return ptr;
        dst = malloc(size);
        dst = mx_memcpy(dst, ptr, size);
        free(ptr);
    }
    return dst;
}
