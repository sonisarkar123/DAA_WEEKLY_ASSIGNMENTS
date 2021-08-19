// EXPONENTIAL SEARCH IN CPP


#include<bits/stdc++.h>
using namespace std;

int l_search(int a[] , int l , int r , int key , int c , int n)
{
    for(int i=l;i<r && i<n ;i++)
    {c++;
        if(key==a[i])
        {
            cout<<"present ";
            return c;
        }
        if(key<a[i])
        {
            break;
        }
    }
    cout<<"not present ";
    return c;
}

int exp_search(int a[] , int n , int key)
{
    int l=0,r=2,i=1,c=1;
    if(a[l++]==key)
    {
        cout<<"present ";
        cout<<c<<"\n";
    }
    else
    {
        while(l<n)
        {
            c++;
            if(key>=a[l] && key<=a[r-1] )
            {
                return l_search(a,l,r,key,c,n);
            }

            l=pow(2,i);
            r=pow(2,i+1);

            if(r>=n)
                r=n;

            i++;
        }
    }

    cout<<"not present ";
    return c-1;
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

        cout<<exp_search(a,n,key)<<"\n";
    }

}
