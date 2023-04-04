/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_handler.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccantale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 02:30:17 by ccantale          #+#    #+#             */
/*   Updated: 2023/02/26 16:41:44 by ccantale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAMERA_HANDLER_H
# define CAMERA_HANDLER_H

# include "../global_headers/player.h"

typedef enum e_camera
{
	cam_UPDATE,
	cam_GET_X,
	cam_GET_Y
}	t_camera;

#endif
