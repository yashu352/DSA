int maxSubArray(int* nums, int numsSize) 
{
    int current=nums[0];
    int best=nums[0];
    int continueSum=0;
    int fresh=0;
    for(int i=1;i<numsSize;i++)
    {
        continueSum=current+nums[i];
        fresh=nums[i];
        if (fresh>continueSum)
        {
            current = fresh;
        }
        else
        {
            current=continueSum;
        }
        if(current > best)
        {
            best = current;
        }
    }
return best;
}