#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int up_end = threshold, low_end = 0;
        int diviser = up_end ;
        int sum = 0;
        while (diviser>low_end)
        {
            sum=0;
            for (auto i : nums) 
            {
                sum += ceil(double(double(i)/double(diviser)));
            }
            if (sum < threshold)
                break;
            else
            {
                diviser--;
                
            }
            
        }
        return sum;
    }
};