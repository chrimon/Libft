/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmondev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 13:58:48 by chmondev          #+#    #+#             */
/*   Updated: 2018/09/21 19:51:42 by chmondev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *h;
	size_t i;

	i = 0;
	h = (unsigned char*)b;
	if(len == 0)
		return(b);
	while (i++ < len)
		h[i] = (char)c;
	return (b);
}
