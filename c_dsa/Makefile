CC = gcc
CFLAGS = -Wall -I include
LDFLAGS = -lcunit

SRCS = src/main.c src/bigo.c
OBJS = $(SRCS:.c=.o)
TARGET = bin/run_dsa

TEST_SRCS = tests/test_main.c src/bigo.c
TEST_OBJS = $(TEST_SRCS:.c=.o)
TEST_TARGET = bin/run_tests

.PHONY: all clean test

all: $(TARGET)

$(TARGET): $(OBJS)
	@mkdir -p bin
	$(CC) $(OBJS) -o $(TARGET) $(LDFLAGS)

test: $(TEST_TARGET)
	./$(TEST_TARGET)

$(TEST_TARGET): $(TEST_OBJS)
	@mkdir -p bin
	$(CC) $(TEST_OBJS) -o $(TEST_TARGET) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TEST_OBJS) $(TARGET) $(TEST_TARGET)
	rm -rf bin 