#include <iostream>
#include <set>
using namespace std;

void Union(int ar1[], int n, int ar2[], int m)
{
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(ar1[i]);
    for (int i = 0; i < m; i++)
        s.insert(ar2[i]);
    for (auto itr = s.begin(); itr != s.end(); itr++)
        cout << *itr<< " ";
}

void intersection(int ar1[],int n, int ar2[], int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (ar1[i] > ar2[j])
        {
            j++;
        }
        else if (ar2[j] > ar1[i])
        {
            i++;
        }
        else
        {
            cout << ar1[i] << " ";
            i++;
            j++;
        }
    }
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
    int ar2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> ar2[i];
    }
	cout<<"Union = ";
    Union(ar1, n, ar2, m);
    cout<<endl;
    cout<<"Intersection = ";
    intersection(ar1,n,ar2, m);

    return 0;
}
