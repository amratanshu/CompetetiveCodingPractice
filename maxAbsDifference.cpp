//InterviewBit problem

//InterviewBit problem
/*
Maximum absolute difference

Statement: You are given an array of N integers, A1, A2 ,…, AN. Return maximum value of f(i, j) for all 1 ≤ i, j ≤ N.
f(i, j) is defined as |A[i] - A[j]| + |i - j|, where |x| denotes absolute value of x.





#include<math.h>

int Solution::maxArr(vector<int> &A) 
{
    /*int i,j,diff=0,d;

    for(i=0;i<A.size();i++)
    {
        for(j=i+1;j<A.size();j++)
        {
            d= abs(A[i] - A[j]) + (j-i); //no need of abs here in the second term
            if(d>diff)
            {
                diff=d;
            }
        
        }
        
        
    }
    
    return diff;
    */
    
    int max1 = INT_MIN, min1 = INT_MAX; 
    int max2 = INT_MIN, min2 = INT_MAX; 
  
    for (int i = 0; i < A.size(); i++) { 
  
        // Updating max and min variables 
        // as described in algorithm. 
        max1 = max(max1, A[i] + i); 
        min1 = min(min1, A[i] + i); 
        max2 = max(max2, A[i] - i); 
        min2 = min(min2, A[i] - i); 
    } 
  
    // Calculating maximum absolute difference. 
    return max(max1 - min1, max2 - min2);

}

