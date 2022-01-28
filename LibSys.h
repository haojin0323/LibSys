#include <iostream>
#include <string>
#define inf 7	// inf 值为录入信息个数

class Book
{
public:
	Book() {}
	void write();
	void display();
private:
	std::string book[inf];
};