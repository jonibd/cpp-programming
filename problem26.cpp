#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,R1,R2;
    cin>>a>>b>>c;
   if(a>0 && b>0 && c>0 && (b*b-4*a*c)>0)
    {
        R1 = (-b+ sqrt (b*b-4*a*c))/(2*a);
        R2 = (-b- sqrt(b*b-4*a*c))/(2*a);
        cout<<fixed<<setprecision(5)<<"R1 = "<<R1<<endl;
        cout<<fixed<<setprecision(5)<<"R2 = "<<R2<<endl;
    }
    else
    {
        cout<<"Impossivel calcular"<<endl;
    }

    return 0;

}
