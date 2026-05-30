INCLUDE_DIR = include
CC = gcc
# -MMD -MP flags automatically generate dependency tracking files (.d)
CFLAGS = -I$(INCLUDE_DIR) -g

OBJECT_DIR = build
SOURCE_DIR = src

LIBS = -lm

# 1. Automatically find all .c files in src/ and its subdirectories
SRCS = src/*.c \
		src/trees/*.c \
		src/render/*.c \
		src/random/*.c \
		src/cJSON/*.c \
		src/cglm/src/*.c

# 2. Convert source paths to object paths in the build directory
OBJ = $(SRCS:$(SOURCE_DIR)/%.c=$(OBJECT_DIR)/%.o)


# Main target
$(OBJECT_DIR)/main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

# Compile .c to .o and create directories on the fly
$(OBJECT_DIR)/%.o: $(SOURCE_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean

clean:
	rm -rf $(OBJECT_DIR) *~ core $(INCLUDE_DIR)/*~
