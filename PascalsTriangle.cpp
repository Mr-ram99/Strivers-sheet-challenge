#include <bits/stdc++.h>
#define ll long long int
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<ll>> pascal;
  pascal.push_back({1});
  for(int i=1;i<n;i++){
    vector<ll> temp;
    temp.push_back(1);
    for(int j=1;j<pascal.back().size();j++){
      temp.push_back(pascal.back()[j]+pascal.back()[j-1]);
    }
    temp.push_back(1);
    pascal.push_back(temp);
  }
  return pascal;
}
