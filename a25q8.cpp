#include<iostream>
using namespace std;
class rectangle
{
    private:
        int l;
        int b;
    public:
        void setvalues(int n1,int n2)
        {
            l=n1;
            b=n2;
        }
        int area()
        {
            return (l*b);
        }

};
int main()
{
    rectangle r1;
    int l,b;
    cin>>l>>b;
    r1.setvalues(l,b);
    cout<<r1.area();
    return 0;
}
