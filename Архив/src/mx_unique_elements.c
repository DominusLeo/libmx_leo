#include "libmx.h"

/*char **mx_unique_elements(char **src, int count) {
    char **dst = NULL;
//    int z = 0;
    dst = (char **)malloc(sizeof(char *) * count);
    //dst[0] = mx_strdup(src[0]);
    //src = NULL;

    for (int i = 0; i < count; i++) {
        dst[i] = mx_strdup("NULLL");
        //printf("start %s\n", dst[i]);
    }

        for (int i = 0; src[i] != NULL; i++) {
            int flag = 1;
            for (int j = i + 1; j < count; j++) {
                if (mx_strcmp(src[j], dst[i]) == 0) {
                    flag = 0;
                }
            }
            if (flag) {
                dst[i] = mx_strdup(src[i]);
            }
        }
    return dst;
}*/


char **mx_unique_elements(char **src, int count) {
    char **dst = NULL;

    dst = (char **)malloc(sizeof(char *) * count);
    for (int i = 0; i < count; i++)
        dst[i] = NULL;
    int j;
    bool flag = true;

    for (int i = 0; src[i] != NULL; i++) {
        flag = true;
        for (j = 0; dst[j] != NULL && j < count; j++)
            if (mx_strcmp(src[i], dst[j]) == 0)
                flag = false;
        if (flag)
            dst[j] = mx_strdup((src[i]));
    }
    return dst;
}

