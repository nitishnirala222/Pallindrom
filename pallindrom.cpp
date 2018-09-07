#include<iostream>
using namespace std;
int main()
{
	int n,rem,rev=0,num;
	cout<<"enter any number: ";
	cin>>n;
	num=n;
	while(n>0)
	{
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
    }
	if(num==rev)
	cout<<"The number "<<num<<" is pallindrom number";
	else
	cout<<"The number "<<num<<" is not pallindrom number";
	}
