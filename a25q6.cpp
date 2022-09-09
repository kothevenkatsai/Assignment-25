#include<iostream>
using namespace std;
int cnt=0;
class square
{
    public:
        int n;
    void sq()
    {
        cnt++;
        cout<<n*n<<endl;
    }
};
int main()
{
    square s1,s2;
    int n;
    cin>>n;
    s1.n=n;
    s1.sq();
    cin>>n;
    s2.n=n;
    s2.sq();
    cout<<"cnt= "<<cnt;
    return 0;
}
