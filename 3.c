#include<stdio.h>
#include<math.h>
#include <ctype.h> 
#include<string.h>



int stcm(char str1[40],char str2[40],int i,int flag)
{
	if(str1[i]>str2[i])
		return 1;
	else if(str1[i]<str2[i])
		return -1;
	else if(str1[i]=='\0' && str2[i]!='\0')
		return -1;
	else if(str1[i]!='\0' && str2[i]=='\0')
		return 1;
	else if(str1[i]=='\0' && str2[i]=='\0')
		return 0;
	else
		stcm(str1,str2,i+1,flag);

	return 0;
}


void sorte(char arr[40][40],int n)
{
	char temp[40];
	int flag;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(stcm(arr[j],arr[j+1],0,0)==1)
			{
				for(int k=0;arr[j][k]!='\0';k++)
				{
					temp[k]=arr[j][k];
					arr[j][k]=arr[j+1][k];
					arr[j+1]=temp[k];
				}
			}
		}
	}

}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

		int n;
		char arr[n][40];
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			gets(arr[i]);
		sorte(arr,n);

		for(int i=0;i<n;i++)
			printf("%s\n",arr[i]);


	return 0;
}