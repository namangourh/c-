#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a[100000];
    int n,i,j,carry,d,x;

        cout<<"Enter the number : ";
       cin>>n;
       a[0]=1;
       d=1;

       carry=0;
       for(i=1;i<=n;i++)
       {
            for(j=0;j<d;j++)
            {
               x=a[j]*i+carry;
               a[j]=x%10;
               carry=x/10;
            }

            while(carry>0)
             {
               a[d]=carry%10;
               carry=carry/10;
               d++;
             }
      }
              for(i=d-1;i>=0;i--)
              cout<<a[i];
              cout<<endl;

    return 0;
}
