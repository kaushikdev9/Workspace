//
//  LargestSumContiguousSubArray.cpp
//  Algos
//
//  Created by Kaushik Dev on 9/3/15.
//  Copyright (c) 2015 Kaushik Dev. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Utilities.h"
using namespace std;

//
//http://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
//

int LargestSumContiguousSubArray(int* a, int len)
{
    int maxSum = 0;
    int currMax = 0;
    for(int i=0; i<len; i++)
    {
        currMax += a[i];
        
        if(maxSum < currMax)
        {
            maxSum = currMax;
        }
        
        if(currMax < 0)
        {
            currMax = 0;
        }
    }
    
    return maxSum;
}

void TestLargestSumContiguousSubArray()
{
    PrintHeader("Largest Sum Contiguous Sub Array");
    
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int len = sizeof(a)/sizeof(a[0]);
    
    cout<<LargestSumContiguousSubArray(a, len);
    
    PrintFooter("Largest Sum Contiguous Sub Array");
}