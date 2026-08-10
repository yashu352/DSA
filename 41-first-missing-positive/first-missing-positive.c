int firstMissingPositive(int* nums, int numsSize) 
{
    int i,temp;
for(i = 0; i < numsSize; i++)
{
    while(nums[i] > 0 &&
          nums[i] <= numsSize &&
          nums[i] != nums[nums[i] - 1])
    {
        int correct = nums[i] - 1;

        int temp = nums[i];
        nums[i] = nums[correct];
        nums[correct] = temp;
    }
}
for(i=0;i<numsSize;i++)
{
    for(i = 0; i < numsSize; i++)
    {
        if(nums[i] != i + 1)
        {
            return i + 1;
        }
    }
}
return numsSize+1;
}