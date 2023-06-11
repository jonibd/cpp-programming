#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    double amount;
    cin>>amount;
    int tk = amount*100;
   int cn=tk%100;
    int i,tknote[6]= {10000,5000,2000,1000,500,200},note;

    cout<<"NOTAS:"<<endl;
    for(i=0; i<6; i++)
    {
        note=tk/tknote[i];
        cout<<note<<" nota(s) de R$ "<<tknote[i]/100<<".00"<<endl;
        tk=tk%tknote[i];
    }

    int p=tk;
    int tkcoin[6]={100,50,25,10,5,1},coin;
    cout<<"MOEDAS:"<<endl;
    for(i=0; i<6; i++)
    {
        coin=p/tkcoin[i];
    cout<<fixed<<setprecision(2)<<coin<<" moeda(s) de R$  "<<tkcoin[i]/100.00<<endl;
        p=p%tkcoin[i];
    }

    return 0;

}
