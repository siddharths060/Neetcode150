#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    int left = low, right = mid+1;
    vector<int> temp;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;

        }
        else{
            temp.push_back(arr[right]);
            right++;
        }

    }

    // if any elements left in the low to mid array (left part)
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    // if any elements left in the mid+1 to high array  (right part)
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    // now to copy values of temp array back to original array
    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }

}

void mergeSort(vector<int> &arr, int low, int high){
    // base case if low == high (ie, only one element, then we can't divide it)
    if(low >= high)
    return;

    int mid = (low + high) / 2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);

}




int main(){
    vector<int> arr = {3,1,2,1,4,5,2,6,4};
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;
    mergeSort(arr,0,arr.size() -1);
    for(auto it: arr){
        cout<<it<<" ";
        
    }
    cout<<endl;
    
    return 0;
}