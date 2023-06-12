#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int n = arr.size(), count=0;
    int xors[n+1];
    xors[0] = 0;
    for(int i=0;i<n;i++){
        xors[i+1] = (xors[i]^arr[i]);
    }
    for(int i=0;i<n+1;i++){
        for(int j=i+1;j<n+1;j++){
            if((xors[j]^xors[i])==x) count++;
        }
    }
    return count;
}