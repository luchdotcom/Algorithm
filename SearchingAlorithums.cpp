//

#include <valarray>
#include "SearchingAlorithums.h"

//
// Created by luchdotcom on 25.05.22.



void swap(int *pInt,  int *pInt1)
{
    int tmp = *pInt;
    *pInt = *pInt1;
    *pInt = tmp;

}

int binarySearch(int *arr, int left, int right, int search)
{
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == search) {
            return mid;
        }
        if (arr[mid] > search){
            return binarySearch(arr,left,mid-1,search);
        }
        else
        {
            return binarySearch(arr,mid+1, right,search);
        }
    }
    return -1;
}

int jumpSearch(const int *arr,unsigned size, int search)
{
    unsigned step = sqrt(size);
    int prev = 0;

    while (arr[prev] < search) {
        prev++;


    }
    return 0;
}

int linearSearch(const int * arr,unsigned size, int search)
{
    for (int i = 0;i < size; i++)
    {
        if (arr[i] == search){return i;}
    }
    return -1;
}

void quicksort( int *arr, int start, int end)
{
    if(start < end){
        int part = partition(arr, start, end);
        quicksort(arr,start,part - 1);
        quicksort(arr, part +1, end);
    }
}

int partition( int *arr, int start, int end)
{
  int pivot = arr[end];
  int index = start;
    for (int i = index; i < end; ++i) {
        if (arr[i] < pivot)
        {
            index++;
            swap(&arr[index], &arr[i]);
        }
    }
    swap(&arr[index], &arr[end]);
    return index;
}
void bSort(int *arr, int start ,int end){

    for (int i =0; i<end; i++)
    {
        for (int k =i+1; k<end;k++){
            if (arr[k]< arr[i]){
                swap(&arr[i], &arr[k]);
            }
        }
    }
}