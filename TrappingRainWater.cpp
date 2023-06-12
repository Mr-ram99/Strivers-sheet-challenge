#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    long left[n];
    long right[n];
    left[0]=arr[0];
    right[n-1]=arr[n-1];
    long count=0;
    for(int i=1;i<n;i++){
        long mx = max(left[i-1], arr[i]);
        left[i]=mx;
    }
    for(int i=n-2;i>=0;i--){
        long mx = max(right[i+1], arr[i]);
        right[i]=mx;
    }
    for(int i=0;i<n;i++){
        long mn = min(left[i], right[i]);
        if(mn-arr[i]>0){
            count += mn-arr[i];
        }
    }
    return count;
}