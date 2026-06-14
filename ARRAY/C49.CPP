// find the missing and duplicate elements in an array of size n containing numbers from 1 to n
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void MissingDuplicateElement(vector<int>& arr) {
    for(int i=0; i<arr.size(); i++){
        int index  = abs(arr[i]);
        if(arr[index - 1]>0){
            arr[index - 1]= -arr[index - 1];
        }
    }
    cout<<"Missing Duplicate elements are "<<endl;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
            cout<<(i+1)<<" ";
        }
    }
}
int main() {
    vector<int> arr{1, 3, 1, 4, 4}; 
    MissingDuplicateElement(arr);
    return 0;
}