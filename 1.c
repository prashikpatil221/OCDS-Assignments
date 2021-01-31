#include<stdio.h>
#include<math.h>
#include <ctype.h> 
#include<string.h>

bool conso(char ch)
{
	ch = toupper(ch);
	return !(ch == 'A' || ch == 'E' || ch == 'i' || ch == 'O' || ch == 'U') && ch >= 65 && ch <= 90;
}

int countCon(char str[],int n)
{
	if(n==1){
		return conso(str[0]);
	}
	return countCon(str,n-1)+conso(str[n-1]);
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

		char str[1000];
		// scanf("%s",str)
		gets(str);
		// printf("%s", str);
		int n;
		n=strlen(str);

		int ans;
		ans=countCon(str,n);
		printf("%d\n",ans );

	return 0;
}