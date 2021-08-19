#include<bits/stdc++.h>
using namespace std;

int b_search(int a[] , int n , int key)
{
    int l=0,r=n-1,mid,cm=0;

    while(l<=r)
    {
        mid = (l+r)/2;
        cm++;

        if(key==a[mid])
        {
            cout<<"present ";
            return cm;
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
        cout<<"not present ";

    return cm;
}

int main()
{
    int t,n,key;
    cin>>t;

    while(t--)
    {
        cout<<"enter size of array : ";
        cin>>n;
        int a[n];
        cout<<"enter elements : ";
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<"enter key : ";
        cin>>key;

        int c=b_search(a,n,key);

        cout<<c<<"\n";
    }
    return 0;
}
