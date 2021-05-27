#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,ans=INT_MAX;
    cin>>n>>x>>y;
    set<int> X,Y;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==x) X.insert(i);
        if(a[i]==y) Y.insert(i);
    }

    for(auto it=X.begin();it!=X.end();++it)
    {
       auto it1=Y.lower_bound(*it);
        if(it1==Y.end()) break;
        else ans=min(ans,*it1-*it);
    }
    for(auto it=Y.begin();it!=Y.end();++it)
    {
       auto it1=X.lower_bound(*it);
        if(it1==X.end()) break;
        else ans=min(ans,*it1-*it);
    }
    cout<<ans;
}
