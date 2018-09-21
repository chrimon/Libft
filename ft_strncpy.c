/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmondev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 14:15:15 by chmondev          #+#    #+#             */
/*   Updated: 2018/09/20 14:18:46 by chmondev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dst, char *src, unsigned int len)
{
	unsigned int i;

	i = 0;
	while(src[i++] && i < len)
		dst[i] = src[i];
	dst[i] = '\0';
	return(dst);
}
