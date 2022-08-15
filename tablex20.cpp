#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//author aizazayubi
using namespace std;
int main(int argc, char** argv)
{
	int num;
	cout<<"input number: ";
	cin>>num;
	cout<<"------------------------------------"<<endl;
	cout<<" Table of "<<num<<" upto multiple of 20 "<<endl;
	cout<<"------------------------------------";
	for (int i=0 ; i<=20; i++)
	{
		cout<<endl<<num<<" * "<<i << " = "<<num*i;
	}
	return 0;
}
