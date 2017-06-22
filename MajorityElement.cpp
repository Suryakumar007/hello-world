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
		int a;
		int b[n];
		v=n/2;
		int cnt[101]={0};
		for(int i=0;i<n;i++)
		{
			cin>>a;
			cnt[a]++;
		}
		
		for(int i=0;i<102;i++)
		{
			if(cnt[i]>v)
			{
				count++;
				cout<<i;
			}
		}
		if(count==0)
		cout<<"NO Majority Element";
	//	for(int i=0;i<102;i++)
		//cout<<cnt[i];
		
	}	
	
	return 0;
}
