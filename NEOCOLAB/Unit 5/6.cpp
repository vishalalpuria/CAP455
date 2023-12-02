// You are using GCC
#include <bits/stdc++.h>
using namespace std;
class Color
{
public:
    virtual void paint() = 0;
};
class RedPaint : public Color
{
public:
    void paint()
    {
        cout << "I'm Painting with Red color.";
    };
};
class BluePaint : public Color
{
public:
    void paint()
    {
        cout << "I'm Painting with Blue color.";
    };
};

int main()
{
    char color;
    cin >> color;

    if (color == 'R' || color == 'r')
    {
        Color *obj = new RedPaint();
        obj->paint();
        delete obj;
    }
    else if (color == 'B' || color == 'b')
    {
        Color *obj = new BluePaint();
        obj->paint();
        delete obj;
    }
    else
    {
        cout << "Invalid choice!";
    }

    return 0;
}