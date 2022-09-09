#include<iostream>
using namespace std;
class circle
{
    public:
        int r;
    void area()
    {
        cout<<3.14*r*r;
    }
};
int main()
{
    int r;
    circle c1;
    cin>>r;
    c1.r=r;
    c1.area();
    return 0;
}
