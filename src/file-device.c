#include <stdio.h>
#include <sys/stat.h>
#include "file-device.h"

void file_mkdir(const char* path) {
    if(mkdir(path, 0755) == 0) {
        printf("Directory created: %s\n", path);
    } else {
        perror("mkdir failed");
    }
}
