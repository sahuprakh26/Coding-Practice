int maxSubArray(int* nums, int n)
{
int msf=INT_MIN,meh=0;
for(int i=0;i<n;i++)
{      
   meh=meh+nums[i];
   if(meh>msf)
        msf=meh;
    if(meh<0)
        meh=0;
    
}
    return msf;
}    
