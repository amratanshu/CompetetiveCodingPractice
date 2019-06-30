//InterviewBit

/*Wave Array : Given an array of integers, sort the array into a wave like array and return it, 
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....
*/


vector<int> Solution::wave(vector<int> &A) 
{
    
    /*
    sort(A.begin(),A.end()); //sorted
    int median;
    //find median now
    median = A[A.size()/2];
        
    vector<int> less;
    vector<int> more;    
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<median)
        {
               less.push_back(A[i]);
        }
        if(A[i]>median)
                more.push_back(A[i]);
    }
    
    vector<int> result;
    
    
    for(int i=0;i<A.size();i++)
    {
        if(i==0)
        {
            result.push_back(median);
            continue;
        }
        if(i%2 == 0)
        {   
            int index;
            index=(i/2)-1;
            result.push_back(more[index]);
        }
        else
        {
            int index;
            index=i/2;
            result.push_back(less[index]);
        }
    }
    
    return result;
    */
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i+=2)
    {
        swap(A[i],A[i+1]);
    }
    return A;
    
}

