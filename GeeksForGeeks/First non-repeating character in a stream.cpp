#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,c=26;
	    cin>>n;
	    int freq[c]={};
	    queue<char>q;
	    for(int i=0;i<n;i++){
	        char s;
	        cin>>s;
	        q.push(s);
	        freq[s-'a']++;
	        while(!q.empty()){
	            if(freq[q.front()-'a']>1){
	                q.pop();
	            }
	            else{
	                cout<<q.front()<<" ";
	                break;
	            }
	        }
	        if(q.empty())
	            cout<<"-1 ";
	    }
	    cout<<endl;
	}
	return 0;
}
