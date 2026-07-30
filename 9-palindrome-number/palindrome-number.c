bool isPalindrome(int x)
{
    int original=x;
    long long rev=0;

    if (x<0)
    {
        return false;
    }    
    else
    {
        while(x>0)
        {
            rev=rev*10+(x%10);
            x=x/10;
        }
        if (rev==original)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}