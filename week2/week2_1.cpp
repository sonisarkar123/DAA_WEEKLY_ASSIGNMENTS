// find key using Binary Search

#include<bits/stdc++.h>
using namespace std;

int frequency(int a[], int n , int x , int key)
{
    int l=x,r=x;
    int c=1;

    while(a[--l]==key)
        c++;
    while(a[++r]==key)
        c++;

    return c;
}

int b_search(int a[] , int n , int key)
{
    int l=0,r=n-1,mid,cm=0;

    while(l<=r)
    {
        mid = (l+r)/2;
        cm++;

        if(key==a[mid])
        {
            cout<<key<<"-";
            return frequency(a,n,mid,key);
        }
        else if(key<a[mid] && key>=a[l])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    if(l>r)
        cout<<key<<"-";

    return 0;
}

int main()
{
    int t,n,key;
    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        cin>>key;

        int c=b_search(a,n,key);

        cout<<c<<"\n";
    }
    return 0;
}
