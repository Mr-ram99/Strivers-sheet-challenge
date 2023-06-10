#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> list;
    int s = intervals[0][0];
    int e = intervals[0][1];
    for(int i=1;i<intervals.size();i++){
        if(intervals[i][0]<=e){
            e = max(e, intervals[i][1]);
        }
        else {
            list.push_back({s,e});
            s = intervals[i][0];
            e = intervals[i][1];
        }
    }
    list.push_back({s,e});
    return list;
}
