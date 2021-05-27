#include <stdio.h>
#include<limits.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int k;
	for(k=0;k<n;k++){
		scanf("%d",&arr[k]);
	}
	int i,f, s;
	f = s = INT_MAX;
	for ( i = 0; i < n ; i ++)
	{
		if (arr[i] < f)
		{
			s= f;
			f = arr[i];
		}
		else if (arr[i] < s && arr[i] != f)
			s = arr[i];
	}
	printf("The smallest element is %d and second Smallest element is %d\n", f, s);
	return 0;
}

