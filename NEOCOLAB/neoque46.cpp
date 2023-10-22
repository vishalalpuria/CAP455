#include <iostream>
using namespace std;
class Book
{
    string n1,n2;
    int year;
public:
    void get()
    {   
        cin.ignore();
        getline(cin,n1);
        getline(cin,n2);
        cin >> year;
    }
    void display()
    {
        cout << "\nTitle: " << n1;
        cout << "\nAuthor: " << n2;
        cout << "\nPublication Year: " << year;
    }
};
int main()
{
    int x;
    cin >> x;
    Book obj[x];
    for (int i = 0; i < x; i++)
    {
        obj[i].get();
    }
    cout << "Book Information: ";
    for (int i = 0; i < x; i++)
    {   
        cout << "\nBook "<< i+1 <<":";
        obj[i].display();
    }

    return 0;
}