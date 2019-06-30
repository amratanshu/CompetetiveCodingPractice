#include<iostream>

//codechef medium level 
//problem name- Bytelandian coins
//this solution exceeds time requirement on codechef :((
//to be solved by dynamic programming using maps in C++ STL. Learn later on :)
using namespace std;


int maxUSD(int n)
{
	if(n==0)
		return 0;

	int a=n/2, b=n/3, c=n/4;

	int exchange=maxUSD(a)+maxUSD(b)+maxUSD(c);

	if(exchange>n)

		return exchange;
	else
		return n;



}

int main()
{

		int test;
		while(cin>>test)
		{

			
			cout<< maxUSD(test)<<endl;


		}
		return 0;
}