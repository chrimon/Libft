/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmondev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 14:15:15 by chmondev          #+#    #+#             */
/*   Updated: 2018/09/25 14:58:03 by chmondev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while(src[i++] != '\0' && i < len)
		dst[i] = src[i];
	while (i++ < len)
		dst[i] = '\0';
	dst[i] = '\0';
	return(dst);
}
