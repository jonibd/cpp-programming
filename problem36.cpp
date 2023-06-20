#include<iostream>
using namespace std;
int main()
{
    int s,e,th;
    cin>>s>>e;
    if(e>s)
    {
        th=e-s;
        cout<<"O JOGO DUROU "<<th<<" HORA(S)"<<endl;
    }
    if(s>e)
    {
        th=24+(e-s);
        cout<<"O JOGO DUROU "<<th<<" HORA(S)"<<endl;
    }
    if(s==e)
    {
        cout<<"O JOGO DUROU "<<24<<" HORA(S)"<<endl;
    }
    return 0;
}


