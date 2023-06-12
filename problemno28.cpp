#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,y;
   cin>>x;
    cin>>y;
    double  price[5]={4.00,4.50,5.00,2.00,1.50},totalp;
    totalp=price[x-1]*y;
cout<<fixed<<setprecision(2)<<"Total: R$ "<<totalp<<endl;
   return 0;

}



