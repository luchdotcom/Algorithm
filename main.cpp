
#include <iostream>
#include "SortingAlgorithums.h"
#include "grapfs.h"

using namespace std;

#include <memory>
typedef struct {
//    int M,N,directed;
    int arr[10];
} AM_Graph;
void printArray(int A[], int size) {
    for (auto i = 0; i < size; i++)
        cout << A[i] << " ";
}

// Driver code
int main() {
//    int arr[] = {12, 11, 13, 5, 6, 7};
//    auto arr_size = sizeof(arr) / sizeof(arr[0]);
//
//    cout << "Given array is \n";
//    printArray(arr, arr_size);
//
//    mergeSort(arr, 0, arr_size - 1);
//
//    cout << "\nSorted array is \n";
//    printArray(arr, arr_size);

//    int num = 3;
//    int a = 5;
////    int const *ptr = &num;//const int
//     const int* ptr = &num;//const int
////    const int * const ptr1 = &num; //const ptr to const int
//    int *const ptr1 = &num; //const ptr
//    *ptr1 = 33;
//    ptr = &a;
//    cout << *ptr;
//    cout << *ptr1;
    cout << sizeof(AM_Graph);
    return 0;
}
