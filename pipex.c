/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:56:19 by phudyka           #+#    #+#             */
/*   Updated: 2022/06/30 11:35:57 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "pipex.h"

int	main(int argc, char **argv, char **envp)
{
	char	*cmd1;
	char	*cmd2;
	char	*cmd_path1;
	char	*cmd_path2;
	char	**options;
	 
   // if (argv < 5)
   
   //     return(1);
   cmd_path1 = ft_path(argv[1], envp);
   cmd_path2 = ft_path(argv[2], envp);
   if (!cmd_path1 || !cmd_path2)
   {
	perror("Error!");
	return(1);
   }
   execve(cmd_path1, options, envp);
   free(cmd_path1);
   free(cmd_path2);
   return (0);
}
