#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int t,v,dis;
    cin>>t>>v;
    dis = (t*v);
    double tl = (dis/12.0);
    cout<<fixed<<setprecision(3)<<tl<<endl;
   return 0;
}

