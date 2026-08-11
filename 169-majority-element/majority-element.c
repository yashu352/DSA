int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
int majorityElement(int* nums, int numsSize) 
{
    int n=numsSize/2;
    int count=1;
    qsort(nums,numsSize,sizeof(int),compare);
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            count++;
        }
        else
        {
            count=1;
        }
        if(count>n)
        {
            return nums[i];
        }
    }
return nums[0];
}
