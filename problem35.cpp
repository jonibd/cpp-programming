#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double A,B,C,temp;
    cin>>A>>B>>C;

    if(A<B)
    {
        temp=A;
        A=B;
        B=temp;
    }
    if(A<C)
    {
        temp=A;
        A=C;
        C=temp;
    }
    if(B<C)
    {
        temp=B;
        B=C;
        C=temp;
    }


    if(A>=B+C)
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
        return 0;
    }
    if(pow(A,2)==pow(B,2)+pow(C,2))
    {
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    if(pow(A,2)>pow(B,2)+pow(C,2))
    {
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    if(pow(A,2)<pow(B,2)+pow(C,2))
    {
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if(A==B &&  A==C)
    {
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    if(A==B && A!=C || B==C && A!=C)
    {
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }


}

