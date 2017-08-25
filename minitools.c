/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 16:23:09 by sdube             #+#    #+#             */
/*   Updated: 2016/06/05 16:23:12 by sdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

char	*ft_filter(char *stack)
{
	int	j;

	j = ft_strlen(stack);
	while (*stack)
	{
		if (*stack == ',')
			*stack = 0;
		stack++;
	}
	return (stack);
}

t_env	*new_environment(int argc, char **argv)
{
	t_env	*env;

	env = (t_env *)malloc(sizeof(t_env));
	init_env(env, argc, argv);
	return (env);
}

float	ft_fabs(float a)
{
	if (a < 0)
		return (-a);
	return (a);
}

float	ft_fmax(float a, float b)
{
	if (a > b)
		return (a);
	return (b);
}

int		get_map_cols(char **seq)
{
	int	cols;

	cols = 0;
	while (seq[cols])
		cols++;
	return (cols);
}
