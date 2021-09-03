// sort an array using selection sort

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0,c=0;
        cin>>n;
        int a[n],temp,min_ind;
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n-1;i++)
        {
            min_ind=i;
            temp=a[i];
            for(int j=i+1;j<n;j++)
            {c++;
                if(temp>a[j])
                {
                    temp=a[j];
                    min_ind=j;
                }
            }

            swap(a[i],a[min_ind]);
            s++;

        }

        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\nComparisions = "<<c<<"\nSwap = "<<s<<"\n";
    }
}

