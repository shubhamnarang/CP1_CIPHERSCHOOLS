#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define For(i,j,n) for(int i=(j);i<((int)n);++i)
#define For1(i,j,n) for(int i=(j);i<=((int)n);++i)
int main(){
	int n;
	cin>>n;
	//int a[n];
	cout<<"Solid Rhombus"<<endl;
	for(int i=0;i<n;i++){
		for(int j=n-i; j>1;j--){
			cout<<" ";
		}
		for(int j=0;j<n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"Hollow Rhombus";
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=n-i; j>1;j--){
			cout<<" ";
		}
		if(i==0 || i==n-1){
			for(int j=0;j<n;j++){
				cout<<"*";
			}
		}
		else{
			for(int j=0;j<n;j++){
				if(j==0 || j==n-1)
					cout<<"*";
				else
					cout<<" ";
			}
		}
		cout<<endl;
	}
}
