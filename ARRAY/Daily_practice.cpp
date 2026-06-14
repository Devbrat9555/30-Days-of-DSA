#include<iostream>
#include<climits> // added for INT_MIN
using namespace std;

// question 1 // take 5 element input in array and print their double 
void question1() {
    int arr[5];
    cout<<"enter array values: "<<endl;
    for(int i=0;i<5;i++){
        cin >>arr[i];
    }
    cout<<"doubled values: ";
    for(int i=0;i<5;i++){
        cout<< 2*arr[i]<<" ";
    }
    cout<<endl;
}

// question 2 : change all the array value to 1
void question2() {
    int arr[5]={1 , 2, 3 , 4 ,5};
    for(int i=0;i<5; i++){
        arr[i]=1;
    }
    cout<<"array values: ";
    for (int i=0;i<5;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

// function for the next example
void increment(int arr[], int size) {
    arr[0] = arr[0] + 1;
}

void testIncrement() {
    int arr[5]={1 , 2, 3 , 4 ,5};
    cout<<"before increment: "<<arr[0]<< endl; // fixed missing semicolon
    increment(arr,5);  // something wrong is fixed by adding the function
    cout<<"after increment: "<<arr[0]<< endl;
}

// question 3 //  linear search in array
// we need to fine whethe 6 is present in the array or not
// we go to each index and check whether the value is 6 or not 
// if not we move to next indec and  repeat
// if present then terminate search
bool findElement(int arr[], int size , int key){
    for (int i=0;i<size; i++){
        if( arr[i]==key){
            return true;
        } // fixed missing closing brace
    }
    return false;
}

void question3() {
    int arr[]={ 2 ,9,6,7,4};
    int size = 5;
    int key = 6;
    if(findElement(arr, size, key)) {
        cout<<"Element "<<key<<" is present."<<endl;
    } else {
        cout<<"Element "<<key<<" is NOT present."<<endl;
    }
}

// question 4 : count 0s and 1s in array;
// just traverse the array if element is zero then do zero count++ and if current element is one then do count ++
void question4() {
    int arr[5]={0,1,0,1,0};
    int zeroCount=0;
    int oneCount=0;
    for (int i=0;i<5;i++){
        if (arr[i]==0){
            zeroCount++;
        }
        else{
            oneCount++;
        }
    }
    cout<<"no of zeros: "<<zeroCount<<endl;
    cout<<"no of ones:"<<oneCount<<endl;
}

// question 5: find max num in the array assume that
// maxi = arr[0] and traverse the array from i =1 to n-1 and 
// compare with maxi and if element is greater than maxi 
// whcih is the max num ?
void question5() {
    int arr[5]={2,9,6,7,4};
    int maxi = INT_MIN;
    for (int i=0;i<5;i++){
        if(arr[i]>maxi){
            maxi=arr[i]; // fixed missing semicolon
        }
    }
    cout<<"max num is:"<<maxi<<endl;    
}

int main(){
    cout << "--- Question 1 ---" << endl;
    // question1(); // Uncomment to run and test input
    cout << "(Uncomment question1() in main to run it)" << endl;
    
    cout << "\n--- Question 2 ---" << endl;
    question2();
    
    cout << "\n--- Test Increment ---" << endl;
    testIncrement();
    
    cout << "\n--- Question 3 ---" << endl;
    question3();
    
    cout << "\n--- Question 4 ---" << endl;
    question4();
    
    cout << "\n--- Question 5 ---" << endl;
    question5();
    
    return 0;
}
