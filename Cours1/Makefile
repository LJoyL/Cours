CC=gcc
CFLAGS =-Wall -Wextra -g -Iincludes

 #Commentaires

 #Syntaxe de base :
 #cible : dependances
 #[tab] commandes qui permet de passer des dépendances à la cible

 #Création d'un executable en C :
 #1. Compilation : .c -> .o
 #2. Edition des liens : *.o -> executables

test_list : src/list.o src/element.o src/main.o
	$(CC) src/list.o src/element.o src/main.o -o test_list

src/list.o : src/list.c
	$(CC) $(CFLAGS) src/list.c -c -o src/list.o

src/element.o : src/element.c
	$(CC) $(CFLAGS) src/element.c -c -o src/element.o

src/main.o : src/main.c
	$(CC) $(CFLAGS) src/main.c -c -o src/main.o
