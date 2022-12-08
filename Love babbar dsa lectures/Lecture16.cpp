#include <iostream>
#include <math.h>
#include <limits.h>
#include <map>
#include <set>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

//* SELECTION SORT:
vector<int> selectionSort(vector<int> nums){
    for (int i = 0; i < nums.size()-1; i++)
    {
        int minIdx = i;
        for(int j=i+1; j<nums.size(); j++){
            if(nums[j]<nums[minIdx]){
                minIdx = j;
            }
        }
        swap(nums[minIdx],nums[i]);
    }
    return nums;
}

//* BUBBLE SORT:
vector<int> bubbleSort(vector<int> nums){
    for(int i=1;i<nums.size();i++){
        bool swapped = false;
        for(int j = 0; j<nums.size()-i;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
        if(swapped==false){
            break;
        }
    }
    return nums;
}

//* INSERTION SORT:
vector<int> insertionSort(vector<int> nums){
    for (int i = 1; i < nums; i++)
    int temp = nums[i];
    int j = i-1;
    {
        for(; j>0;j--){
            if (nums[j]<temp)
            { // shift so smaller no. can be placed
                /* code */
            }
            else{
                break;    // if our value is already in a correct place
            }
        }
        nums[j+1] = temp;   // placing our value
    }
    return nums;
}


int main()
{
    vector<int> nums = {1,3,2,11,4};
    //* selection sort:
    vector<int> selectionAns = selectionSort(nums);
    vector<int> bubbleAns = selectionSort(nums);
    for(int i = 0; i < bubbleAns.size(); i++)
    {
        cout<<bubbleAns[i];
    }
    
    return 0;
}
