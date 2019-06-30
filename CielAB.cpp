#include<stdio.h>
//#include<conio.h>
#include<iostream>


//codechef
int main()
{ 	using namespace std;

		int num,r,a,b;
		cin>>a;
		cin>>b;

		r=(a-b)%10;
		if(r<=9 && r>=1)
		{
			if(a-b-1==0)
			{
				cout<<"2\n";
				return 0;
			}
			cout<<a-b-1<<endl;

		}
		else
			cout<<a-b+1<<endl;

		//getch();

		return 0;
}