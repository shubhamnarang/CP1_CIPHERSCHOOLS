#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define For(i,j,n) for(int i=(j);i<((int)n);++i)
#define For1(i,j,n) for(int i=(j);i<=((int)n);++i)
int main(){
	int n,m,s1=0,s2=0,q=0;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++){
		cin>>a[i];
		s1+=(a[i]*pow(10,n-i-1));
	}
	cout<<s1<<endl;
	for(int i=0;i<m;i++){
		cin>>b[i];
		s2+=(b[i]*pow(10,m-i-1));
	}
	cout<<s2<<endl;
	cout<<s1+s2;
}
