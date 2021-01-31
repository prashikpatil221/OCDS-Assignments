#include<stdio.h>
#include<math.h>
#include <ctype.h> 
#include<string.h>


int digital( int x )
{
    if ( x < 10 ) return x;

    x = x % 10 + digital( x / 10 );

    return digital( x ); 
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

		int n;
		scanf("%d",&n);

		int x=digital(n);
		printf("%d",x);
	return 0;
}	