#include<iostream>
#include<cstdlib>
#include<stdio.h> //scanf
#include<string.h>

//codechef CLOSING THE TWEETS medium problem

using namespace std;

int main()
{
	int N,k;
	cin>>N;
	cin>>k;

	int open[N];
	for(int i=0;i<N;i++)
	{
		open[i]=0;
	}
	//N no of tweets
	//k lines of input now
	int sumOfOpen=0;
	char str[9];
	int index;
	for(int i=0;i<k;i++)
	{

		scanf("%s",str); //%s in scanf scans till the first space or newline character 
		if(strcmp(str,"CLICK")==0)
		{
			cin>>index;
			if(open[index-1]==1)
				open[index-1]=0;
			else
				open[index-1]=1;
		}
		else //CLOSEALL
		{
			for(int i=0;i<N;i++)
			{
					open[i]=0;
			}
		}

		sumOfOpen=0;
		for(int i=0;i<N;i++)
		{
			sumOfOpen+=open[i];
		}

		cout<<sumOfOpen<<endl;
	}

	return 0;
}