// @name         LibSys
// @version      1.0.0
// @author       streamer0320
// @description  Library information management system (Object oriented programming C++)
// @license      MIT License

#include "LibSys.h"
using namespace std;

void Book::write()
{
    cout << "please input 7 string: ";
    for (int i = 0; i < inf; i++)
    {
        cin >> book[i];
    }
}
void Book::display()
{
    cout << "7 string such as: ";
    for (int i = 0; i < inf; i++)
    {
        cout << book[i] << " ";
    }
}
int main()
{
    Book b;
    b.write();
    b.display();

    return 0;
}