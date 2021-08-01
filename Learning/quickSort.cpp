#include<bits/stdc++.h>
using namespace std;

// Print an array
void printArray(int *n, int l, int w){
    for(int i = l; i <= w; i++){
        cout<<n[i]<<" ";
    }
    cout<<'\n';
}

int partition(int A[], int low, int high){
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do{
        while(A[i]<=pivot){
            i++;
        }
        while(A[j]>pivot){
            j--;
        }
        if(i < j){
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while(i < j);
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quick_sort(int A[], int low, int high){
    int partitionIndex; // Index of pivot
    if(low < high){
        partitionIndex = partition(A, low, high);
        quick_sort(A, low, partitionIndex-1);
        quick_sort(A, partitionIndex+1, high);
    }
}

int main(){
    int A[] = {1, 5, 6, 6, 4, 2, 5};
    int low = 0;
    int high = 6;
    quick_sort(A, low, high);
    printArray(A, low, high);
    return 0;
}