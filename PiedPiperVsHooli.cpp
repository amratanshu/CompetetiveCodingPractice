#include<bits/stdc++.h>
using namespace std;
//codechef pied piper vs Hooli code=PEWDSVSTS

int sum(int c[],int size)
{	
	int summ=0;
	for(int i=0;i<size;i++)
	{
		summ+=c[i];
	}
	return summ;


}
int main()
{

	int T;
	cin>>T:

	int pp,hooli; //their no of subs
	int n,a,b,x,y,z;
	for(int i=0;i<T;i++)
	{
		cin>>num>>a>>b>>x>>y>>z;
		const int n=num;
		int c[n];

		pp=a;
		hooli=b;

		//count days d
		int d=-1;
		while(1)
		{
			d++;
			pp+=x;
			hooli+=y;
			//d+1 days passed

			if(pp>=z && hooli<z) //pp surpasses z without any contributions; 
			{
				flag=1;
				break;
			}
			else 
			{
				flag=0;
				break;

			}	
				



		}

		for(int k=0;k<n;k++)
		{
				cin>>c[i];
		}

		


	}













}