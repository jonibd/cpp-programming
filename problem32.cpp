#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b)
    {
     double   peramitar = a+b+c;
        cout<<fixed<<setprecision(1)<<"Perimetro"<<" = "<<peramitar<<endl;
    }
    else
    {
       double area=(.5)*(a+b)*c;
       cout<<fixed<<setprecision(1)<<"Area"<<" = "<<area<<endl;
    }
    return 0;
}
