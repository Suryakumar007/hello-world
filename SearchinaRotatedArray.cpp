#include <iostream>
#include<stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,count=0,t,temp,v;
	
	cin>>t;		
	
	while(t--)
	{	
	count=0;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;i++)
		cin>>a[i];	
		
		cin>>v;
		
		for(int i=0;i<n;i++)
		{
			if(a[i]==v)
			{
				//cout<<i;
				count++;
			}
			
		}
		if(count==0)
	//	cout<<-1;
		cout<<endl;
		
	}	
	
	return 0;
}
