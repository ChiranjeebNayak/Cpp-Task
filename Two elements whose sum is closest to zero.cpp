# include <bits/stdc++.h>
# include <stdlib.h>
# include <math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	
	int inv_count = 0;
	int l, r, minsum, sum, minl, minr;

	if(n < 2)
	{
		cout << "Invalid Input";
		return 0;
	}
	minl = 0;
	minr = 1;
	minsum = arr[0] + arr[1];
	for(l = 0; l < n - 1; l++)
	{
		for(r = l + 1; r < n; r++)
		{
		sum = arr[l] + arr[r];
		if(abs(minsum) > abs(sum))
		{
			minsum = sum;
			minl = l;
			minr = r;
		}
		}
	}
	
	cout << "The two elements whose sum is minimum are "
		<< arr[minl] << " and " << arr[minr];
}

