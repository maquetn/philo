/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_only_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaquet <nmaquet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:00:57 by nmaquet           #+#    #+#             */
/*   Updated: 2023/09/15 11:00:35 by nmaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

int	ft_sign_check(int i, const char *str)
{
	if (str[0] == '-')
		i++;
	return (i);
}

int	ft_only_digit(const char *str)
{
	int	i;
	int	dot_count;

	i = 0;
	dot_count = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		i = ft_sign_check(i, str);
		if (str[i] == '.')
		{
			if (dot_count > 0)
			{
				return (0);
			}
			dot_count++;
		}
		if (!ft_isdigit(str[i]) && (str[i] != '.'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
int main() {
    const char *testString1 = "12345";
    const char *testString2 = "-0.1a23";
    
    if (ft_only_digit(testString1)) {
        printf("'%s' contains only digits.\n", testString1);
    } else {
        printf("'%s' does not contain only digits.\n", testString1);
    }
    
    if (ft_only_digit(testString2)) {
        printf("'%s' contains only digits.\n", testString2);
    } else {
        printf("'%s' does not contain only digits.\n", testString2);
    }
    
    return 0;
}*/