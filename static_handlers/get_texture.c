/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_texture.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccantale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:38:53 by ccantale          #+#    #+#             */
/*   Updated: 2023/03/21 21:23:50 by ccantale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_texture.h"

t_image	*texture_handler(char **new_set, int option);
/* end of declarations */

t_image	*get_texture(t_side side)
{
	return (texture_handler(NULL, side));
}
