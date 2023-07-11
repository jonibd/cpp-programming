#include<iostream>
using namespace std;
int banirysearch(int arry[],int n,int kye)
{
    int s=0,e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arry[mid]==kye)
            return mid;
      else if(arry[mid]>kye)
           {
             e=mid-1;
           }
      else if(arry[mid]<kye)
           {
               s=mid+1;

           }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++)
    {  cin>>arry[i];

    }
    int kye;
    cin>>kye;
    banirysearch(arry, n,kye);
    cout<<banirysearch(arry, n,kye)<<endl;
}
