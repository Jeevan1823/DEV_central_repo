ABC.exe:factorial.o palindrome.o main.o
	gcc -o ABC.exe factorial.o palindrome.o main.o

factorial.o:factorial.c
	gcc -c factorial.c

palindrome.o:palindrome.c
	gcc -c palindrome.c

main.o:main.c
	gcc -c main.c
