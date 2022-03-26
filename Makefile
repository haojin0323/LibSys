main: admin.o book.o user.o 
	gcc admin.o book.o user.o -o
admin.o: admin.cpp
	gcc admin.cpp
book.o: book.cpp
	gcc book.cpp
user.o: user.cpp
	gcc user.cpp