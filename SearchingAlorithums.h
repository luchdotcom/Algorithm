//
// Created by luchdotcom on 25.05.22.
//

#ifndef DEMO_SEARCHINGALORITHUMS_H
#define DEMO_SEARCHINGALORITHUMS_H

void swap( int *pInt, int *pInt1);
int linearSearch(const int* arr,unsigned size,int search);
int binarySearch(int* arr, int left, int right,int search);
int jumpSearch(const int *arr,unsigned size, int search);
int interpolationSearch(int* arr, int search);
int partition( int* arr, int left, int right);
void quicksort(int* arr,int start, int end);
void bSort(int *arr, int start ,int end);



#endif //DEMO_SEARCHINGALORITHUMS_H