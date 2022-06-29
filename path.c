/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:44:04 by phudyka           #+#    #+#             */
/*   Updated: 2022/06/28 17:44:35 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "pipex.h"

char    *ft_path(char *path, char **envp)
{
    char    *path_ok;
    
    if (!path || !*envp)
        return(NULL);
    path_ok = access();
    return (path_ok); 
}
