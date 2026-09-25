CC = gcc

CFLAGS = -Wall -Wextra

SRC = main.c events.c utils.c

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