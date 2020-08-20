#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define For(i,j,n) for(int i=(j);i<((int)n);++i)
#define For1(i,j,n) for(int i=(j);i<=((int)n);++i)
int main() 
{ 
	int n,k;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	deque<int> Di;
	int i; 
	for (i = 0; i < k; i++){
		if (arr[i] < 0) 
			Di.push_back(i); 
	}	
	for ( ; i < n; i++) { 
		if (!Di.empty()) 
			cout << arr[Di.front()] << " "; 
		else
			cout << "0" << " "; 
		while ( (!Di.empty()) && Di.front() < (i - k + 1)) 
			Di.pop_front(); 
		if (arr[i] < 0) 
			Di.push_back(i); 
	}
	if (!Di.empty()) 
		cout << arr[Di.front()] << " "; 
	else
		cout << "0" << " ";	 
}
