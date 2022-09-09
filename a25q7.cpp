#include<iostream>
using namespace std;
class Greatest
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
        int LargestNumber()
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
    Greatest g1;
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    g1.setvalues(n1,n2,n3);
    cout<<g1.LargestNumber();
    return 0;
}
