CC = gcc
CFLAGS = -Wall -Wextra -I./src
SRC = src/main.c src/events.c src/utils.c
OBJ = $(SRC:.c=.o)
TARGET = event-tracker

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean