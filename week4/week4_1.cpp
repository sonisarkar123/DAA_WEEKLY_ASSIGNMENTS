#include<iostream>
using namespace std;

void Merge(int ar[] , int l , int m , int r, int *p)
{
    int n1 = m-l+1;
    int n2 = r-m;

    int i,j,k=0,L[n1],R[n2];

    for(i=0;i<n1;i++)
        L[k++]=ar[l+i];

    k=0;
    for(i=0;i<n2;i++)
        R[k++]=ar[m+1+i];

    i=j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
            ar[k++]=L[i++];

        else
            ar[k++]=R[j++];

        (*p)++;
    }

    while(i<n1)
        ar[k++]=L[i++];

    while(j<n2)
        ar[k++]=R[j++];

}


void mergesort(int ar[] , int l , int r , int *p)
{

    if(l<r)
    {
        int m=(l+r)/2;

        mergesort(ar,l,m,p);
        mergesort(ar,m+1,r,p);
        Merge(ar,l,m,r,p);
    }
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,c=0;
        int *p=&c;
        cin>>n;

        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];

        int l=0,r=n-1;
        mergesort(ar,l,r,p);

        for(int i=0;i<n;i++)
            cout<<ar[i]<<"  ";

        cout<<"\ncomparisons="<<*p<<"\n";
    }
}

