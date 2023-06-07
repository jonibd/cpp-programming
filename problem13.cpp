#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int c1,u1;
    double p1;
    int c2,u2;
    double p2;
    cin>>c1>>u1>>p1;
    cin>>c2>>u2>>p2;
    double pay=(u1*p1)+(u2*p2);

    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<pay<<endl;
    return 0;

}
