/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:58:57 by dasal             #+#    #+#             */
/*   Updated: 2024/04/23 18:19:40 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	len;
	int	i;

	i = 0;
	len = (max - min);
	result = (int *)malloc(sizeof(int) * len);
	if (!result || (min >= max))
		return (NULL);
	while (i < len)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
