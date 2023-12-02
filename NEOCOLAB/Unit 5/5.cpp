#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    stringstream ss(input);
    string word;
    vector<string> words;
    while (ss >> word)
    {
        words.push_back(word);
        words.push_back(" ");
    }
    for (string &w : words)
    {
        sort(w.begin(), w.end());
    }
    string ans;
    for (string &w : words)
    {
        ans += w;
    }
    int *k = new int(0);
    cout << ans;         
    delete k;
}