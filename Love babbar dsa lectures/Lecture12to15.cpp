#include <iostream>
#include <math.h>
#include <limits.h>
#include <map>
#include <set>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

//* square root

//* brute force approach
int sqRoot(int n){

    int result = 1;
    int i = 1;
    
    if(n==0){
        return 0;
    }
    if(n==1 || n==2){
        return 1;
    }
    for (int i = 2; i < n; i++)
    {
        if(i*i>n){
            return -1;
        }
        else if(i*i == n){
            return i;
        }
    }
    
}

//* square root binary search approach

// long long int mySqrt(int x) {
//         int s = 0;
//         int e = x;
//         long long int mid = s + (e-s)/2;
//         long long int ans = -1;
        
//         while(s<=e){
            
//             long long int square = mid * mid;
            
//             if(square == x){
//                 return mid;
//             }
//             if(square<x){
//                 ans = mid;
//                 s = mid + 1;
//             }
//             else{ //square>x
//                 e = mid - 1;
//             }
//             mid = s + (e-s)/2;
//         }
//         return ans;
//     }

// double morePrecision(int n, int precision, int tempsol){
//     double factor = 1;
//     double ans = tempsol;

//     for (int i = 0; i < precision; i++)
//     {
//         factor = factor / 10;
//         for (double j = ans; j*j<n; j = j+factor)
//         {
//             ans = j;
//         }
//     }
//     return ans;
// }

//* find pivot 

int getPivot(vector<int>& arr, int n) {

    int s = 1;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

//* find number of occurrences of target using binary seach  

    // int findOccu(int arr[], int target){
    //     int start = 0;
    //     int size = sizeof(arr);
    //     int end = size - 1;
    //     int mid = start+(end-start)/2;
    
    //     while (start<=end)
    //     {
    //         if (arr[mid]==target)
    //         {
                
    //         }
            
    //     }
        
    // }

//* find element using binary search
                                                              
    // int findElement(int arr[], int size, int key){        //! binary search
    //     //! to find mid value
    //     int start = 0;
    //     int end = size - 1;
    //     // int mid = (start+end)/2; 
    //     int mid = start+(end-start)/2;   //more optimised 
        
    //     while (start <= end)
    //     {
    //         if (arr[mid] == key)
    //         {
    //             return mid;
    //         }
    //         // go to right side of array
    //         else if(arr[mid] < key){
    //             start = mid+1;

    //         }
    //         else{
    //             end = mid - 1;
    //         }
        
    //         // mid = ((start+end)/2);
    //         mid = start+(end-start)/2;  //more optimised
    //     }
    //     return -1;  // when key is not present in arr
    // }

int main()
{
    //* find element using binary search
    int arr1[7] = {1,2,3,4,5,6,7};
    // cout<<"Key is present at: "<<(findElement(arr1, 7, 7));

    //* find pivot 

    vector<int> nums = {7,9,1,2,3};

    //* square root 2 approaches: (brute force, binary search)
    int n = 37;
    // cout<<sqRoot(n);
    // int tempsol = mySqrt(n);

    cout<<(getPivot(nums, 5));
    
}
