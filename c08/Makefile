CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRC=$(wildcard ./*/*.c, ./*/*.h)
TARGET=a.out
NFLAGS=-R CheckForbiddenSourceHeader

all : $(TARGET)

$(TARGET) : $(SRC) main.c
	$(CC) $(CFLAGS) $(SRC) main.c

nm : $(SRC)
	norminette $(NFLAGS) $(SRC)

clean : 
	rm $(TARGET)
