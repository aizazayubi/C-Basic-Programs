#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

	struct courses
	{
		int marks[4];
		int chr[4];
		float gp[4];
	} courses;
int main(int argc, char** argv)
{
	float totalgp=0;
	int totalchr=0;
	float gpa=0;
	int n;
	float percentage=0;
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<"This program is written to calculate a single semester GPA"<<endl;
	cout<< "According this calculator :"<<endl;
	cout<<"  <60    =    0   GPA "<<endl;
	cout<<"  <67    =    2   GPA "<<endl;
	cout<<"  <72    =    2.5 GPA "<<endl;
	cout<<"  <80    =    3   GPA "<<endl;
	cout<<"  <87    =    3.5 GPA "<<endl;
	cout<<"  >87    =    4   GPA "<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	
	cout<<endl<<" Enter number of courses in semester:";
	cin>> n;
	
	
	for (int i=1; i<=n; i++)
	{
		cout<<"Enter Course [" <<i<< "] Marks [1-100]: ";
		cin>>courses.marks[i];
		cout<< "Enter Course ["<<i<< "] Credit hours[1-4]: ";
		cin>>courses.chr[i];
		if (courses.marks[i]<60)
		{
			courses.gp[i]=courses.chr[i]*0;
			cout<<"Course ["<<i<<"] Grade points: "<<courses.gp[i]<<endl;
		}
		else if(courses.marks[i]<67)
		{
			courses.gp[i]=courses.chr[i]*2;
			cout<<"Course ["<<i<<"] Grade points: "<<courses.gp[i]<<endl;
		}
		else if(courses.marks[i]<72)
		{
			courses.gp[i]=courses.chr[i]*2.5;
			cout<<"Course ["<<i<<"] Grade points: "<<courses.gp[i]<<endl;
		}
		
		else if(courses.marks[i]<80)
		{
			courses.gp[i]=courses.chr[i]*3;
			cout<<"Course ["<<i<<"] Grade points: "<<courses.gp[i]<<endl;
		}
		
		else if(courses.marks[i]<87)
		{
			courses.gp[i]=courses.chr[i]*3.5;
			cout<<"Course ["<<i<<"] Grade points: "<<courses.gp[i]<<endl;
		}
		else
		{
			courses.gp[i]=courses.chr[i]*4;
			cout<<"Course ["<<i<<"] Grade points: "<<courses.gp[i]<<endl;
		}
		 totalgp+=courses.gp[i];
		 totalchr+=courses.chr[i];
		
	}
	
	cout<<"Total Grade Points in Semester: "<<totalgp<<endl;
	cout<<"Total Credit Hours: "<<totalchr<<endl;
	gpa=totalgp/totalchr;
	cout<<endl<<"Semester GPA (SGPA): "<<gpa<<endl;
	cout<<endl<<"--------------------------------"<<endl;
	cout<<"Sorry I did'nt get Percentage formula. ";
	
	cout<<endl<<"--------------------------------"<<endl;
	
	
	
	
	return 0;
}
