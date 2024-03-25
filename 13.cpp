// https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int firstIndex = -1;

    while(start <= end){
        if(arr[mid]==key){
            firstIndex = mid;
            end = mid - 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return firstIndex;
}

int lastOccurance(int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int lastIndex = -1;

    while(start <= end){
        if(arr[mid]==key){
            lastIndex = mid;
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return lastIndex;
}

int ouccurance(int (*fun1)(int arr[], int size, int key), int (*fun2)(int arr[], int size, int key)){
    return (int)((char*)fun2 - (char*)fun1) + 1;
}

int main(){

    int a[11] = {2,3,4,9,34,87,87,87,87,87,100};
    cout<<"The firstOccurance is at index "<<firstOccurance(a, 11, 87)<<endl;
    cout<<"The lastOccurance is at index "<<lastOccurance(a, 11, 87)<<endl;
    cout<<"Number of occurance of element is "<<lastOccurance(a, 11, 87) - firstOccurance(a, 11, 87) + 1<<endl; 
    
    return 0;
}

//! ----------------------------------------------------------------------

// int firstOccurance(vector<int>& arr, int size, int key){

//     int start = 0;
//     int end = size-1;
//     int mid = start + (end-start)/2;
//     int firstIndex = -1;

//     while(start <= end){
//         if(arr[mid]==key){
//             firstIndex = mid;
//             end = mid - 1;
//         }
//         else if(arr[mid] > key){
//             end = mid - 1;
//         }
//         else if(arr[mid] < key){
//             start = mid + 1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return firstIndex;
// }

// int lastOccurance(vector<int>& arr, int size, int key){

//     int start = 0;
//     int end = size-1;
//     int mid = start + (end-start)/2;
//     int lastIndex = -1;

//     while(start <= end){
//         if(arr[mid]==key){
//             lastIndex = mid;
//             start = mid + 1;
//         }
//         else if(arr[mid] > key){
//             end = mid - 1;
//         }
//         else if(arr[mid] < key){
//             start = mid + 1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return lastIndex;
// }

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     pair<int, int> p;
//     p.first = firstOccurance(arr, n, k);
//     p.second = lastOccurance(arr, n, k);
//     return p;
// }