// https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include<iostream>
using namespace std;

int findPivot(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int binarySearch(int arr[], int start, int end, int target){
    int bStart = start;
    int bEnd = end;
    int mid = start + (bEnd-bStart)/2;

    while(bStart <= bEnd){
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            bEnd = mid-1;
        }
        else{
            bStart = mid+1;
        }
        mid = bStart + (bEnd-bStart)/2;
    }
    return -1;
}

int findElement(int arr[], int size, int pivot, int target){
    if(arr[pivot] <= target && arr[size-1] >= target){
        return binarySearch(arr, pivot, size-1, target);
    }
    else{
        return binarySearch(arr, 0, pivot-1, target);
    }
}

int main(){

    int a[5] = {7, 9, 10, 1, 4};
    int pivot = findPivot(a, 5);
    cout<<findElement(a, 5, pivot, 10);
    
    return 0;
}

// !----------------------------------------------------------------------------

int findPivot(vector<int>& arr, int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int binarySearch(vector<int>& arr, int start, int end, int target){
    int bStart = start;
    int bEnd = end;
    int mid = start + (bEnd-bStart)/2;

    while(bStart <= bEnd){
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            bEnd = mid-1;
        }
        else{
            bStart = mid+1;
        }
        mid = bStart + (bEnd-bStart)/2;
    }
    return -1;
}


int search(vector<int>& arr, int size, int target)
{
    int pivot = findPivot(arr, size);
    if(arr[pivot] <= target && arr[size-1] >= target){
        return binarySearch(arr, pivot, size-1, target);
    }
    else{
        return binarySearch(arr, 0, pivot-1, target);
    }
}