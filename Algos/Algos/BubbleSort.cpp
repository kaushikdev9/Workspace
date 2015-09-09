//
//  BubbleSort.cpp
//  Algos
//
//  Created by Kaushik Dev on 9/2/15.
//  Copyright (c) 2015 Kaushik Dev. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "ArrayUtilities.h"
#include "Utilities.h"
using namespace std;

void BubbleSort(int* a, int len)
{
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len-1;j++)
        {
            if(a[j]>a[j+1])
            {
                Swap(a[j], a[j+1]);
            }
        }
    }
}

void TestBubbleSort()
{
    PrintHeader("Bubble Sort");
    
    int a[] = {64, 34, 25, 12, 22, 11, 90, 16};
    int len = sizeof(a)/sizeof(a[0]);
    
    BubbleSort(a, len);
    
    PrintArray(a, len);
    
    PrintFooter("Bubble Sort");
}