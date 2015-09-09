//
//  PairWithSumInArray.cpp
//  Algos
//
//  Created by Kaushik Dev on 9/2/15.
//  Copyright (c) 2015 Kaushik Dev. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include "Utilities.h"
#include "ArrayUtilities.h"
using namespace std;

//
//http://www.geeksforgeeks.org/write-a-c-program-that-given-a-set-a-of-n-numbers-and-another-number-x-determines-whether-or-not-there-exist-two-elements-in-s-whose-sum-is-exactly-x/
//

bool PairWithSum(int* a, int len, int sum)
{
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(i!=j)
            {
                if(sum == a[i] + a[j])
                    return true;
            }
        }
    }
    return false;
}

bool PairWithSumV2(int* a, int len, int sum)
{
    BubbleSort(a, len);
    
    for(int i=0, j=len-1;i<len && j>i;)
    {
        if(a[i] + a[j] == sum)
        {
            return true;
        }
        else if(a[i] + a[j] > sum)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}

void TestPairWithSum()
{
    PrintHeader("Pair With Sum");
    
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int len = sizeof(a)/sizeof(a[0]);
    int sum = 33;
    
    bool isExists = PairWithSum(a, len, sum);
    
    PrintHeader("   V1  ");
    if(isExists)
    {
        cout<<"Pair with sum exists";
    }
    else{
        cout<<"Pair with sum doesnt exist";
    }
    PrintFooter("   V1  ");
    
    PrintHeader("   V2  ");
    isExists = PairWithSumV2(a, len, sum);
    if(isExists)
    {
        cout<<"Pair with sum exists";
    }
    else{
        cout<<"Pair with sum doesnt exist";
    }
    PrintFooter("   V2  ");
    
    PrintFooter("Pair With Sum");
}