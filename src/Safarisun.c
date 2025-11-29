#include <stdio.h>
#include <string.h>
#include "svm.h"
#include "time-device.h"
#include "file-device.h"

// يحدد نوع الأمر ويرسله للوحدة الصحيحة
void execute_code(const char* code) {
    if (strncmp(code, "say(", 4) == 0) {
        svm_run(code);
    } 
    else if (strcmp(code, "use time.device") == 0) {
        print_local_time();
        print_utc_time();
    } 
    else if (strncmp(code, "mkdir ", 6) == 0) {
        file_mkdir(code + 6); // يمرر المسار
    } 
    else {
        printf("Unknown command: %s\n", code);
    }
}

int main(int argc, char *argv[]) {
    printf("=== Safarisun 1.0 Alpha ===\n");

    if(argc < 2) {
        printf("Usage: %s <code> ...\n", argv[0]);
        return 1;
    }

    for(int i = 1; i < argc; i++) {
        execute_code(argv[i]);
    }

    return 0;
}
