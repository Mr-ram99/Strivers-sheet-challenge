#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int startRow = 0, startCol =0, lastRow = n-1, lastCol = m-1, prev, cur;
    while(startRow<lastRow && startCol<lastCol){
        prev = mat[startRow+1][startCol];
        for(int i=startCol;i<=lastCol;i++){
            cur = mat[startRow][i];
            mat[startRow][i] = prev;
            prev = cur;
        }
        startRow++;
        for(int i=startRow;i<=lastRow;i++){
            cur = mat[i][lastCol];
            mat[i][lastCol]= prev;
            prev = cur;
        }
        lastCol--;
        for(int i=lastCol;i>=startCol;i--){
            cur = mat[lastRow][i];
            mat[lastRow][i] = prev;
            prev = cur;
        }
        lastRow--;
        for(int i=lastRow;i>=startRow;i--){
            cur = mat[i][startCol];
            mat[i][startCol] = prev;
            prev = cur;
        }
        startCol++;
    }
}