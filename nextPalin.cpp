#include<bits/stdc++.h>
using namespace std;

//codechef next palindrome problem
int reverse(int n)
{
	int reversedNumber = 0, remainder;
	while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    return reversedNumber;

    

}

int nextPalin(int d)
{

	int r,temp=d;
	while(true)
	{
		temp++;
		r=reverse(temp);
		if(r==temp)
			break;


	}
	return temp;
}


int main()
{

	int K;
	cin>>K;
	int d;

	for(int i=0;i<K;i++)
	{
		cin>>d;
		//to find palindrome next of d

		cout<<nextPalin(d)<<endl;



	}
	return 0;
}

