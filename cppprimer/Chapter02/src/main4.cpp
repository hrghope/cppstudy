#include <iostream>
#include "head1.h"

using namespace std;
extern const int &p;
//int k=10;
int main4()
{
    j=5;
    extern int o;//�ڴ˴�������������������޷�ʹ�á����������Ķ�����main4_2��
    cout<<i<<endl;//ͷ�ļ��ж���ĳ���
    cout<<j<<endl;//ͷ�ļ��ж���ı������˴��޸�Ϊ5
    cout<<k<<endl;//��ͷ�ļ�����������main4_2�ж��壬�ڴ˴�ʹ��
    cout<<l<<endl;//ͷ�ļ��ж���ĳ�������Ȼ��extern������Ҳ��ʼ����
    cout<<m<<endl; //��ͷ�ļ�������������main4_2�ж��壬ע�ⶨ��ʱ������extern�ؼ���
    cout<<o<<endl;

    cout<<p<<endl;
    return 0;
}
