#include<iostream>
using namespace std;
int main()
{
    double n;
    cin>>n;
    if(n>=0 && n<=25.0000)
    {
        cout<<"Intervalo [0,25]"<<endl;
    }
   else if(n>=25.0000 && n<=50.00001)
    {
        cout<<"Intervalo (25,50]"<<endl;
    }

  else if(n>=50.00001 && n<=75.00002)
    {
        cout<<"Intervalo (50,75]"<<endl;
    }

   else if(n>=75.00002 && n<=100.00003)
    {
        cout<<"Intervalo (75,100]"<<endl;
    }
   else
   {
       cout<<"Fora de intervalo"<<endl;
   }
   return 0;
}
