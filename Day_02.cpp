/* Date : 04/10/2023

Day 02 : Given the array nums consisting of 2n elements in the
form [x1,x2,......,xn,y1,y2,...,yn]. 
Return the array in the form [x1,y1,x2,y2,...xn,yn].

Time Complexity : O(n) -> linear
Space Complexity : O(n)
*/
#include <iostream>
using namespace std;
#define n 10

//Creating the function to print array
void printarray(int arr[])
{
    for (int i = 0; i < 2*n; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

// Algorithm to perform shuffle
void shuffle_array(int nums[])
{
    int nums2[2*n];  //Creating the array to store shuffled result
    int a = 0, b=n; //Creating variables to keep track of indices for shuffling
    //Loop for performing the shuffle
    for (int i = 0; i < 2*n; i++)
    {
        if (i%2 == 0)
        {
            nums2[i] = nums[a];
            a++;
        }
        else
        {
            nums2[i] = nums[b];
            b++;
        }
    }

    //Loop for copying the shuffled array back to nums
    for (int i = 0; i < 2*n; i++)
    {
        nums[i] = nums2[i];
    }
    cout<<endl<<"Array after shuffling: "<<endl;
    printarray(nums);
}


int main(int argc, char const *argv[])
{
    int nums[2*n];
    //Loop for initializing array
    for (int i = 0; i < 2*n; i++)
    {
        nums[i] = i;
    }
    cout<<"Array before shuffling: "<<endl;
    printarray(nums);
    shuffle_array(nums);
    return 0;
}
