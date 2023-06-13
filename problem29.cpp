#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n1,n2,n3,n4,e;
    double avg1,avg2;
    cin>>n1>>n2>>n3>>n4;

    avg1=(n1*2+n2*3+n3*4+n4*1)/(2+3+4+1);
    cout<<fixed<<setprecision(1)<<"Media: "<<avg1<<endl;

    if(avg1>=7.0)
    {

        cout<<"Aluno aprovado."<<endl;
    }
    else  if(avg1<5.0)
    {

        cout<<"Aluno reprovado."<<endl;
    }
    else
    {
        cin>>e;
        cout<<"Aluno em exame."<<endl;

        cout<<"Nota do exame: "<<e<<endl;
        avg2=(avg1+e)/2;
        if(avg2>=5.0)
        {
            cout<<"Aluno aprovado."<<endl;
        }
        else

            cout<<"Aluno reprovado."<<endl;
        cout<<"Media final: "<<avg2<<endl;

    }


    return 0;
}


