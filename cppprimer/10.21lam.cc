#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    auto f = [&num] (){return num==0 ? 0 : num--;};
    while(num != 0)
    {
        f();
        cout << "num = " << num << endl;
    }
    return 0;
}

