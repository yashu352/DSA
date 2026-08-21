int missingNumber(int* nums, int numsSize)
{
    int xor=0;
    int arr[numsSize];
    for(int i=0;i<numsSize;i++)
    {
        arr[i]=i+1;
    }    
    for(int i=0;i<numsSize;i++)
    {
        xor=xor^nums[i];
        xor=xor^arr[i];
    }
    return xor;
}