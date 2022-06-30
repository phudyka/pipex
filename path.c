/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:44:04 by phudyka           #+#    #+#             */
/*   Updated: 2022/06/30 11:36:05 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "pipex.h"

char	*ft_path(char *cmd, char **envp)
{
	int	i;
	char	*path_ok;
	char	**path_tab;

	i = 0;
	if (!cmd || !*envp)
		return(NULL);
	while (ft_strnstr(envp[i], "PATH", 4) == 0)
		i++;
	path_tab = ft_split(envp[i], ':');
	return (path_ok); 
}
