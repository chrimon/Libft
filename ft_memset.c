/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmondev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 13:58:48 by chmondev          #+#    #+#             */
/*   Updated: 2018/09/21 11:50:06 by chmondev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned char *h;
	unsigned int i;

	i = 0;
	h = (unsigned char*)b;
	while (i++ < len)
		h[i] = (unsigned char)c;
	return (b);
}
