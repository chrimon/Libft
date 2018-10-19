/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmondev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 14:23:28 by chmondev          #+#    #+#             */
/*   Updated: 2018/09/25 18:13:24 by chmondev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*s2;

	len = 0;
	i = -1;
	while(s1[len])
		len++;
	s2 = (char*)malloc(len + 1);
	while(s2)
	{
		while(++i < len)
			s2[i] = s1[i];
		s2[i] = '\0';
	}	
	return(s2);
}
