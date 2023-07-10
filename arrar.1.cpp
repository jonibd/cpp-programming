#include<iostream>
using namespace std;
int main()
{  int n;
cin>>n;
   int array[n];
   for(int i=0;i<n;i++)
    {  cin>>array[i];

    }
    int maxno=array[0];
    int minino=array[1];
for(int i=0;i<n;i++)
    { if(maxno>array[i])
    maxno=array[i];
       if(minino<array[i])
        minino=array[i];
    }
    cout<<maxno<<" "<<minino<<endl;
  return 0;

}
