/*
 If c is an uppercase letter, tolower() returns its lowercase equivalent, if  a
       lowercase  representation exists in the current locale.  Otherwise, it returns
       c.
*/

int ft_tolower(int c)
{
    if(c >= 65 && c <= 90)
    {
        c = c + 32;
    }
    else
    {
        c = c;
    }
    return c;
}