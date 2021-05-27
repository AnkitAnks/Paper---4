#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i]=arr[i]*10;
    }
    for(int i=0;i<n;i++)
    {
        int x=arr[i]/10;
        if(arr[x-1]%10==0)
            arr[x-1]=arr[x-1]+1;

        else if(arr[x-1]%10==1)
            arr[x-1]=arr[x-1]+1;
    }
    for(int i=1;i<=n;i++)
    {
        int x=arr[i-1]%10;
        if(x==2)
            cout<<i<<" ";
    }

}
