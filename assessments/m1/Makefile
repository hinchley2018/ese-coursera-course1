# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS = 

# Target executable
TARGET = main

# Source files
SOURCES = stats.c main.c
OBJECTS = $(SOURCES:.c=.o)

# Test files - automatically discover all test_*.c files
TEST_SOURCES = $(wildcard tests/test_*.c)
TESTS = $(basename $(notdir $(TEST_SOURCES)))

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS) $(LDFLAGS)

# Compile source files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Pattern rule for all tests - automatically generates a rule for each test file
$(TESTS): %: stats.c tests/%.c
	$(CC) $(CFLAGS) -o $@ stats.c tests/$@.c $(LDFLAGS)
# enable the following line to run tests immediately after building
# 	-./$@ 

# Run all tests
test: $(TESTS)
	@echo "All tests generated! Run individual tests by executing their names." 

# Clean build artifacts
clean:
	rm -f $(OBJECTS) $(TARGET) $(TESTS)

.PHONY: all test $(TESTS) clean
