int findNumbers(int* nums, int numsSize)
{
    int ans=0;
    int temp;
    for (int i=0;i<numsSize;i++)
    {
        temp=nums[i];
        int count=0;
        while(temp>0)
        {
            count=count+1;
            temp=temp/10;
        }
        if(count%2==0)
        {
            ans++;
        }
        else
        {
            continue;
        }  
    }
return ans;  
}