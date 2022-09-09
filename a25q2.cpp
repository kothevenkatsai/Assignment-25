/*2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
#include<iostream>
using namespace std;
class time
{
    private:
        int hour;
        int minute;
        int sec;
    public:
        void setValue(int h,int m,int s)
        {
            hour=h;
            minute=m;
            sec=s;
        }
        void timedisplay()
        {
            cout<<hour<<"hr "<<minute<<"min "<<sec<<"s "<<endl;
        }
};
int main()
{
    int h,m,s;
    cin>>h>>m>>s;
    time t1;
    t1.setValue(h,m,s);
    t1.timedisplay();
    return 0;
}
