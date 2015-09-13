//
//  SearchInSortedPivotedArray.cpp
//  Algos
//
//  Created by Kaushik Dev on 9/6/15.
//  Copyright (c) 2015 Kaushik Dev. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Utilities.h"
using namespace std;

int FindPivot(int* a, int low, int high)
{
	if(high < low) 
		return -1;

	if(high == low)
		return low;
	
	int mid = (low + high)/2;
	
	if(mid <high && a[mid] > a[mid+1])
		return mid;
	
	if(mid > low && a[mid] < a[mid-1])
		return mid - 1;
	
	if(a[low] >= a[mid])
		return FindPivot(a, low, mid-1);
	else
		FindPivot(a, mid+1, high);
}

int BinarySearch(int* a, int start, int end, int key)
{
	int mid= (start + mid)/2;
	
	if(a[mid] == key)
		return mid;
	else if(a[mid] > key)
		BinarySearch(a, start, mid, key);
	else
		BinarySearch(a, mid+1, end, key);
}

int SearchSortedPivotedArray(int* a, int len, int key)
{
	int low = 0, high = len-1;
	int pivot = FindPivot(a, low, high);
	
	if(pivot == -1)
		return BinarySearch(a, 0, len-1, key);
	
	if(a[pivot] == key)
		return pivot;
	
	if(a[0] <= key)
	{
		return BinarySearch(a, 0, pivot-1, key);
	}
	else
	{
		return BinarySearch(a, pivot+1, len-1, key);
	}
}

void TestSearchSortedPivotedArray()
{
	PrintHeader("Search Sorted Pivot Array");
    
    int a[] = {3,4,5,1,2};
    int len = sizeof(a)/sizeof(a[0]);
    int key = 4;
    
    cout<<SearchSortedPivotedArray(a, len, key);
    
    PrintFooter("Search Sorted Pivot Array");
}
