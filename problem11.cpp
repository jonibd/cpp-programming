#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num,h;
    float s;
    cin>>num>>h>>s;
    double salary=h*s;
    cout<<"NUMBER = "<<num<<endl;
    cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<salary<<endl;
    return 0;
}
