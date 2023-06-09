#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
	int x=m+n-2;
	int ans=1;
	for(int i=x,j=1;j<m;j++,i--){
		ans *= i;
		ans /= j;
	}
	return ans;
}