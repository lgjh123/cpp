#include <iostream>
#include <list>
#include <deque>
using namespace std;
int main()
{
    list<int> L{1,2,3,4,5,6,7,8};
    list<int>::const_iterator iter = L.begin();
    deque<int> Q1;
    deque<int> Q2;
    while(iter!=L.end())
    {
        if(0==(*iter)%2)
        {
            Q1.push_back((*iter));
        }
        else
            Q2.push_back((*iter));
        iter++;
    }
    for(auto iter = Q1.cbegin();iter!=Q1.end();iter++)
    {
        cout << "even :" << *iter <<endl;
    }
    for(auto iter = Q2.cbegin();iter!=Q2.end();iter++)
    {
        cout << "oddd :" << *iter <<endl;
    }
    
    return 0;
}

