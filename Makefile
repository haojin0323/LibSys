main: admin.o book.o user.o 
	g++ admin.o book.o user.o -o
admin.o: admin.cpp
	g++ admin.cpp
book.o: book.cpp
	g++ book.cpp
user.o: user.cpp
	g++ user.cpp