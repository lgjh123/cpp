#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void elimDups(vector<string> &words)
{
    sort(words.begin(),words.end()); //字典序
    auto end_unique = unique(words.begin(),words.end());
    //erase repeated elements
    words.erase(end_unique,words.end());
}
bool isShorter(const string&s1,const string &s2)
{
    return s1.size() < s2.size();
}
void biggies (vector<string> &words,vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(),words.end(),isShorter);
}
int main()
{
    vector<string> vec{"qwe","asd","zxc","qweert","asdasdg"};
    sort(vec.begin(),vec.end(),[](string &s1,string &s2 ){return s1.size()>s2.size();});
    for(const auto &v : vec)
    {
        cout << v << " ";
    }
    return 0;
}

