#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(string &s1)
{
    if(s1.size() >= 5)
    {
        return true;
    }
    else
        return false;

}
int main()
{
    vector<string> vec{"a","ab","abc","abcde","abcd","abcdef"};
    
    auto iter = partition(vec.begin(),vec.end(),cmp);
    auto iter2 = vec.begin();
    while(iter2 != iter)
    {
        cout << *iter2 << " ";
        iter2++;
    }
    return 0;
}

