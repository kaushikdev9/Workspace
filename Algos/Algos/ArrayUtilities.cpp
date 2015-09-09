//
//  ArrayUtilities.cpp
//  Algos
//
//  Created by Kaushik Dev on 9/2/15.
//  Copyright (c) 2015 Kaushik Dev. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void PrintArray(int* a, int len)
{
    for(int k=0;k<len;k++)
    {
        cout<<a[k]<<"->";
    }
}

void Swap(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int ArraySize(int *a)
{
    return sizeof(a)/sizeof(*a);
}