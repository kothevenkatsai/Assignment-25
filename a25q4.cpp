#include<iostream>
using namespace std;
class LargestNumber
{
    private:
        int n1,n2,n3;
    public:
        void setvalues(int a,int b,int c)
        {
            n1=a;
            n2=b;
            n3=c;
        }
        int largest()
        {
            int maxi=n1;
            if(n2>maxi)
                maxi=n2;
            if(n3>maxi)
                maxi=n3;
            return maxi;
        }

};
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    LargestNumber l1;
    l1.setvalues(n1,n2,n3);
    cout<<"largest number is "<<l1.largest();
    return 0;
}
