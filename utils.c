#include "minitalk.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int ft_atoi(const char *str)
{
    int res=0;
    int sign=1;

    while(*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if(*str == '-')
        sign = -1;
    if(*str == '-' || *str == '+')
        str++;
    while(*str >= '0' && *str <= '9')
    {
        res = res * 10 + *str - '0';
        str++;
    }
    return(res * sign);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
	}
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!fd || !s)
		return ;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
}
