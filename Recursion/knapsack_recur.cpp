class Solution
{
    int max(int a,int b)
    {
        return a>=b?a:b;
    }
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       if(W==0 || n==0)
        return 0;
       if(wt[n-1]<=W)
        return max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
       else if(wt[n-1]>W)
        return knapSack(W,wt,val,n-1);
    }
};
