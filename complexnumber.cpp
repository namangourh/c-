#include<bits/stdc++.h>

using namespace std;


class complexno{
public:
    int real;
    int imaginary;

    complexno()
    {
        real=0;
        imaginary=0;
    }

    complexno(int a, int b)
    {
        real=a;
        imaginary=b;
    }
    void addition(int a, int b , int c , int d);
    void subtration(int a, int b , int c , int d);
    void multiplication(int a, int b , int c , int d);
};

void complexno::addition(int a, int b , int c , int d)
{
    int e=a+c;
    int f=b+d;
    cout<<"RESULT - "<<e<<"+i"<<f<<endl;
}

void complexno::subtration(int a, int b , int c , int d)
{
    int e=a-c;
    int f=b-d;
    cout<<"RESULT - "<<e<<"+i"<<f<<endl;
}

void complexno::multiplication(int a, int b , int c , int d)
{
    int e=a*c-b*d;
    int f=a*d+b*c;
    cout<<"RESULT - "<<e<<"+i"<<f<<endl;
}
int main()
{
    complexno x;
    complexno y;
    int a,b,c,d,i;
    cout<<"Enter real part of first complex number : ";
    cin>>x.real;
    cout<<endl;

    cout<<"Enter imaginary part of first complex number : ";
    cin>>x.imaginary;
    cout<<endl;

    cout<<"Enter real part of second complex number : ";
    cin>>y.real;
    cout<<endl;

    cout<<"Enter real part of second complex number : ";
    cin>>y.imaginary;
    cout<<endl;

    cout<<"1.ADDITION  2.SUBTRACTION  3.MULTIPLICATION 4.ENTER OTHER NUMBERS 5.EXIT"<<endl;
    cin>>i;

    while(i!=5)
    {
        if(i==1)
        {
            x.addition(x.real,x.imaginary,y.real,y.imaginary);
        }
        if(i==2)
        {
            x.subtration(x.real,x.imaginary,y.real,y.imaginary);
        }
        if(i==3)
        {
            x.multiplication(x.real,x.imaginary,y.real,y.imaginary);
        }
        if(i==4)
        {
                cout<<"Enter real part of first complex number : ";
                cin>>x.real;
                cout<<endl;

                cout<<"Enter imaginary part of first complex number : ";
                cin>>x.imaginary;
                cout<<endl;

                cout<<"Enter real part of second complex number : ";
                cin>>y.real;
                cout<<endl;

                cout<<"Enter real part of second complex number : ";
                cin>>y.imaginary;
                cout<<endl;
        }

        cout<<"1.ADDITION  2.SUBTRACTION  3.MULTIPLICATION 4.ENTER OTHER NUMBERS 5.EXIT"<<endl;
        cin>>i;
    }
}
