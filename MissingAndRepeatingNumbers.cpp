#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int c;
	for(int i=0;i<n;i++){
		int x = arr[i];
		c = x-1;
		int y = arr[c];
		if(y!=x){
			int temp = y;
			arr[c] = x;
			arr[i] = temp;
			i--;
		}
	}
	for(int i=0;i<n;i++){
		int x = arr[i];
		if(x!=i+1){
			return {i+1, x};
		}
	}
	return {-1,-1};
}
