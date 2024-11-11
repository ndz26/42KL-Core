/*isalnum()
              checks for an alphanumeric character;  it  is  equivalent  to
              (isalpha(c) || isdigit(c)).
*/

int ft_isalnum(int c)
{
    if((c >= 48 && c <= 57) || (c >= 65  && c <= 90) || (c >= 97 || c <= 122))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}