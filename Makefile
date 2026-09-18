CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -pedantic
LDLIBS = -lm
BUILD_DIR = build

SOURCES := $(shell find . -type f -name '*.c' ! -path './$(BUILD_DIR)/*')
TARGETS := $(patsubst ./%.c,$(BUILD_DIR)/%,$(SOURCES))

.PHONY: all clean

all: $(TARGETS)

$(BUILD_DIR)/%: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< $(LDLIBS) -o $@

clean:
	rm -rf $(BUILD_DIR)
