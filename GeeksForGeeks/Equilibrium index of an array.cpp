#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define For(i,j,n) for(int i=(j);i<((int)n);++i)
#define For1(i,j,n) for(int i=(j);i<=((int)n);++i)
int main(){
	int n,s1=0,ls=0,i=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		s1+=a[i];
	}
	int in=-1;
	for(i=0;i<n;i++){	
		s1=s1-a[i];
		if(ls==s1){
			in=i;
			break;
		}
		ls+=a[i];	
	}
	if(in>-1){
		cout<<in;
	}
	else
		cout<<-1;
}
