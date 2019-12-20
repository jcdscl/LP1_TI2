OBJS	= main.o auditorias.o colaboradores.o equipamentos.o vulnerabilidades.o 
SOURCE	= main.c auditorias.c colaboradores.c equipamentos.c vulnerabilidades.c 
HEADER	= headerGlobal.h auditorias.h colaboradores.h equipamentos.h vulnerabilidades.h 
OUT	= exe
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.c
	$(CC) $(FLAGS) main.c 

auditorias.o: auditorias.c
	$(CC) $(FLAGS) auditorias.c 

colaboradores.o: colaboradores.c
	$(CC) $(FLAGS) colaboradores.c 

equipamentos.o: equipamentos.c
	$(CC) $(FLAGS) equipamentos.c 

vulnerabilidades.o: vulnerabilidades.c
	$(CC) $(FLAGS) vulnerabilidades.c



clean:
	rm -f $(OBJS) $(OUT)