// find pair whose difference is equal to key

#include<bits/stdc++.h>
using namespace std;

int find_pair(int a[],int n, int key)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(a[i]-a[j])==key)
                c++;
        }
    }
    return c;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int key,a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        cin>>key;
        cout<<find_pair(a,n,key)<<"\n";
    }
}
