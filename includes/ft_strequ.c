/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:02:35 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/22 17:17:13 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		while (*s1 == *s2)
		{
			if (*s1 == 0)
			{
				return (1);
			}
			s1++;
			s2++;
		}
		return (0);
	}
	return (0);
}