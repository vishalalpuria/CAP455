
#include <iostream>
using namespace std;
void removeDupWord(string str)
{
	string word = "Name: ";
	for (auto x : str)
	{
		if (x == ' ')
		{
			cout << word << endl;
			word = "Password: ";
		}
		else
		{
			word = word + x;
		}
	}
	cout << word << endl;
}

int main()
{
	string str;
	getline(cin, str);
	removeDupWord(str);
	return 0;
}
