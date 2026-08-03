int* runningSum(int* nums, int numsSize, int* returnSize)
{
    int *a = (int *)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    for(int i=0;i<numsSize;i++)
    {
        if (i==0)
        {
            a[0]=nums[0];
        }
        else
        {
            a[i]=a[i-1]+nums[i];
        }
    }
    return a;
}