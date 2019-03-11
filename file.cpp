#include <bits/stdc++.h>

using namespace std;

int main()
{

	int i,count=0;
	FILE *input,*output;
	input=fopen("ss.cpp","r+");
	output=fopen("output.cpp","w");
	char a = fgetc(input);
	char b=a;

	while(a !=EOF)
	{
		if(a=='{')
			count++;

		else if(a=='}')
			count--;

		if(b=='\n')
		{
			if(a=='{')
			{

				for(i=1;i<count;i++)
					fprintf(output,"\t");
			}
			else
			{

				for(i=1;i<=count;i++)
					fprintf(output,"\t");
			}
		}
		fprintf (output,"%c",a);
		b=a;
		a=fgetc(input);
	}
	fclose(input);
	fclose(output);
	return 0;
}
