/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:15:58 by iremoztimur       #+#    #+#             */
/*   Updated: 2024/02/18 13:21:08 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/miniRT.h"

void	plane_print(t_plane *p)
{
	printf("t_plane:\n");
	printf("  Point: %.4lf, %.4lf, %.4lf\n", p->center.x, p->center.y,
		p->center.z);
	printf("  Normal: %.4lf, %.4lf, %.4lf\n", p->normal.x, p->normal.y,
		p->normal.z);
	printf("  t_color: (%d, %d, %d)\n", p->color.r, p->color.g, p->color.b);
}

void	cylinder_print(t_cylinder *c)
{
	printf("t_cylinder:\n");
	printf("  Center: (%.4lf, %.4lf, %.4lf)\n", c->center.x, c->center.y,
		c->center.z);
	printf("  Normal: (%.4lf, %.4lf, %.4lf)\n", c->normal.x, c->normal.y,
		c->normal.z);
	printf("  Radius: %.4lf\n", c->radius);
	printf("  Height: %.4lf\n", c->height);
	printf("  t_color: (%d, %d, %d)\n", c->color.r, c->color.g, c->color.b);
}

void	ft_vector_print(t_vector *vector)
{
	uint32_t	i;

	if (!vector)
		return ;
	i = -1;
	while (++i < vector->size)
		(*vector->print)(vector->array[i]);
}

void	scene_print(t_scene *scene)
{
	printf("\n\t================ DEBUG ================\n\n");
	ambient_print(&scene->ambient);
	camera_print(&scene->camera);
	ft_vector_print(scene->lights);
	ft_vector_print(scene->shapes);
	printf("Right t_vec3:\n  ");
	vector_print(scene->right);
	printf("Up t_vec3:\n  ");
	vector_print(scene->up);
	printf("Viewport:\n");
	printf("  Height: %lf\n", scene->hview);
	printf("  Width: %lf\n", scene->wview);
	printf("\n\t=======================================\n\n");
}

void	shape_print(t_shape *shape)
{
	if (shape->type == PLANE)
		plane_print(&shape->data.pl);
	else if (shape->type == SPHERE)
		sphere_print(&shape->data.sp);
	else if (shape->type == CYLINDER)
		cylinder_print(&shape->data.cy);
	printf("  ID: %d\n", shape->id);
	printf("  Specular Coefficient (Ks): %lf\n", shape->sp_ratio);
	printf("  Shininess (n): %lf\n", shape->shininess);
}
