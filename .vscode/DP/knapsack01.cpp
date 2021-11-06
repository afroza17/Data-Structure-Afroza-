    int max(int a,int b)
    {
        return a>=b?a:b;
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>> t(n+1,vector<int>(W+1));
       
        for(int i=0;i<n+1;i++)
        {
           for(int j=0;j<W+1;j++)
           {
               if(i==0||j==0)
                t[i][j]=0;
           }
        }
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<W+1;j++)
            {
                int inc=0,exc=0;
                if(wt[i-1]<=j)
                   inc=val[i-1]+t[i-1][j-wt[i-1]]; 
                exc=t[i-1][j];
                t[i][j]=max(inc,exc);
            }
        }
        return t[n][W];
    }