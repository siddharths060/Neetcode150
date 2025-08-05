#include<iostream>
#include<vector>

using namespace std;

// TIME COMPLEXITY IS O(n^2)
// Main algoritms is that select minimum and swap with starting indices

// ex: 13,46,24,52,20,9 and n is size of array
// mini = 9 , swap with 13
// initially swap happend btw 0 to n-1
// swap happend btw 1 to n-1
// swap happend btw 2 to n-1
// till n-2, hence i starts from 0 to n-2 

// j goes from i to n-1
int swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void selection_sort(vector<int> &arr){
        for(int i = 0; i < arr.size() -1; i++){
            int mini = i;
            for(int j = i; j < arr.size(); j++){
                if(arr[j] < arr[mini]){
                    swap(arr[mini], arr[j]);
                }
            }
        }
}


int main(){

    vector<int> arr = {13,46,24,52,20,9};
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;

    selection_sort(arr);
    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}


