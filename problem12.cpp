#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string name;
    double s,b;
    cin>>name>>s>>b;
    double TS=s+(b*15/100);
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<TS<<endl;
    return 0;

}
