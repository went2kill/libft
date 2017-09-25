/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrobotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:59:39 by yrobotko          #+#    #+#             */
/*   Updated: 2016/12/08 21:07:47 by yrobotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char *save;

	save = dst;
	while (*src)
		*(dst++) = *(src++);
	*dst = '\0';
	return (save);
}