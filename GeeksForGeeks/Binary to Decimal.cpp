#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define For(i,j,n) for(int i=(j);i<((int)n);++i)
#define For1(i,j,n) for(int i=(j);i<=((int)n);++i)
int main(){
	int n,s=0,a,i=0;
	cin>>n;
	while(n>0){
		a=n%10;
		s=s+(a*pow(2,i));
		n/=10;
		i++;
	}
	cout<<s<<endl;
}
