INCLUDE_DIR = include
CC = gcc
# -MMD -MP flags automatically generate dependency tracking files (.d)
CFLAGS = -I$(INCLUDE_DIR) -MMD -MP

OBJECT_DIR = build
SOURCE_DIR = src

LIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

# 1. Automatically find all .c files in src/ and its subdirectories
SRCS = $(shell find $(SOURCE_DIR) -name '*.c')

# 2. Convert source paths to object paths in the build directory
OBJ = $(SRCS:$(SOURCE_DIR)/%.c=$(OBJECT_DIR)/%.o)

# 3. Generate a list of dependency files (.d) from the object list
DEPS = $(OBJ:.o=.d)

# Main target
$(OBJECT_DIR)/main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

# Compile .c to .o and create directories on the fly
$(OBJECT_DIR)/%.o: $(SOURCE_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) -c -o $@ $< $(CFLAGS)

# 4. Include the generated dependency files (ignores errors on first build)
-include $(DEPS)

.PHONY: clean

clean:
	rm -rf $(OBJECT_DIR) *~ core $(INCLUDE_DIR)/*~