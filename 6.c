#include<stdio.h>
#include<math.h>
#include <ctype.h> 
#include<string.h>



bool bear(int x)
{
	int flag=0;
	if(x==42){
		return true;
	}
	else if(x<42)
		return false;

	else if(x%5==0 && x>=42){
		bear(x-42);
	}
	else if(x/2==42 )
		return true;

	else if(x%3==0)
	{
		int one,two;
		one=x%10;
		two=(x%100)/10;
		bear(x-(one*two));
	}

	else if(x%2==0 && x%4==0)
	{
		int one,two;
		one=x%10;
		two=(x%100)/10;
		bear(x-(one*two));
	}
	else if(x%2==0){
		bear(x/2);
	}
	
	// else
	// 	return false;

	return false;
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

		int x;
		scanf("%d",&x);
		// bear(x);
		int ans=bear(x);
		if(ans==1)
			printf("Win\n");
		if(ans==0)
			printf("Lose\n");

	return 0;
}