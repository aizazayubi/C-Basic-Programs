#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//author aizazayubi
using namespace std;
int main(int argc, char** argv)
{
	for(int i=0; i<18; i++)
	{
		for (int j=0; j<i; j++)
		{
			if(i%2!=0)
			{
				
				cout<<"* ";
				
			}
		}
		cout<<endl;
	}
	return 0;
}
