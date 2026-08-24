typedef struct {
    int l, r, idx;
} Query;

int BLOCK;

int cmp(const void *a, const void *b)
{
    Query *x = (Query *)a;
    Query *y = (Query *)b;

    int bx = x->l / BLOCK;
    int by = y->l / BLOCK;

    if (bx != by)
        return bx - by;

    if (bx & 1)
        return y->r - x->r;

    return x->r - y->r;
}

bool* validSubarrays(int* nums, int numsSize, int k,
                     int** queries, int queriesSize,
                     int* queriesColSize,
                     int* returnSize)
{
    *returnSize = queriesSize;

    Query *q = malloc(sizeof(Query) * queriesSize);

    for (int i = 0; i < queriesSize; i++)
    {
        q[i].l = queries[i][0];
        q[i].r = queries[i][1];
        q[i].idx = i;
    }

    BLOCK = 316;

    qsort(q, queriesSize, sizeof(Query), cmp);

    int *freq = calloc(100001, sizeof(int));

    int distinct = 0;
    int odd = 0;

    int L = 0;
    int R = -1;

    bool *ans = malloc(sizeof(bool) * queriesSize);

    for (int i = 0; i < queriesSize; i++)
    {
        int l = q[i].l;
        int r = q[i].r;

        while (R < r)
        {
            R++;
            int x = nums[R];

            freq[x]++;

            if (freq[x] == 1)
                distinct++;

            if (freq[x] & 1)
                odd++;
            else
                odd--;
        }

        while (R > r)
        {
            int x = nums[R];

            if (freq[x] & 1)
                odd--;
            else
                odd++;

            if (freq[x] == 1)
                distinct--;

            freq[x]--;

            R--;
        }

        while (L < l)
        {
            int x = nums[L];

            if (freq[x] & 1)
                odd--;
            else
                odd++;

            if (freq[x] == 1)
                distinct--;

            freq[x]--;

            L++;
        }

        while (L > l)
        {
            L--;

            int x = nums[L];

            freq[x]++;

            if (freq[x] == 1)
                distinct++;

            if (freq[x] & 1)
                odd++;
            else
                odd--;
        }

        ans[q[i].idx] = (distinct == k && odd == 0);
    }

    free(freq);
    free(q);

    return ans;
}