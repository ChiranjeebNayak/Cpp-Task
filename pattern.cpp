#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	n=n*2;
	int i,j;
	int x=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=x || j>=n-x+1)
				cout<<"*";
			else
				printf(" ");
			}
			if(i<=n/2)
			x++;
			else
			x--;
			cout<<"\n";
		}
		return 0;
}
