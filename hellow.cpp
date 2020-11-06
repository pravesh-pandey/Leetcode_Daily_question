#include <bits/stdc++.h>
#include "./leetcode_heder/Find_the_Smallest_Divisor_Given_a_Threshold.h"
#include"./leetcode_heder/hellow.h"
using namespace std;

#define n 4
int main()
{
    hellow nov_6;
    Solution nov_6;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int threshold;
    cin >> threshold;
    // cout<<nov_6.find(3);
    cout << nov_6.smallestDivisor(nums, threshold);
    return 0;
}