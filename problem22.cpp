#include<iostream>
using namespace std;
int main()
{
  int d,year,month,day;
  cin>>d;
   year=(d/365);
   d=d%365;
   month=(d/30);
   d=d%30;
   day=d;
   cout<<year<<" ano (s)"<<endl;
   cout<<month<<" mes (es)"<<endl;
   cout<<day<<" dia (s)"<<endl;

return 0;
}
