#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float A,B;
    cin>>A>>B;
    double MEDIA = (A*3.5+B*7.5)/(7.5+3.5);
    cout<<"MEDIA = "<<fixed<<setprecision(5)<<MEDIA<<endl;
    return 0;

}
