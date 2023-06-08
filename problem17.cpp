#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int d;
    float l;
    cin>>d>>l;
    double kml=(d/l);
    cout<<fixed<<setprecision(3)<<kml<<" km/l"<<endl;
    return 0;
}
