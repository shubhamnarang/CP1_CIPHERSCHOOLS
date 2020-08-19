#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define For(i,j,n) for(int i=(j);i<((int)n);++i)
#define For1(i,j,n) for(int i=(j);i<=((int)n);++i)
int main(){
	int t;
	cin>>t;
	while(t--){
		int q;
		cin>>q;
		char a[q];
		vector<int>v;
		int it;
		for(int i=0;i<q;i++){
			cin>>a[i];
			if(a[i]=='a'){
				cin>>it;
				v.push_back(it);
			}
			else if(a[i]=='b'){
				sort(v.begin(),v.end());
			}
			else if(a[i]=='c'){
				reverse(v.begin(),v.end());	
			}
			else if(a[i]=='d'){
				cout<<v.size()<<endl;
			}
			else if(a[i]=='e'){
				for(int j=0;j<v.size();j++){
					cout<<v[j]<<" ";
				}
				cout<<endl;
			}
			else if(a[i]=='f'){
				sort(v.begin(),v.end(),greater<int>());
			}
		}
		v.clear();
		cout<<endl;
	}
}
