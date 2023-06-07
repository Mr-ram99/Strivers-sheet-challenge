#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    // method-1
    //  next_permutation(permutation.begin(), permutation.end());
    //  return permutation;
    // method-2
    int j=n-2;
    while(j>=0 && permutation[j+1]<permutation[j])j--;
    if(j>=0){
        int x=permutation[j], i=n-1;
        while(permutation[i]<x)i--;
        swap(permutation[j], permutation[i]);
    }
    int i=j+1, k=n-1;
    while(i<k){
        swap(permutation[i], permutation[k]);
        i++;
        k--;
    }
    return permutation;
}
