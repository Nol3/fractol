/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:24:35 by alcarden          #+#    #+#             */
/*   Updated: 2023/11/15 19:59:52 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MLX42/include/MLX42/MLX42.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <memory.h>

// int	main(void)
// {
//     void	*mlx;
//     void	*win;
//     int		x;
//     int		y;

//     x = 250;
//     y = 250;
//     mlx = mlx_init();
//     win = mlx_new_window(mlx, 500, 500, "ejemplo_pixel");
//     mlx_pixel_put(mlx, win, x, y, 0xFFFFFF);
//     mlx_loop(mlx);
//     return (0);
// }