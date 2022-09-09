#include<iostream>
using namespace std;
class ReverseNumber
{
    public:
    int n;
    void Reverse()
    {
        int sum=0;
        while(n>0)
        {
            int a=n%10;
            sum=sum*10+a;
            n=n/10;
        }
        cout<<sum;
        }
};
int main()
{
    ReverseNumber r1;
    int n;
    cin>>n;
    r1.n=n;
    r1.Reverse();
    return 0;
}
