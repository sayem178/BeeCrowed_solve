CC = gcc
CFLAGS = -g -Wall
BIN_DIR = bin

# All source files
SRCS = $(wildcard *.c)
# All binaries in bin/
BINS = $(patsubst %.c, $(BIN_DIR)/%, $(SRCS))

TARGET ?= main

all: $(BIN_DIR) $(BINS)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Build single target
$(BIN_DIR)/$(TARGET): $(TARGET).c | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@ -lm

# Build all sources
$(BIN_DIR)/%: %.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@ -lm

clean:
	rm -rf $(BIN_DIR)
