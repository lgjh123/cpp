#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main()
{
    deque<string> A;
    std::string buf;
    while( cin >> buf)
    {
        A.push_back(buf);
    }
    auto iter = A.begin();
    for(iter;iter!=A.end();iter++)
    {
        cout << (*iter) << " ";
    }
    cout << endl;
    return 0;
}

