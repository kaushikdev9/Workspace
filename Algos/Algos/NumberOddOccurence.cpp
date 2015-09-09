//
//  NumberOddOccurence.cpp
//  Algos
//
//  Created by Kaushik Dev on 9/3/15.
//  Copyright (c) 2015 Kaushik Dev. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Utilities.h"
using namespace std;

int NumberOddOccurence(int* a, int len)
{
    int num = a[0];
    for(int i=1;i<len;i++)
    {
        num ^= a[i];
    }
    
    return num;
}

void TestNumberOddOccurence()
{
    PrintHeader("Number occuring odd number of times");
    
    int a[] = {1, 2, 3, 2, 3, 1, 3};
    int len =sizeof(a)/sizeof(a[0]);
    
    cout<<NumberOddOccurence(a, len);
    
    PrintFooter("Number occuring odd number of times");
}

