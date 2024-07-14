/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnasfa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:34:48 by hmnasfa           #+#    #+#             */
/*   Updated: 2024/07/09 14:22:55 by hmnasfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ints;
	int	i;
	int	len;

	len = max - min;
	i = 0;
	if (len <= 0)
		return (NULL);
	ints = (int *)malloc(sizeof(int) * len);
	if (!ints)
		return (NULL);
	while (min < max)
	{
		ints[i] = min;
		min++;
		i++;
	}
	return (ints);
}
