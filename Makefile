
CC = gcc
CFLAGS = -g -Wall
BIN_DIR = bin

# Get all .c files in the folder
SRCS = $(wildcard *.c)
# Map source files to bin outputs
BINS = $(patsubst %.c, $(BIN_DIR)/%, $(SRCS))

# Default target: compile everything
all: $(BIN_DIR) $(BINS)

# Create bin/ directory if not exists
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Rule for compiling all .c files into bin/
$(BIN_DIR)/%: %.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@ -lm

# Rule for compiling a single file like: make filename
%: %.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $(BIN_DIR)/$@ -lm

# Clean build directory
clean:
	rm -rf $(BIN_DIR)
