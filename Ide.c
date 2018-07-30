#include <stdio.h>
#include <math.h>

void check(long double c,long double d)
{
    if(d==c)
    printf(1);
    else if(d>c)
    {
        if((d-c)<=(c-1))
        {
           printf("%.0llf\n",(d-c));
        }
        else
        {
           printf("-1\n");
        }
    }
    else if(d<c)
    {
        if((c-d)<=(d-1))
        {
           printf("%.0llf\n",(c-d));
        }
        else
        {
           printf("-1\n");
        }
    }
}
int main(void) {
	// your code goes here
     int i;
	 long double c[10^6],d[10^6];
	 long int x;
	 scanf("%ld",&x);
	 for(i=1;i<=x;i++)
	 {
	     scanf("%llf%llf",&c[i],&d[i]);
	 }
	 for(i=1;i<=x;i++)
	 {
	     check(c[i],d[i]);
	 }
	return 0;
}

