#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std::placeholders;
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
    sort(vec.begin(),vec.end(),bind(isShorter,_2,_1));
    for(const auto &v : vec)
    {
        cout << v << " ";
    }
    cout << endl;
    auto count = count_if(vec.begin(),vec.end(),[](string &s1){return s1.size()>3;});
    cout << "size bigger than 3 count = " << count << endl;
    return 0;
}

