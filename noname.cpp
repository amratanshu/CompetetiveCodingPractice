#include<bits/stdc++.h>
using namespace std;


int min(int a,int b)
{

	if(a>=b)
		return b;
	else return a;

}


int getMin(int arr[], int n)  
{  
    return *min_element(arr, arr + n);  
} 
int main()
{



	int T;
	cin >> T;
	char str[30];
	int c,o,d,e,h,f;
	int N;
	for(int i=0;i<T;i++)
	{
		c=0;
		o=0;
		d=0;
		e=0;
		h=0;
		f=0;
		cin>>N;

		for(int j=0;j<N;j++)
		{
			scanf("%s",str);

			//string is scanned
			//count no of c,o,d....etc
			for(int k=0;k<strlen(str);k++)
			{
				if(str[k]=='c')
				{
					c++;
				}
				if(str[k]=='o')
				{
					o++;
				}
				if(str[k]=='d')
				{
					d++;
				}
				if(str[k]=='e')
				{
					e++;
				}
				if(str[k]=='h')
				{
					h++;
				}
				if(str[k]=='f')
				{
					f++;
				}

			}


		}

		//now print no of times
		int arr[6];
		arr[0]=c/2;
		arr[1]=o;
		arr[2]=d;
		arr[3]=e/2;
		arr[4]=h;
		arr[5]=f;

		printf("%d\n",getMin(arr,6));




	}

	return 0;
}