#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=10;
    int *p=&a;
    int *q=&b;
    if(p=q)
     cout<<"same"<<endl;
    else
     cout<<"different"<<endl;
    return 0;
}