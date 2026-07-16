CC = gcc
# -MMD -MP flags automatically generate dependency tracking files (.d)
# -g | debug flag
# -Wall -Wextra | enable extra warning flags
CFLAGS = 	-std=c23 \
			-I/usr/include/GLFW \
			-I/usr/include/vulkan \
			-g  \
			-Wall -Wextra
			

LDFLAGS = 	-L/usr/lib/libglfw.so -lglfw \
			-L/usr/lib/libvulkan.so.1.4.341 -lvulkan

OBJECT_DIR = build
SOURCE_DIR = src

LIBS = -lm

# 1. Automatically find all .c files in src/ and its subdirectories
SRCS := $(wildcard cglm/src/*.c) \
		$(wildcard src/*.c) \
		$(wildcard src/trees/*.c) \
		$(wildcard src/vulkan_renderer/*.c) \
		$(wildcard src/vulkan_renderer/*/*.c) \
		$(wildcard src/random/*.c) \
		$(wildcard src/cJSON/*.c) \
		$(wildcard src/utilities/*/*.c) 

# 2. Convert source paths to object paths in the build directory
OBJ = $(SRCS:$(SOURCE_DIR)/%.c=$(OBJECT_DIR)/%.o)


# Main target
$(OBJECT_DIR)/main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS) $(LDFLAGS)

# Compile .c to .o and create directories on the fly
$(OBJECT_DIR)/%.o: $(SOURCE_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean

clean:
	rm -rf $(OBJECT_DIR) *~ core $(INCLUDE_DIR)/*~
