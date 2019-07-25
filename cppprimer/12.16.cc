#include <iostream>
#include <string>
#include <memory>
int main()
{
    std::unique_ptr<int> p1(new int(42));
    int * p2;
    p2 = p1;
    return 0;
}

