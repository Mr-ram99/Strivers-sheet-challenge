#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_map<int,int> st;
    for(int num: arr) st[num]++;
    int max = 1;
    for(int i=0;i<n;i++){
        if(st.find(arr[i]+1)!=st.end() && st.find(arr[i]-1)==st.end()){
            int num = arr[i], count=1;
            while(st.find(num+1)!=st.end()){
                count++;
                num++;
            }
            if(count>max) max = count;
        }
    }
    return max;
}