#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double x1,x2,y1,y2;
    cin>>x1>>x2;
    cin>>y1>>y2;
    double dis = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    cout<<fixed<<setprecision(4)<<dis<<endl;
    return 0;
}
