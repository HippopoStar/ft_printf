/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_add_const_string_mai.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcabanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 19:58:50 by lcabanes          #+#    #+#             */
/*   Updated: 2018/07/26 02:40:20 by lcabanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	pf_jump_to_conv_spec(const char *format)
{
	size_t	i;

	i = 0;
	while (!(ft_strchr(PF_CONVERSION_SPECIFIERS, (int)*(format + i))
			|| *(format + i) == '\0'))
	{
		i++;
	}
	return (*(format + i));
}

int		pf_add_string_mai(const char *str, t_list *mai, const char *format)
{
	size_t	length;
	size_t	spac;
	size_t	prec;
	size_t	i;

	length = ft_strlen(str);
	pf_get_prec_and_spac(format, &prec, &spac);
	if (pf_is_flag_present(format, '.') && prec < length)
		length = prec;
	if (spac < length)
		spac = length;
	if (!(mai->content = (void *)malloc((spac + 1) * sizeof(char))))
		return (-1);
	i = 0;
	while (i < spac - length)
	{
		*((char *)((mai->content + i))) = ' ';
		i++;
	}
	ft_strncpy((char *)((mai->content) + spac - length), str, length);
	*((char *)((mai->content) + spac)) = '\0';
	return (0);
}

int		pf_add_const_string_mai(const char *str, t_list *mai)
{
	size_t	length;
	size_t	i;

	length = ft_strlen(str);
	if (!(mai->content = (void *)malloc((length + 1) * sizeof(char))))
		return (-1);
	i = 0;
	while (i < length)
	{
		*((char *)((mai->content) + i)) = *(str + i);
		i++;
	}
	*((char *)((mai->content) + length)) = '\0';
	return (0);
}
