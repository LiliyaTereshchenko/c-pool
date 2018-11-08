/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 19:57:36 by kkihn             #+#    #+#             */
/*   Updated: 2018/10/19 20:08:58 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int k;

	k = 0;
	while (*str != '\0')
	{
		k++;
		str++;
	}
	return (k);
}
