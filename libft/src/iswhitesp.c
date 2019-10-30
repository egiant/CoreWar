/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iswhitesp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhazelnu <vhazelnu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 22:08:42 by vhazelnu          #+#    #+#             */
/*   Updated: 2019/08/03 18:21:17 by vhazelnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		iswhitesp(char c)
{
	return (c == ' ' || c == '\n' || c == '\r' ||
				c == '\t' || c == '\v' || c == '\f');
}
