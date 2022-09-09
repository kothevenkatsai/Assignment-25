/* 1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int i;
        int a,b;
    public:
        void setValues(int img,int n1,int n2)
        {
            i=img;
            a=n1;
            b=n2;
        }
        void display()
        {
            cout<<a<<"+"<<i<<b;
        }
};
int main()
{
    int a,b,i;
    cin>>a>>b>>i;
    Complex c1;
    c1.setValues(a,b,i);
    c1.display();
    return 0;
}
