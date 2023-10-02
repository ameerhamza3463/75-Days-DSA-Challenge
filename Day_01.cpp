/* Date : 10/02/2023

Day 01 : Given an integer array nums of length n, you want to create an array ans of length 2n
where ans[i] == nums[i] and ans[i + n] == nums[i] for O <= i < n (0-indexed).
Specifically, ans is the concatenation of two nums arrays.
Return the array ans.*/

#include <iostream>
using namespace std;
#define n 10

int main(int argc, char const *argv[])
{
    int nums[n], ans[2*n];
    for (int i = 0; i < n; i++)
    {
        nums[i] = i+1;
    }
    for (int i = 0; i < n; i++)
    {
        ans[i] = nums[i];
        ans[i+n] = nums[i];
    }
    cout<<"ans array : ";
    for (int i = 0; i < 2*n; i++)
    {
        cout<<ans[i]<<", ";
    }
    return 0;
}
