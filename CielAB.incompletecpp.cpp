#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

//codechef

void main()
{
	srand(time(NULL));

	int A,B;
	cout<<"INput integer A\n";
	cin>>A;
	while(A>10000 || A<1)
	{
		count<"\nInput again correctly\n";
		cin>>A;
	}

	cout<<"INput integer B\n";
	cin>>B;
	while(B>10000 || B<1)
	{
		count<"\nInput again correctly\n";
		cin>>B;
	}	

	int diff=A-B;
	int digits=0;
	int num;
	while(1)
	{
		num=pow(10,digits);
		if(diff/num==0)
		{
			break;
		}

		digits++;
	}

	//now the variable digits has the number of digits in A-B
	//choose a random number
	int randDigit=rand()%digits-1;

	//now change randDigit to another random mumber b/w 0-9
	

}