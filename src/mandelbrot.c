/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:30:46 by alcarden          #+#    #+#             */
/*   Updated: 2023/11/15 20:01:45 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MLX42/include/MLX42/MLX42.h"
#include <math.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

//  Z(0) = 0
//  Z(n+1) = Z(n)^2 + C

// void	mandelbrot(double a, double b, t_data*s)
// {
// 	double	x;
// 	double	y;
// 	double	temp;
// 	int		i;

// 	x = 0;
// 	y = 0;
// 	i = 0;
// 	while (x * x + y * y < 4 && i < s->max_iter)
// 	{
// 		temp = x * x - y * y + a;
// 		y = 2 * x * y + b;
// 		x = temp;
// 		i++;
// 	}
// 	if (i == s->max_iter)
// 		s->img->pixels[s->img->width * s->y + s->x] = 0;
// 	else
// 		s->img->pixels[s->img->width * s->y + s->x] = 255;
// }
