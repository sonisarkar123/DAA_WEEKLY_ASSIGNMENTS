// JUMP SEARCH IN CPP


#include<bits/stdc++.h>
using namespace std;

int l_search(int a[] , int l , int r , int key , int c , int n)
{
    for(int i=l;i<r && key>=a[i] && i<n ;i++)
    {
        c++;
        if(key==a[i])
        {
            cout<<"present ";
            return c;
        }
    }
    cout<<"not present ";
    return c;
}

int jump_search(int a[] , int n , int key)
{
    int l=0,c=0;
    int m=sqrt(n);
    int r=m;
    while(l<n)
    {
        c++;
        if(key>=a[l] && key<=a[r-1] )
        {
            return l_search(a,l,r,key,c,n)-1;
        }

        l+=m;
        r+=m;

        if(r>=n)
            r=n;
    }
    cout<<"not present ";
    return c;
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

       cout<< jump_search(a,n,key)<<"\n";
    }

}
