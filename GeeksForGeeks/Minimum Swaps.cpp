#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define For(i,j,n) for(int i=(j);i<((int)n);++i)
#define For1(i,j,n) for(int i=(j);i<=((int)n);++i)
int main(){
	int n,k,s1=0,ls=0,i=0,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	for(i=0;i<n;i++){
		if(a[i]<=k)
			s1++;
	}
	for(i=0;i<s1;i++){
		if(a[i]>k)
			ls++;
	}
	int in=ls;
	for(i=0,j=s1;j<n;i++,j++){	
		if(a[i]>k)
			--ls;
		if(a[j]>k)
			++ls;
		in=min(in,ls);
	}
	cout<<in;
}
