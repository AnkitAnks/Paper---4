#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);

    int l=0,r=n-1;
    int mn=INT_MAX;
    int f,s;
    while(l<r)
    {
        if(abs(arr[l]+arr[r])<abs(mn))
        {
            mn=arr[l]+arr[r];
            f=arr[l];
            s=arr[r];
        }
        if(abs(arr[l])>abs(arr[r]))
           l++;
        else
            r--;
    }
    cout<<f<<" "<<s<<"\n";
}
