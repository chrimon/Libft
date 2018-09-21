/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmondev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:56:44 by chmondev          #+#    #+#             */
/*   Updated: 2018/09/20 20:14:41 by chmondev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

void	*ft_memset(void *b, int c, unsigned int len);
char	ft_strchr(char *s, int c);
int		ft_strcmp(char *s1, char *s2);
char	ft_strcpy(char *src);
int		ft_strlen(char *str);
char	*ft_strncpy(char *s1, char *s2, int len);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isdigit(int c);
char	*ft_strdup(char *s1);

# endif
