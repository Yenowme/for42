CC=gcc
CFLAGS=-Wall -Wextra -Werror
HEAD=$(wildcard ./*/*.h)
SRC=$(wildcard ./*/*.c)
TARGET=a.out
NFLAGS=-R CheckForbiddenSourceHeader

all : $(TARGET)

$(TARGET) : $(SRC) main.c
	$(CC) $(CFLAGS) $(SRC) $(HEAD) main.c

nm : $(SRC)
	norminette $(NFLAGS) $(SRC) $(HEAD)

clean : 
	rm $(TARGET)
