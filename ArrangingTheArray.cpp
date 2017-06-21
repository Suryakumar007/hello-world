#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,count=0,max=0,t,x,count1=0;

	cin>>t;	
	
	
	for(int j=0;j<t;j++)
	{
		count=0,count1=0;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		int b[n];			
		
		for(int i=0;i<n;i++)
		{
			if(a[i]<0)
			{	
			
				b[count]=a[i];
				count++;	
					
			}
						
		}
		count1=count;
		for(int z=0;z<n;z++)
		{
			if(a[z]>=0)
			{
			
			
				b[count1]=a[z];
				count1++;
				
				
			}
		}
		
	for(int m=0;m<n;m++)
	cout<<b[m]<<" ";
	cout<<endl;
	}
	
	
	return 0;
}
