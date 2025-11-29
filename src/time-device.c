#include <stdio.h>
#include <time.h>
#include "time-device.h"

void print_local_time() {
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    printf("[Local] %02d:%02d:%02d\n", t->tm_hour, t->tm_min, t->tm_sec);
}

void print_utc_time() {
    time_t now = time(NULL);
    struct tm *t = gmtime(&now);
    printf("[UTC]   %02d:%02d:%02d\n", t->tm_hour, t->tm_min, t->tm_sec);
}
