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
    int delbeg();
    void search(int x);
    void slldel();
    void display();

};

void sllist::insbeg(int x)
{
    head=new sllnode(x,head);
    ncount++;
}

int sllist::delbeg()
{
    sllnode *a=head;
    head=head->next;
    int x=a->info;
    free(a);
    ncount--;
}

void sllist::search(int x)
{
    sllnode *t=head;
    int l=1;
    while(t!=NULL)
    {
        if(t->info==x)
           {
               cout<<"Element present at "<<l<<" index"<<endl;
               return;
           }
        else
            {
                l++;
                t=t->next;
            }


    }
   cout<<"Element not found"<<endl;
}

void sllist::slldel()
{
    while(head!=NULL)
        delbeg();
}

void sllist::display()
{
    sllnode *temp=head;
    cout<<"["<<ncount<<"]"<<"-> ";
    while(temp!=NULL)
    {
        cout<<temp->info<<"-> ";
        temp=temp->next;
    }
    cout<<endl;
}

class hashtable
{
    public:
        sllist *ht;
        int htsize;
        hashtable(int t)
        {
            htsize=t;
            ht=new sllist[htsize];
        }
        void ins(int x);
        int del();
        void search(int x);
        void slldel();
        void displayy();
        void searchh(int x);


};

void hashtable::ins(int x)
{
    int l=x%htsize;
    ht[l].insbeg(x);
}
void hashtable::displayy()
{
    for(int i=0;i<htsize;i++)
    {
        ht[i].display();
    }
}
void hashtable::searchh(int x)
{
    for(int i=0;i<htsize;i++)
    {
        ht[i].search(x);
    }
}



int main()
{
        hashtable *r;
        int j;
        cout<<"Enter the size of hash table : ";
        cin>>j;
        r=new hashtable(j);
        int i;

        cout<<"1) Enter Element 2) Display Hash Table 3) Search for an element 4) EXIT "<<endl;
        cin>>i;
        while(i!=4)
        {
            int n,l;
            if(i==1)
            {
                cout<<"Enter the number - ";
                cin>>n;
            }
            if(i==3)
            {
               cout<<"Enter the number - ";
                cin>>n;
            }
            switch(i)
            {

                case 1:
                    r->ins(n);
                    break;
                case 2:
                    r->displayy();
                    break;
                case 3:
                    r->searchh(n);
                    break;


            }
             cout<<"1) Enter Element 2) Display Hash Table 3) Search for an element 4) EXIT "<<endl;
            cin>>i;
        }

}
