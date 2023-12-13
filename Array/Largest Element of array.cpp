#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.

    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

type 2 gfg i have solved 
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        
        for(int i=0;i<n;i++){
            if(arr[0]<arr[i]){
                arr[0]=arr[i];
            }
        }
        return arr[0];
    }
};

sonu method 
