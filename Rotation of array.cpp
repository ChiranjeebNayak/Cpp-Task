#include <iostream>
#include <set>
using namespace std;

void Rotate(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    arr[n-1] = temp;
}
int main()
{
    int n;
    cin >> n;
    int ar1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar1[i];
    }

    int m;
    cin>>m;

    for (int i = 0; i < m; i++)
    Rotate(ar1,n);
    for (int i = 0; i < n; i++)
        cout << ar1[i] << " ";

    return 0;

}
