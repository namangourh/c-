#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    int i,j,c=1,m;
    bool first=true;
    m=2*n-1;
    cout<<setfill('*');
    for(i=0;i<m;i++)
    {
        if(i<n)
        {
            if(first==true)
            {
                cout<<setw(2*(n-i)-1)<<right<<1;
            }
            else
                cout<<setw(2*(n-i)-1)<<right<<1<<" ";
            for(j=n-i;j<m;j++)
            {
                if(j<n)
                {
                    cout<<++c<<" ";
                }
                else
                {
                    if(c>2)
                    {
                        cout<<--c<<" ";
                    }
                    if(c==2)
                    {
                        c--;
                    }
                }
            }
            if(first==true)
            {
                cout<<setw(2*(n-i)-2)<<"*";
                first=false;
            }
            else
                cout<<setw(2*(n-i)-1)<<left<<1;
            cout<<endl;
        }
        else
        {

            if(i==2*n-2)
                cout<<setw(2*(i-n+2)-1)<<right<<1;
            else
                cout<<setw(2*(i-n+2)-1)<<right<<1<<" ";
            for(j=i-n+2;j<m;j++)
            {
                if(j<n)
                {
                    cout<<++c<<" ";
                }
                else
                {
                    if(c>2)
                    {
                        cout<<--c<<" ";
                    }
                    if(c==2)
                    {
                        c--;
                    }
                }

            }
            if(i==2*n-2)
            {
                cout<<setw(2*(i-n+1))<<"*";
            }
            else
                cout<<setw(2*(i-n+2)-1)<<left<<1;
            cout<<endl;
        }
    }
}
