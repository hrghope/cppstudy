#include <iostream>

using namespace std;
//reference
int main2()
{
    int i=1;

    const int &refI=i;
    i=2;
    // const reference can't be assigned
    //refI=3;
    cout << "i:" <<i<<",refI:"<<refI<< endl;

    return 0;
}
