/*
DESCRIPTION
       These functions convert lowercase letters to uppercase, and vice versa.

       If  c is a lowercase letter, toupper() returns its uppercase equivalent, if an
       uppercase representation exists in the current locale.  Otherwise, it  returns
       c.  */

int toupper(int c)
{
    if(c >= 97 && c <= 122)
    {
        c = c - 32;
    }
    else
    {
        c = c;
    }
    return c;
}