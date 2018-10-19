/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmondev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:56:44 by chmondev          #+#    #+#             */
/*   Updated: 2018/09/25 18:22:15 by chmondev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(char *s, int c);
int   ft_strcmp(const char *s1, const char *s2);
char  *ft_strcpy(char *dst, const char *src);
size_t   ft_strlen(const char *str);
char	*ft_strncpy(char *dst, const char *src, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isdigit(int c);
char	*ft_strdup(const char *s1);

# endif
