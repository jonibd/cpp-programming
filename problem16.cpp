#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b,c;
    cin>>a>>b>>c;

    //sort(a);


    //cout<<a[0]<<endl;
    if(a>=b && a>=c )
    {
        cout<<a<<" eh o maior"<<endl;
    }
    else if(b>=a && b>=c)
    {
        cout<<b<<" eh o maior"<<endl;
    }

    else if(c>=a && c>=b)
        cout<<c<<" eh o maior"<<endl;
    return 0;

}
