/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 18:48:52 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/07 16:21:23 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*p1;
	char	*p2;

	while (*str)
	{
		if (*str == *to_find)
		{
			p1 = str;
			p2 = to_find;
			while (*p1 && *p2 && *p1 == *p2)
			{
				++p1;
				++p2;
			}
			if (!*p2)
				return (str);
		}
		++str;
	}
	return (0);
}