#include <iostream>

using namespace std;

class A{};

struct B{};

int main3()
{
  enum aenum{a=2,b,c};

  aenum d=a;

  cout<<d<<endl;

  return 0;
}
