// https://www.codingninjas.com/studio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM
// 2 3 1 6 3 6 2
// 1
// Explanation: The array is [2, 3, 1, 6, 3, 6, 2]. Here, the numbers 2, 3, and 6 are present twice, and the number 1 is present only once. So, the unique number in this array is 1.

int findUnique(int *arr, int size){
    for(int i = 0; i < size; i++){
        int count = 0;
        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            return arr[i];
        }
    }
}

// !------------------------------------------------------------------------------

int findDuplicate(vector<int> &arr){
    for(int i=0; i<=arr.size(); i++){
        for(int j=1; j<=arr.size()-1; j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
}
