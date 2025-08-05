#include<iostream>
#include<vector>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
// algorithm is push the max to that last by using ADJACENT SWAPS
void bubble_sort(vector<int> &arr){
    for(int i = arr.size() -1 ; i >= 0 ; i--){
        // 1st iteration i goes from 0 to n-1
        // 2end iteration i goes from 0 to n-2
        // 3rd iteration i goes from 0 to n-3
        // last iteration would be  from  0 to  1 (0 to 0 does not make sense)
         for(int j = i; j >= 0; j--){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
         }
    }

}
int main(){
    vector<int> arr = {13,46,24,52,20,9};
    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;

    bubble_sort(arr);

    for(auto it: arr){
        cout<<it<<" ";

    }
    cout<<endl;

    return 0;
}