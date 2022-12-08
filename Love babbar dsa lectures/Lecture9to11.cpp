#include <iostream>
#include <math.h>
#include <limits.h>
#include <map>
#include <set>
#include <vector>
#include <bits/stdc++.h>


using namespace std;
// swap(), max(), sizeof() functions

//! sort 0 1

    void sortOne(int arr[], int size){
        int i=0, j=size-1;

        while (i<=j)
        {
            if(arr[i]==0){
                i++;
            }
            else if(arr[j]==1){
                j--;
            }
            else
            {
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
        }
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }

//! Q. 349 Intersection of two array better approach                       **// using two pointer \\**

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
        vector<int> ans = {};
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0, j=0;

        while (nums1[i] < nums1.size() && nums2[i] < nums2.size())
        {
            // first case if nums1 < nums2
            
            if(nums1[i]<nums2[j]){
                i++;
            }
            
            // Second case if nums1 > nums2
            
            else if(nums1[i]>nums2[j]){
                j++;
            }

            else if(nums1[i]==nums2[j] && (ans.size()==0 || nums1[i]!=ans.back())){
                {
                    ans.push_back(nums1[i]);
                    i++;
                    j++;
                }
                
            }
            else{
                i++;
                j++;
            }
        }
        return ans;
}



//! Q. 349 Intersection of two array
    // vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    //     vector<int> ans = {};
    //     sort(nums1.begin(),nums1.end());
    //     sort(nums2.begin(),nums2.end());
        
    //     for (int i = 0; i < nums1.size(); i++)
    //     {
    //         int element = nums1[i];
        
    //         for (int j = 0; j < nums2.size(); j++)
    //         {
    //             if(element<nums2[j]){
    //                 break;
    //             }
                
    //             if (element==nums2[j] && (ans.size()==0 || element!=ans.back()))
    //             {
    //                 ans.push_back(element);
    //                 nums2[j]=INT_MIN;
    //                 nums1[i]=INT_MIN;
    //                 break;
    //             }
    //         }
    //     }
        
    //     return ans;
    // }

//! Q.442 Find all duplicate in array
     vector<int> findalldupi(vector<int> &arr){
        // vector<int>ans = {};
        // int ans1 = 0;
        // for (int i = 0; i < arr.size(); i++)
        // {
        //     if(ans1 = ans1^arr[i]){
        //         ans.push_back(arr[i]);
        //     }
        // }
        // return ans;
        vector<int> ans = {};
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size()-1; i++)
        {
            if (arr[i]==arr[i+1])
            {
                ans.push_back(arr[i]);
            }
        }
        return ans;
        
    }
//! Find duplicate (coding ninja)

    // [1,2,3,4,3]  sort= [1,2,3,3,4]
    int finddupi(vector<int> &arr){
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size()-1; i++)  // -1 so it dont go out of array
        {
            if (arr[i]==arr[i+1])
            {
                return arr[i];
            }
        }
    }



//! Q.1207 Unique Number of Occurrences
    // every element should have unique occurrence
    int uniqNum(vector<int>& arr){

        map<int,int>mp;
        int n = sizeof(arr);
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;  //counting occurrence first of all elements and pushing it into map
        }
        set<int>s; // set wil only take unique values 
        for(auto i: mp){
            s.insert(i.second);  // here second means the value of key
        }
        if (mp.size()==s.size())  // comparing size if its not same then 
        {
            return true;
        }else{
            return false;
        }
    }

//! swap alternate

    void swapAlt(int arr[], int size){
        int start = 0;
        int alt = start + 1;

        while (start<=alt && alt < size)
        {
            swap(arr[start], arr[alt]);
            start+=2;
            alt+=2;
            // start++;
            // alt++;
        }
        
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
    }

//! reverse an array 

    void reverseArray(int arr[], int size){
        int start = 0;
        int end = size-1;

        while (start<=end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
    }

//! TOPIC: Linear Search 
    //*search if value is present or not:

    bool searchValue(int arr[], int size, int value){
        for (int i = 0; i < size; i++)
        {
            if (arr[i]==value)
            {
                return true;
            }  
        }
        return false;
    }

//! Sum of 2 or not better approach

bool power2(int x)
{
	// for negative numbers
    if (x<=0){
        return false;
    }
    // Check if the number has only one set bit 
	if ((x&(x-1))==0)  //* if & of n and (n-1) is true then its power of 2
    {
        return true;
    }
    return false;
} 
//! Sum of array

int getSum(int arr[], int size){
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = arr[i] + sum;
    }
    return sum;
}

//! Maximum number in array
int maxNum(int arr[], int size){
    int maxi = INT_MIN;    

    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);    //* better code quality
        // if (maxi<arr[i])
        // {
        //     maxi=arr[i];
        // }
    }
    return maxi;
}

//! Minimum number in array
int minNum(int arr[], int size){
    int mini = INT_MAX;

    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]);    //* better code quality
        // if (mini>arr[i])
        // {
        //     mini=arr[i];
        // }
    }
    return mini;
}

int main()
{
    //! sort 0 1

    int ninthArray[8] = {1,0,1,0,1,0,0,1};
    sortOne(ninthArray,8);

    //! find duplicate

    vector<int> eightArray = {1,3,2,4,4};
    // int ans = finddupi(eightArray);
    // cout<<ans;
    //! swap alternate

    int seventhArray[6]={1,2,3,4,5,6};
    // swapAlt(seventhArray, 6);



    //! reverse an array

    int sixthArray[6] = {1,2,3,-3,5,9};
    // reverseArray(sixthArray, 6);


    //! TOPIC: Linear Search 
    //* search if value is present or not

    int fifthArray[5] = {2,-4,5,6,9};
    // if (searchValue(fifthArray, 5, 44))
    // {
    //     cout<<"it's present";
    // }else{
    //     cout<<"it's absent";
    // }
    
    //! Q4. Sum of 2 or not
    
    int forthAns = power2(4);
    // if (forthAns)
    // {
    //     cout<<"its power of 2";
    // }else{
    //     cout<<"its either negative number or not power of 2";
    // }
    
    //! Q3. Sum of array

    int thirdArray[3]={5,-5,5};
    int thirdAns = getSum(thirdArray, 3);
    // cout<<thirdAns;

    //! Q2. Maximum number in array

    int firstArray[3];
    // int firstAns = maxNum(firstArray,3);
    // cout<<"Maximum number in array is: "<<firstAns<<endl;

    //! Q1. Minimum number in array

    int SecondArray[3];
    // int SecondAns = minNum(SecondArray,3);
    // cout<<"Minimum number in array is: "<<SecondAns<<endl;
}
