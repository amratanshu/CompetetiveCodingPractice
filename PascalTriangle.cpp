//InterviewBit problem

/*Statement : (Pascal Triangle) : Given numRows, generate the first numRows of Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.
*/








vector<vector<int> > Solution::solve(int A) {
      
    //A is the number of rows 
    
    if(A==0)
    {
        
        vector<vector<int> > v;
        return v;
        
        
        
    }
    int colom[A];
    
    for(int i=0;i<A;i++)
    {
        colom[i]=i+1;
        
    }
    vector<vector<int> > v(A);
    
    for(int i=0;i<A;i++)
    {
        int col=colom[i];
        v[i] = vector<int>(col);
        
        
    }    
    
    v[0][0]=1;
    
    for(int i=1;i<A;i++)
    {
        for(int j=0;j<=i;j++)
        {
            
            if(j==0 || j==i)
            {
               v[i][j]=1; 
            
            }
             else
            {
                
                v[i][j]=v[i-1][j-1] + v[i-1][j];
            }
            
            
        }
       
        
    }
    
    return v;
   
}

