#include<bits/stdc++.h>

using namespace std;

class sllnode
{
public :
    int info;
    sllnode *next;
    sllnode()
    {
        info=0;
        next=NULL;
    }
    sllnode(int x, sllnode *p)
    {
        info = x;
        next = p;
    }
    ~sllnode()
    {
        cout<<" sllnode dest ";
    }
};

class sllist
{
public :
    sllnode *head;
    int ncount;
    sllist()
    {
        head=NULL;
        ncount=0;
    }
    sllist(sllnode *p , int n)
    {
        ncount=n;
        head=p;
    }
    ~sllist()
    {
        cout<<"sll list dest";
    }
    void insbeg(int x);
    void delbeg();
    void display();

};

void sllist::insbeg(int x)
{
    head=new sllnode(x,head);
    ncount++;
}

void sllist::delbeg()
{
    sllnode *a=head;
    head=head->next;
    int x=a->info;
    cout<<x<<" DELETED"<<endl;
    free(a);
    ncount--;
}



void sllist::display()
{
    sllnode *temp=head;
    cout<<"STACK ->";
    while(temp!=NULL)
    {
        cout<<temp->info<<"-> ";
        temp=temp->next;
    }
    cout<<endl;
}





int main()
{
        sllist *r;

        r=new sllist();
        int i;

        cout<<"1) PUSH 2) POP 3) DISPLAY STACK 4) EXIT "<<endl;
        cin>>i;
        while(i!=4)
        {
            int n,l;
            if(i==1)
            {
                cout<<"Enter the number - ";
                cin>>n;
            }

            switch(i)
            {

                case 1:
                    r->insbeg(n);
                    break;
                case 2:
                    r->delbeg();
                    break;
                case 3:
                    r->display();
                    break;


            }
             cout<<"1) PUSH 2) POP 3) DISPLAY STACK 4) EXIT "<<endl;
             cin>>i;
        }

}
