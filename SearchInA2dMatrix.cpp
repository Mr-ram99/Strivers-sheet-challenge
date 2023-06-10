bool searchMatrix(vector<vector<int>>& mat, int target) {
    int row=mat.size(), col=mat[0].size();
    int i=0, j=row-1,mid=i+(j-i)/2;
    while(i<=j){
        mid = i + (j-i)/2;
        int x = mat[mid][col-1];
        if(x==target) return true;
        else if(x<target) i = mid+1;
        else j=mid-1;
    }
    int res_row = mid;
    i=0;j=col-1;
    while(i<=j){
        mid = i + (j-i)/2;
        int x = mat[res_row][mid];
        if(x==target) return true;
        else if(x<target) i = mid+1;
        else j=mid-1;
    }
    return false;
}