int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
    *returnSize = 2 * numsSize;

    int *newarray = (int *)malloc((*returnSize) * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        newarray[i] = nums[i];
        newarray[i + numsSize] = nums[i];
    }

    return newarray;
}