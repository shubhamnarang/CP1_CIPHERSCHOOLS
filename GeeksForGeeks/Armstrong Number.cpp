#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define For(i,j,n) for(int i=(j);i<((int)n);++i)
#define For1(i,j,n) for(int i=(j);i<=((int)n);++i)
int main(){
	int n,s=0,a;
	cin>>n;
	int q=n;
	int i=floor(log10(n)+1);
	while(n>0){
		a=n%10;
		s=s+(pow(a,i));
		n/=10;
	}
	if(q==s)
		cout<<"Yes";
	else
		cout<<"No";
}
