#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define For(i,j,n) for(int i=(j);i<((int)n);++i)
#define For1(i,j,n) for(int i=(j);i<=((int)n);++i)
int main(){
	int n;
	cin>>n;
	//int a[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<j+1;
		}
		cout<<endl;
	}
	cout<<endl;
}
