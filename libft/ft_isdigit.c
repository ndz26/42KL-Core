 /*isdigit()
              checks for a digit (0 through 9).
*/

int ft_isdigit(int digit)
{
    //if (d >= -2147483648 && d <= 2147483647)
    while(digit >= 0 && digit <= 9)
    {
        return 1;
    }
    return 0;
}