// find pair in an array a[i]+a[j]=a[k]  where i!=j!=k

#include<bits/stdc++.h>
using namespace std;

int binary(int a[], int l , int r , int s)
{
    int mid,cm=0;

    while(l<=r)
    {
        mid = (l+r)/2;

        if(s==a[mid])
        {
            return mid;
        }
        else if(s<a[mid] && s>=a[l])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    if(l>r)
        return cm;
}

void find_pair(int a[] , int n)
{
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            int k=binary(a,j+1,n-1,a[i]+a[j]);

            if(k!=0)
            {
                cout<<i+1<<","<<j+1<<","<<k+1<<"\n";
                return;
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

