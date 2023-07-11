#include<iostream>
using namespace std;
int linearsearch(int arry[],int n,int kye)
{
    for(int i;i<n;i++)
    {
        if(arry[i]==kye)
        {
            return i;
        }
    }
    return -1;

}
int main()
{
   int n;
   cin>>n;
   int i,arry[n];
   for(int i=0;i<n;i++)
    {
        cin>>arry[i];
    }
    int kye;
    cin>>kye;
    linearsearch(arry,n,kye);
    cout<< linearsearch(arry,n,kye)<<endl;
    return 0;

}
