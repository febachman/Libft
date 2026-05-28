/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbachman <fbachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 14:39:30 by fbachman          #+#    #+#             */
/*   Updated: 2026/05/25 11:20:53 by fbachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

//versão alternativa
// void    ft_putstr_fd_com_loop(char *s, int fd)
// {
//     if (!s)
//         return ;
//     while (*s != '\0')
//     {
//         ft_putchar_fd(*s, fd);
//         s++;
//     }
// }