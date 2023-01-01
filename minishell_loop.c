/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell_loop.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:23:55 by shbi              #+#    #+#             */
/*   Updated: 2023/01/01 01:32:31 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	minishell_loop(t_env **menv)
{
	(void)menv;
	char	*line;
	t_list	*tokens;
    t_list	*cmds;
	while(1)
	{
		signal(SIGINT, &signal_handler);
		signal(SIGQUIT, SIG_IGN);
		tokens = NULL;
		line = NULL;
		cmds = NULL;
        v_glob.exit_status = 0;
		//0
		line = readline("minishell-$ ");
		// if (!ft_strncmp("exit", line, 5))
		// {
		// 	ft_printf(1, "exit\n");
		// 	b_exit(NULL);
		// }
		add_history(line);
		//1
		tokens = get_tokens(line, *menv);
        tokens = ft_lst_del_first(tokens);
		// tokens = expand_path(*menv,tokens);
        tokens = expand_exit_status(tokens);
        // print_list_tokens(tokens);
		cmds = get_cmds(tokens);
        // print_list(cmds);
		execution(menv, cmds, ft_lstsize(cmds));
		free(line);
		free(tokens);
		free(cmds);
	}
}
