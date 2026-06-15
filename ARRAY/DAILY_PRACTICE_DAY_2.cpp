// question 1: find out rhe min num in the array...

#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;

// question 3: LeetCode 448 - Find All Numbers Disappeared in an Array
vector<int> findDisappearedNumbers(vector<int>& nums) {
    for (int i = 0; i < nums.size(); ++i) {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0) {
            nums[index] = -nums[index];
        }
    }
    vector<int> result;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] > 0) {
            result.push_back(i + 1);
        }
    }
    return result;
}

int main(){

// question 1:
//     int arr[5]={ 11,21,3,42,5};
//     int mini=INT_MAX;
//     for(int i=0 ;i<5;i++){
//         if(arr[i]<mini){
//             mini =arr[i];
//         }
//     }
//     cout<<"min num is :"<< mini<< endl;

// question 2: reverse the array;

    int arr[5]={ 1, 2, 3, 4, 5};
    int start =0;
    int end =4;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i =0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

// test question 3:
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> missing = findDisappearedNumbers(nums);
    cout << "Missing numbers: ";
    for(int num : missing) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}