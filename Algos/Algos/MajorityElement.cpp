//
//  MajorityElement.cpp
//  Algos
//
//  Created by Kaushik Dev on 9/3/15.
//  Copyright (c) 2015 Kaushik Dev. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Utilities.h"
#include "ArrayUtilities.h"
using namespace std;

//
//http://www.geeksforgeeks.org/majority-element/
//

bool IsMajority(int* a, int len, int currentMajority)
{
    int count = 0;
    for(int i=0;i<len;i++)
    {
        if(a[i] == currentMajority)
        {
            count++;
        }
    }
    
    return count > len/2;
}

int FindMajorityElement(int* a, int len)
{
    int count = 0;
    int  currentMajority = -999;
    
    for (int i=0; i < len; i++)
    {
        if(count == 0)
        {
            currentMajority = a[i];
        }
        
        if (currentMajority == a[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    
    return IsMajority(a, len, currentMajority)? currentMajority : -999;
}

void TestMajorityElement()
{
    PrintHeader("Find Majority Element");
    
    int a[] = { 3, 3, 4, 2, 4, 4, 2, 4};
    //int a[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int len = sizeof(a)/sizeof(a[0]);
    
    int result = FindMajorityElement(a, len);
    
    if(result != -999)
    {
        cout<<result;
    }
    else
    {
        cout<<"NONE";
    }
    
    PrintFooter("Find Majority Element");
}