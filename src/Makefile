# Compiler & Flags
CC = gcc
CFLAGS = -Wall -O2 -I.   # <- <- هذا السطر مهم: -I. يعني ابحث في نفس المجلد عن الهيدرز

# Source files
SRC = Safarisun.c svm.c time-device.c file-device.c

# Output executable
OUT = safarisun

# Default target
all: $(OUT)

# Build command
$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

# Clean build files
clean:
	rm -f $(OUT)
