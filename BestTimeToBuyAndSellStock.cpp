#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n=prices.size();
    int mx=prices[n-1], ans=0;
    for(int i=n-2;i>=0;i--){
        ans = max(ans, mx-prices[i]);
        mx = max(mx, prices[i]);
    }
    return ans;
}