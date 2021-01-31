#include<stdio.h>
#include<math.h>
#include <ctype.h> 
#include<string.h>


int n_to_the_kth_power(int n, int k)
{
	if (k == 0) 
		return 1;
	else 
		return n * n_to_the_kth_power(n, k-1);
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

		int n = 2, k = 10,l=0;

		while (l <= 10)
  	 {
	  // cout << n << "**" << k << " = " << n_to_the_kth_power(n,k) << endl; 
  	 	int a = n_to_the_kth_power(n,l);
  	 	printf("%d\n",a);
	  l++;
 	 }

  	while (k >= 0)
  	 {
	  // cout << n << "**" << k << " = " << n_to_the_kth_power(n,k) << endl; 
  	 	int a = n_to_the_kth_power(n,k);
  	 	printf("%d\n",a);
	  k--;
 	 }

 	 

	return 0;
}	