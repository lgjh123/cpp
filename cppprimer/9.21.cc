#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string word;
    vector<string> vec;
    auto iter = vec.begin();
    while(cin >> word)
    {
        iter = vec.insert(iter, word);
    }
    while(iter!=vec.end())
    {
        cout << *iter << " ";
        iter++;
    }
    return 0;
}

