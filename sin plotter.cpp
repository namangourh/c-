#include <bits/stdc++.h>
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286

using namespace std;

int main()
{
    cout<<"Enter a number : ";//multiple of PI upto which graph will be printed.
    int k;
    double angle;
    cin>>k;
	for (angle = 0.0; angle <= k*PI; angle += PI/25)
	{
		double value=sin(angle);

		int spot=(value+1.0)*25;

        for (int i = 0; i <spot - 1; ++i)
            {
                cout<<" ";
            }
            cout<<"*"<<endl;
    }

    cout<<"Enter the angle : ";
    cin>>angle;
    cout<<"Sin of the given angle is : "<<fixed<<sin(angle)<<endl;

    return 0;
}


