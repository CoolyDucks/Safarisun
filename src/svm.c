#include <stdio.h>
#include <string.h>
#include "svm.h"
#include "time-device.h"
#include "file-device.h"

void svm_run(const char* code) {
    if (strncmp(code, "say(", 4) == 0) {
        const char* start = code + 4;
        const char* end = strchr(start, ')');
        if (end) {
            char message[256];
            int len = end - start;
            if (len > 255) len = 255;
            strncpy(message, start, len);
            message[len] = '\0';
            
            // دعم Tags و Animations (مبدئي)
            if(strstr(code, ".right")) {
                printf("%50s\n", message); // Right-aligned
            } else if(strstr(code, ".left")) {
                printf("%-50s\n", message); // Left-aligned
            } else {
                printf("%s\n", message);
            }
        }
    } else if(strcmp(code, "use time.device") == 0) {
        print_local_time();
        print_utc_time();
    } else if(strncmp(code, "mkdir", 5) == 0) {
        // مثال على ملف-device
        file_mkdir(code + 6);
    } else {
        printf("Unknown command: %s\n", code);
    }
}
