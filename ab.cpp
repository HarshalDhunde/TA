// see bro this question is similar to 0-1 knapsack problem
// which you solve recently
// this question is based on unbounded knapsack
// in this you can take any element any number of time
int countWaysToMakeChange_helper(int coins[],int n,int sum,int **output)
{
    if(sum<0||n<=0)
    {
        return 0;
    }
    if(sum==0)
    {
        return 1;
    }
    
    if(output[sum][n]!=-1)
    {
        return output[sum][n];
    }
    
        int x=countWaysToMakeChange_helper(coins,n-1,sum,output);
        int y=countWaysToMakeChange_helper(coins,n,sum-coins[n-1],output);
        int ans=x+y;
        output[sum][n]=ans;
        return output[sum][n];
}

int countWaysToMakeChange(int coins[], int n, int sum){
    int **output=new int*[sum+1];
    for(int i=0;i<=sum;i++)
    {
        output[i]=new int [n+1];
        for(int j=0;j<=n;j++)
        {
            output[i][j]=-1;
        }
    }
    return countWaysToMakeChange_helper(coins,n,sum,output);
}