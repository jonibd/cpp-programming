#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double R,pi=3.14159;
    cin>>R;
    double volume = (4.0/3)*pi*pow(R,3);

    cout<<fixed<<setprecision(3)<<"VOLUME = "<<volume<<endl;
    return 0;

}

