#include <bits/stdc++.h> 
	int merge(vector<int> &arr, int s, int mid, int e){
        int left[mid-s+1];
        int right[e-mid];
        int j=0,i=0,k;
        int count=0;
        for(i=s;i<=mid;i++){
            left[j++]=arr[i];
        }
        j=0;
        for(i=mid+1;i<=e;i++){
            right[j++]=arr[i];
        }
        
        int n1 = mid-s+1, n2 = e-mid;
        j=0;
        for(i=0;i<n1;i++){
            while(j<n2 && left[i]>right[j]*2) j++;
            count += j;
        }
        
        i=0;j=0;k=s;
        while(i<n1 && j<n2){
            if(left[i]<=right[j]){
                arr[k++] = left[i++];
            }
            else{
                arr[k++] = right[j++];
            }
        }
        while(i<n1){
                arr[k++] = left[i++];
        }
        while(j<n2){
            arr[k++] = right[j++];
        }
        return count;
    }
    int mergesort(vector<int> &arr, int s, int e){
        if(s<e){
            int mid = s + (e-s)/2;
            int count=0;
            count += mergesort(arr,s,mid);
            count += mergesort(arr,mid+1,e);
            count += merge(arr,s,mid,e);
            return count;
        }
        return 0;
    }
    
int reversePairs(vector<int> &arr, int n){
	// Write your code here.
	return mergesort(arr, 0, n-1);	
}