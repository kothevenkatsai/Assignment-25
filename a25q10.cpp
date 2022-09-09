#include<iostream>
using namespace std;
class area
{
    private:
        int side;
        int length,breadth;
        int radius;
    public:
        void areas(int s)
        {
            side=s;
            cout<<"area of square is "<<side*side<<endl;
        }
        void arear(int l,int b)
        {
            length=l;
            breadth=b;
            cout<<"area of rectangle is "<<l*b<<endl;
        }
        void areac(int r,float f)
        {
             radius=r;
             cout<<"area of circle is "<<3.14*r*r<<endl;
        }

};
int main()
{
    int s,l,b,r;
    area a1;
    cout<<"Enter side of a square ";
    cin>>s;
    a1.areas(s);
    cout<<"Enter length & breadth of rectangle ";
    cin>>l>>b;
    a1.arear(l,b);
    cout<<"Enter radius of a circle ";
    cin>>r;
    a1.areac(r,3.14);
    return 0;
}
