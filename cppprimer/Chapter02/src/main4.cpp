#include <iostream>
#include "head1.h"

using namespace std;
extern const int &p;
//int k=10;
int main4()
{
    j=5;
    extern int o;//在此处声明，如果不声明，无法使用。但是真正的定义在main4_2中
    cout<<i<<endl;//头文件中定义的常量
    cout<<j<<endl;//头文件中定义的变量，此处修改为5
    cout<<k<<endl;//在头文件中声明，在main4_2中定义，在此处使用
    cout<<l<<endl;//头文件中定义的常量，虽然是extern，但是也初始化了
    cout<<m<<endl; //在头文件声明，但是在main4_2中定义，注意定义时必须用extern关键字
    cout<<o<<endl;

    cout<<p<<endl;
    return 0;
}
