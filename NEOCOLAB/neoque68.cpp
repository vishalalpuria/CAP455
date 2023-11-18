#include <iostream>
#include <fstream>
using namespace std;
class Employee
{
    struct my_data
    {
        int id;
        string name;
        int age;
    } ob_st;

public:
    void addEmployee(const string& filename, const Employee& employee);
    void createFile(const string& filename)
    {
        fstream File;
        File.open(filename,ios::app);
        File.close();
        cout << "File " << filename << " created successfully!\n";
    }
    void addEmployee(const string& filename)
    {   
        fstream File1;
        File1.open(filename, ios::ate|ios::app);
        File1 << ob_st.id;
        File1 << ",";
        File1 << ob_st.name;
        File1 << ",";
        File1 << ob_st.age;
        File1 << "\n";
        File1.close();
    }
    void displayEmployees(const std::string& filename)
    {   
        string s;
        ifstream obj;
        obj.open(filename);
        while(obj.eof() == 0)
        {   
            getline(obj,s);
            cout << s << endl;
        }
        obj.close();
    }
    void get()
    {   
        string st;
        cin >> ob_st.id;
        cin.ignore();
        getline(cin,ob_st.name);
        cin >> ob_st.age;
    }
    
};

int main()
{
    int x;
    string f = "employees.txt";
    Employee obj[50];
    cin >> x;
    for(int i = 0 ; i < x; i++)
    {
        obj[i].get();
    }
    obj[0].createFile(f);
    for(int i = 0 ; i < x; i++)
    {
        obj[i].addEmployee(f);
    }
    cout << "List of Employees:\n";
    obj[0].displayEmployees(f);

    return 0;
}