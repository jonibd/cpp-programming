#include<iostream>
using namespace std;
int main()
{
    int x,y,z,temp,a,b,c;
    cin>>x>>y>>z;
   a=x;
   b=y;
   c=z;
   if(a>b)
   {
       temp=a;
       a=b;
       b=temp;

   }
 if(a>c)
        {
       temp=a;
       a=c;
       c=temp;

   }
 if(b>c)
   {
       temp=b;
       b=c;
       c=temp;

   }
cout<<a<<endl<<b<<endl<<c<<endl<<endl;

cout<<x<<endl<<y<<endl<<z<<endl;

  return 0;

}

