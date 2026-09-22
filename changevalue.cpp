#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    *p=30;
    cout<<a<<endl;
    return 0;
}