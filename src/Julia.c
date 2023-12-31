/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:46:16 by alcarden          #+#    #+#             */
/*   Updated: 2023/11/15 20:00:29 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MLX42/include/MLX42/MLX42.h"
#include <math.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

//  Z(0) = z
//  Z(n+1) = Z(n)^2 + C

// void	julia(double a, double b, t_data *s)
// {
// 	double	x;
// 	double	y;
// 	double	temp;
// 	int		i;

// 	x = a;
// 	y = b;
// 	i = 0;

// 	while (x * x + y * y < 4 && i < s->max_iter)
// 	{
// 		temp = x * x - y * y + s->c_real;
// 		y = 2 * x * y + s->c_imaginary;
// 		x = temp;
// 		i++;
// 	}
// 	if (i == s->max_iter)
// 		s->img->pixels[s->img->width * s->y + s->x] = 0;
// 	else
// 		s->img->pixels[s->img->width * s->y + s->x] = 255;
// }
