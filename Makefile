CC = gcc
SRC = $(wildcard *.c)
OUT_DIR = bin
OUT = $(patsubst %.c, $(OUT_DIR)/%, $(SRC))

$(OUT_DIR)/%: %.c
	@mkdir -p $(OUT_DIR)
	$(CC) $< -o $@
	@echo "Compiled $< -> $@"

all: $(OUT)
	@echo "✅ All files compiled!"

clean:
	rm -rf $(OUT_DIR)
	@echo "🧹 Cleaned up compiled files!"
