//
//  LinearSearch.cpp
//  Algos
//
//  Created by Kaushik Dev on 7/3/15.
//  Copyright (c) 2015 Kaushik Dev. All rights reserved.
//
#include <iostream>
#include "Utilities.h"
using namespace std;

int LinearSearch(int a[], int len, int key)
{
    for(int i=0;i<len;i++)
    {
        if(key == a[i])
        {
            return i;
        }
    }
    
    return -1;
}

void TestLinearSearch()
{
    PrintHeader("Linear Search");
    
    int a[] = {1,2,3,4,5};
    int len = sizeof(a)/sizeof(a[0]);
    
    int index = LinearSearch(a, len, 2);
    if(index != -1)
    {
        cout<<"The index of the number is: "<<index;
    }
    else
    {
        cout<<"Number does not exist.";
    }
    
    PrintFooter("Linear Search");
}