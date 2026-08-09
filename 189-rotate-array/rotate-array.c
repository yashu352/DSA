void rotate(int* nums, int numsSize, int k)
{
    k=k%numsSize;
    int left=0;
    int temp=0;
    int right=numsSize-1;
    while(left<right)
    {
        temp=nums[left];
        nums[left]=nums[right];
        nums[right]=temp;
        left++;
        right--;
    }
    left=0;
    right=k-1;
    while(left<right)
    {
        temp=nums[left];
        nums[left]=nums[right];
        nums[right]=temp;
        left++;
        right--;
    }
    left=k;
    right=numsSize-1;
    while(left<right)
    {
        temp=nums[left];
        nums[left]=nums[right];
        nums[right]=temp;
        left++;
        right--;
    }
}