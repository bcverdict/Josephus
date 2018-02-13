#include <iostream>
#include <math.h>
int people();
int calculate(int n, int C);
using namespace std;
int main()
{
	cout<<"Get in position "<<calculate(people(), 1);
	return(0);
}
int people()
{
	int n;
	cout<<"How many people are playing?"<<endl;
	cin>>n;
	if(n < 1)
	{
		cout<<"Please enter a valid number of people"<<endl;
		people();
	}
	else
	{
		return(n);
	}
}
int calculate(int n, int C)
{
	if(pow(2, C) <= n)
	{
		C++;
		calculate(n, C);
	}
	else
	{
		C--;
		n = 2*(n-pow(2, C))+1;
		return(n);
	}
}
