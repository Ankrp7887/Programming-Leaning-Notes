#include <iostream>

using namespace std;

class B;                //declearing class B as at line 12 compiler isn't recognise data type B 
class A
{
    private:
    int a = 2;
    public:
    friend void fun(A, B);          //declearing frind function for class B
};
class B
{
    private:
    int b = 3;
    friend void fun(A, B);          //friend func declearation can be done any scope(public/private)
    public:
    
};

void fun(A o1, B o2)                //defining friend fuction...
{
    cout<<"Sum is "<<o1.a + o2.b;
}

int main()
{
    A obj1;
    B obj2;
    fun(obj1, obj2);
}