// Quick Sort

#include<bits/stdc++.h>
using namespace std;

int divide(int ar[] , int l , int r, int *p, int *q)
{
    int j=l,i=l-1;
    int pt=ar[r];

    while(j<=r-1)
    {
        (*p)++;
        if(ar[j]<pt)
        {
            i++;
            (*q)++;
            swap(ar[i],ar[j]);
        }
        j++;
    }
    (*q)++;
    swap(ar[r],ar[i+1]);
    return (i+1);
}
void quicksort(int ar[] , int l , int r , int *p , int *q)
{
    if(l<r)
    {
        int id=divide(ar,l,r,p,q);

        quicksort(ar,l,id-1,p,q);
        quicksort(ar,id+1,r,p,q);
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int comp=0 , swp=0;
        int *p=&comp, *q=&swp;

        int ar[n];

        for(int i=0;i<n;i++)
            cin>>ar[i];

        int l=0,r=n-1;
        quicksort(ar,l,r,p,q);

        for(int i=0;i<n;i++)
            cout<<ar[i]<<" ";

        cout<<"\ncomparisons = "<<comp<<"\nswaps = "<<swp<<"\n";
    }
    return 0;
}

