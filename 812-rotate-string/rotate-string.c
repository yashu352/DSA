bool rotateString(char* s, char* goal)
{
    int flag=0;
    char newString[205];
    if(strlen(s)!=strlen(goal))
    {
        return false;
    }
    strcpy(newString, s);
    strcat(newString, s);
    if(strstr(newString,goal)!=NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}