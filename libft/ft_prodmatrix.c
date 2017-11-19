/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prodmatrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatthys <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 18:15:43 by amatthys          #+#    #+#             */
/*   Updated: 2017/11/19 18:38:24 by amatthys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

matrix	ft_prodmatrix(matrix **A, matrix **B)
{
	matrix	prod;

	if (A->nbrline != B->nbrcol || !(A->nbrline))
		return (NULL);
	if (!(prod = (matrix)malloc(sizeof(matrix))))
		return (NULL);

