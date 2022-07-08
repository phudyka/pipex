/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:56:19 by phudyka           #+#    #+#             */
/*   Updated: 2022/07/08 11:53:14 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "pipex.h"

char	*ft_path(char *cmd, char **envp)
{
	int		i;
	char	*path_ok;
	char	**path_tab;

	i = 0;
	if (!cmd || !*envp)
		return(NULL);
	while (ft_strnstr(envp[i++], "PATH=/", 6))
	{
		path_tab = ft_split(envp[i], ':');
		while(path_tab[i++])
			if (access(path_tab, F_OK && X_OK))
				path_ok = ft_substr(path_tab, i, strlen(path_tab - i));
	}
	return (path_ok);
}

int	main(int argc, char **argv)
{
	char	*cmd1;
	char	*cmd2;
	char	*cmd_path1;
	char	*cmd_path2;
	char	**options;
	 
    if (argv != 5)
	{
		perror("Error!: Bad arguments, try: './pipex file1 cmd1 cmd2 file2'");
		return(1);
	}
	cmd_path1 = ft_path(argv[1], envp);
	cmd_path2 = ft_path(argv[2], envp);
	if (!cmd_path1 || !cmd_path2)
		ft_error();
	execve(cmd_path1, options, envp);
	free(cmd_path1);
	free(cmd_path2);
	return (0);
}