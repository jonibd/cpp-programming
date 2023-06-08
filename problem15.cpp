#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double A,B,C,pi=3.14159;
    cin>>A>>B>>C;
    double area_rt =(1.0/2)*A*C;
    double area_cr = pi*pow(C,2);
    double area_trp = .5*(A+B)*C;
    double area_sq = B*B;
    double area_ret = A*B;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<area_rt<<endl;
    cout<<fixed<<setprecision(3)<<"CIRCULO: "<<area_cr<<endl;
    cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<area_trp<<endl;
    cout<<fixed<<setprecision(3)<<"QUADRADO: "<<area_sq<<endl;
    cout<<fixed<<setprecision(3)<<"RETANGULO: "<<area_ret<<endl;
    return 0;

}


