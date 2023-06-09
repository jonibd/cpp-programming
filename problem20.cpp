/*  11257
112 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
0 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
1 nota(s) de R$ 5,00
1 nota(s) de R$ 2,00
0 nota(s) de R$ 1,00

                */
#include<iostream>
using namespace std;
int main()
{
    int tk,tknote[7]={100,50,20,10,5,2,1},note,i;
    cin>>tk;
    cout<<tk<<endl;
    for(i=0;i<7;i++)
    {
        note=tk/tknote[i];
        tk%=tknote[i];
        cout<<note<<" nota(s) de R$ "<<tknote[i]<<",00"<<endl;
    }
    return 0;
}
