# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS = 

# Target executable
TARGET = main

# Source files
SOURCES = stats.c main.c
OBJECTS = $(SOURCES:.c=.o)

# Test files
TEST_SRC = tests/test_stats.c
TEST_EXE = test_stats

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS) $(LDFLAGS)

# Compile source files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Build and run tests
test: $(TEST_EXE)

# Link test executable with stats.c
$(TEST_EXE): $(TEST_SRC) stats.c stats.h
	$(CC) $(CFLAGS) -o $(TEST_EXE) $(TEST_SRC) stats.c $(LDFLAGS)

# Clean build artifacts
clean:
	rm -f $(OBJECTS) $(TARGET) $(TEST_EXE)

.PHONY: all test clean
