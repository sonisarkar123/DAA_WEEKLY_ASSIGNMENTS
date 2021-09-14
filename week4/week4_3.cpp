// find kth smallest element in an array using quick sort

#include<bits/stdc++.h>
using namespace std;

int divide(int ar[] , int l , int r)
{
    int j=l,i=l-1;
    int pt=ar[r];

    while(j<=r-1)
    {
        if(ar[j]<pt)
        {
            i++;
            swap(ar[i],ar[j]);
        }
        j++;
    }
    swap(ar[r],ar[i+1]);
    return (i+1);
}

int quicksort(int a[] , int l, int r, int k)
{
    if(l<r)
    {
        int id=divide(a,l,r);
        if(id==k)
            return id;
        else if(id>k)
            quicksort(a,l,id-1,k);
        else
            quicksort(a,id+1,r,k);
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        cin>>k;
        cout<<a[quicksort(a,0,n-1,k-1)]<<"\n";
    }

}
