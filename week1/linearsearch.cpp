
#include<bits/stdc++.h>
using namespace std;

int check(int a[],int l , int k)
{
    int i=0;

    for(i=0;i<l;i++)
    {
        if(k==a[i])
        {
            cout<<"\n"<<"PRESENT ";
            return i+1;
        }
    }
    cout<<"\n"<<"NOT PRESENT ";
    return i;
}

int main()
{

  cout<<"enter testcase : ";
  int t;
  cin>>t;

  while(t--)
  {
      int l,k;
      cout<<"enter length : ";
      cin>>l;
      int a[l];
      cout<<"enter elements : ";
      for(int i=0;i<l;i++)
          cin>>a[i];
      cout<<"enter key element : ";
      cin>>k;

      int n=check(a,l,k);

      cout<<n<<"\n";
  }
  return 0;
}
