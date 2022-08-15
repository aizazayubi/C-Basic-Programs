#include <iostream>
#include <stdio.h>
//author aizazayubi
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int num;
	cout<<"Enter number between 0-1000:";
	cin>>num;
	for(int i=0; i<5; i++)
	{
		num=num+10;
	}
	cout<<endl<<"After incrementing +10 five times  the number is: "<<num;
	return 0;
}
