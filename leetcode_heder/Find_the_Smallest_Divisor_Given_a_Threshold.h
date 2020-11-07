#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        // lower bound binary search
        
        cin.tie(0);
        cout.tie(0);
        ios_base::sync_with_stdio(false);
        
        int n = nums.size();
        
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        
        while(low < high){
            
            int mid = low + (high-low)/2;
            
            int sum = 0;
            
            for(int i=0;i<n;i++)
            {
                double q = (double)(nums[i]) / mid;
                if(q - (int)q == 0.0) 
                sum += (int)q;
                else 
                sum += (int)(q+1);
            }
            
            if(sum > threshold){
                low = mid+1;
            }
            else high = mid;   
            
            
        }
        return high;
    }
};