/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbachman <fbachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 14:39:03 by fbachman          #+#    #+#             */
/*   Updated: 2026/05/26 11:42:54 by fbachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		write (fd, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
}

// Function Name ft_putnbr_fd
// Prototype void ft_putnbr_fd(int n, int fd);
// Files to Submit -
// Parameters n: The integer to output.
// fd: The file descriptor on which to write.
// Return Value None
// External Function write
// Description Outputs the integer ’n’ to the specified file
// descriptor.