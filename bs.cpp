#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int tar){
    int st = 0, end = arr.size()-1;
    int mid = st + (end-st/2);
    while(st<=end){
        if(tar > arr[mid]){
          st = mid+1;
        }
        else if(tar < arr[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
vector<int> arr = {2, 5, 8, 12, 22, 30, 32};
int tar = 22;

cout << binarySearch(arr, tar) << endl;

    return 0;
}

