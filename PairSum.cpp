#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   int n=arr.size();
   vector<vector<int>> ans;
   unordered_map<int,int> mp, mark;
   for(int i=0;i<n;i++) mp[arr[i]]++;
   for(auto i: mp){
      int num1=i.first;
      if(mark.find(num1)!=mark.end()) continue;
      int f1=i.second;
      if(mp.find(s-num1)!=mp.end()){
         int num2=s-num1;
         int f2=mp[s-num1];
         if(num1==num2){
            for(int j=0;j<f1*(f1-1)/2;j++) ans.push_back({min(num1, num2), max(num1,num2)});
         }
         else{
            for(int j=0;j<f1;j++){
               for(int k=0;k<f2;k++){
                  ans.push_back({min(num1, num2), max(num1,num2)});
               }
            }
         }
         mark[num1]=1;
         mark[num2]=1;
      }
   }
   sort(ans.begin(), ans.end());
   return ans;
   
}