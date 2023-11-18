#include <iostream>
#include <fstream>
using namespace std;

class test
{
    int ic, qty, price, Item;
    string i_name;

public:
    void get()
    {
        cin >> ic;
        cin >> i_name;
        cin >> qty;
        cin >> price;
    }
    void display()
    {
        cout << ic << " " << i_name << " " << qty << " " << price << endl;
    }
    int ret_price()
    {
        return price;
    }
    string ret_string()
    {
        string tmp = to_string(ic);
        string tmp1 = to_string(qty);
        string tmp2 = to_string(price);
        tmp = tmp + " ";
        tmp = tmp + i_name;

        tmp = tmp + " ";
        tmp = tmp + tmp1;

        tmp = tmp + " ";
        tmp = tmp + tmp2;
        return tmp;
    }
};
int main()
{
    int x;
    cin >> x;
    test obj[x];
    for (int i = 0; i < x; i++)
    {
        obj[i].get();
    }

    // price list
    int arr_pri[x];
    for (int i = 0; i < x; i++)
    {
        arr_pri[i] = obj[i].ret_price();
    }

    // index list
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        arr[i] = i;
    }

    // sorting the price and the index list together
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x - i; j++)
        {
            if (arr_pri[j] > arr_pri[j + 1])
            {
                int tmp = arr_pri[j];
                arr_pri[j] = arr_pri[j + 1];
                arr_pri[j + 1] = tmp;

                int tmp1 = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp1;
            }
        }
    }
    for (int i = x - 1; i >= 0; i--)
        obj[arr[i]].display();

    ofstream file;
    file.open("item.txt",ios::binary);
    for (int i = x - 1; i >= 0; i--)
        file.write((obj[arr[i]].ret_string()).c_str(), (obj[arr[i]].ret_string()).size());
    file.close();
    return 0;
}