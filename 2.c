#include<stdio.h>
#include<math.h>
#include <ctype.h> 
#include<string.h>


char caps_check(char *string)
    {
        static int i = 0;
        if (i < strlen(string))
        {
            if (isupper(string[i]))
            {
                return string[i];
            }
            else
            {
                i = i + 1;
                return caps_check(string);
            }
        }
        else return 0;
    }


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

		char str[1000];
		char let;
		gets(str);
		
		let=caps_check(str);

		if(let==0)
			printf("No capital letter is present.\n");
		else
			printf("The first capital letter is %c.\n",let);

	return 0;
}