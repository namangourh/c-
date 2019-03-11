#include<bits/stdc++.h>

using namespace std;

int main()
{
    int hash[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int x,y,z=8;
    while(z--)
    {
        cin>>x;
        if(hash[x%10]==-1)
        {
            hash[x%10]=x;
        }
        else
        {
            y=x%10;
            while(hash[y]!=-1)
            {
                y++;
            }
            hash[y]=x;
        }
    }
    for(int i=0;i<10;i++)
        cout<<hash[i]<<" ";
    cout<<endl;
}
