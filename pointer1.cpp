#include<iostream>
using namespace std;
class student
{
    public:
    int age;
};
int main()
{
    student s;
    s.age=20;
    student *p=&s;
    cout<<p->age;
    return 0;
}