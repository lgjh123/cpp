#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int val ;
    cin >> val;
    vector<int> vec {1,2,3,3,4,5,1,2,3};
    auto result = count(vec.cbegin(),vec.cend(),val);
    cout << "The value "<< val << " count " << result << endl;
    return 0;
}

