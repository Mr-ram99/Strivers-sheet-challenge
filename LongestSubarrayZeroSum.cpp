#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int sum=0, mx=0, n=arr.size();
  unordered_map<int, int> mp;
  mp[0]= -1;
  for(int i=0;i<n;i++){
      sum += arr[i];
      if(mp.find(sum)!=mp.end()){
          mx = max((i-mp[sum]), mx);
      }
      else{
          mp[sum]=i;
      }
  }
  return mx;

}