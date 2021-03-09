CC		= gcc
SRCS		= $(wildcard ./src/*.c) 
OBJS		= $(SRCS:.c=.o)
TARGET		= a.out
LIBS		= -lft
LIB_DIRS	= -L~
INC		= -I./includes

all : $(TARGET)
	$(CC) -o $(TARGET) $(OBJS) $(INC) $(LIB_DIRS) $(LIBS)

$(TARGET) :
	$(CC) -c $(SRCS) $(INC) $(LIB_DIRS) $(LIBS)

clean :
	rm $(OBJS) $(TARGET)

fclean :

re :
	make fclean
	make all

libft.a : $(TARGET)
	$(CC) -o $(TARGET) $(OBJS) $(INC) $(LIB_DIRS) $(LIBS)

