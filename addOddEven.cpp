#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//author aizazayubi
using namespace std;

int getLambar1()
{
	int lambar1;
	cin>>lambar1;
	return lambar1;
	
}

int getLambar2()
{
	int lambar2;
	cin>>lambar2;
	return lambar2;
	
}


int main(int argc, char** argv) 
{
	int EvenSum=0;
	int OddSum=0;
	cout<<"Enter lower range: ";
	int lambar1=getLambar1();
	cout<<endl<<"Enter Upper range: ";
	int lambar2=getLambar2();
	
		while(lambar1<=lambar2)
		{
			if(lambar1%2==0)
			{
				EvenSum=EvenSum+lambar1;
			}
			else
			{
				OddSum=OddSum+lambar1;
			}
			lambar1++;
		}
		cout<<endl<<"The sum of odd numbers is: "<<OddSum;
		
		cout<<endl<<"The sum of even numbers  is: "<<EvenSum;
	

	return 0;
}
