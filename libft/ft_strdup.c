/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmondev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 14:23:28 by chmondev          #+#    #+#             */
/*   Updated: 2018/09/20 14:30:18 by chmondev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *s1)
{
	int		len;
	int		i;
	char	*s2;

	len = 0;
	i = 0;
	while(s1[len++])
	s2 = (char*)malloc(sizeof(*s2) * (len + 1));
	while(i++ < len)
		s2[i] = s1[i];
	return(s2);
}

