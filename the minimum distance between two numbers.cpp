#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int x,y;
    cin>>x>>y;
     int i, j;
   int mind = INT_MAX;
   for (i = 0; i < n; i++)
   {
     for (j = i+1; j < n; j++)
     {
         if( (x == arr[i] && y == arr[j] ||
              y == arr[i] && x == arr[j]) && mind > abs(i-j))
         {
              mind = abs(i-j);
         }
     }
   }
   cout<<"Minimum distance between "<<x<<" and "<<y<<" is "<<mind<<endl;
    return 0;
}
  
