#include<iostream>
#include<vector>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int f(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high){
            i++;
        }

        while(arr[j] > pivot && j >= low){
            j--;
        }
        if(i < j)
            swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}


void qs(vector<int> &arr, int low, int high){
    if(low < high){
       int  Pindex = f(arr,low,high);

        qs(arr,low, Pindex -1 );
        qs(arr,Pindex+1, high);

    }
}



int main(){
    vector<int> arr = {1,51,5,12,3,5,16,6,13};
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;
    qs(arr,0, arr.size()-1);
    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}