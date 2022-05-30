/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 06:46:38 by gde-mora          #+#    #+#             */
/*   Updated: 2022/05/25 05:30:21 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		while ((i * i) < nb)
			i++;
		if ((nb - i * i) == 0)
			return (i);
	}
	return (0);
}
