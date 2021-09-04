// find pair in an array a[i]+a[j]=a[k]  where i!=j!=k

#include<bits/stdc++.h>
using namespace std;

void find_pair(int a[] , int n)
{
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]==a[k])
                {
                    cout<<i+1<<","<<j+1<<","<<k+1<<"\n";
                    return ;
                }
            }
        }
    }
    cout<<"No sequence found"<<"\n";
}

int main()
{
    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        find_pair(a,n);
    }
}
