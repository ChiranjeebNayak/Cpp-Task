#include <iostream>
using namespace std;
void printRepeating(int arr[], int n)
{

	
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	
	for (int i = 0; i < n; i++)
	{
		int index = arr[i] % n;
		arr[index] += n;
	}
	cout << "The repeating elements are: \n";
	for (int i = 0; i < n; i++)
	{
		if ((arr[i] / n) >= 2)
			cout << i << " ";
	}
	return 0;
	
}
