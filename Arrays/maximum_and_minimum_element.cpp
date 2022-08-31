class Solution
{
   public:
    int findSum(int A[], int n)
    {
        int sum=0;
    int	min=A[0];
    int	max=A[0];
    	for(int i=0;i<n;i++)
    	{
    	    if(A[i]<min)
    	    {
    	        min=A[i];
    	    }
    	}
    	for(int i=0;i<n;i++)
    	{
    	    if(A[i]>max)
    	    {
    	        max=A[i];
    	    }
    	}
    	sum=min+max;
    	return sum;
    }

};

problem link:
https://practice.geeksforgeeks.org/problems/max-min/1
