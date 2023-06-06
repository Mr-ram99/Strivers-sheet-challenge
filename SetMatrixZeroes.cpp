#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size(), m=matrix[0].size();
	vector<int> rows(n,0), cols(m,0);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				rows[i]=1;
				cols[j]=1;
			}
		}
	}
	for(int r=0;r<n;r++){
		if(rows[r]){
			for(int c=0;c<m;c++){
				matrix[r][c]=0;
			}
		}
	}
	for(int c=0;c<m;c++){
		if(cols[c]){
			for(int r=0;r<n;r++){
				matrix[r][c]=0;
			}
		}
	}
}