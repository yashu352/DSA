int removeDuplicates(int* nums, int numsSize)
{
    int k=1;
    for(int i=0;i<numsSize;i++)
    {
        if(i==0)
        {
            continue;
        }
        else
        {
            if(nums[i]!=nums[i-1])
            {
                nums[k]=nums[i];
                k++;
            }
            else
            {
                continue;
            }
        }
    }
return k;
}