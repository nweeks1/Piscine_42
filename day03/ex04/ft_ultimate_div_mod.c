/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 09:31:41 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/03 09:33:06 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int u1;
	int u2;

	u1 = *a;
	u2 = *b;
	if (u2 != 0)
	{
		*a = u1 / u2;
		*b = u1 % u2;
	}
}
