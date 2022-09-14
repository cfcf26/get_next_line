/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekwak <ekwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:24:29 by ekwak             #+#    #+#             */
/*   Updated: 2022/09/13 22:17:46 by ekwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_list
{
	int				fd;
	char			str[BUFFER_SIZE + 1];
	ssize_t			size;
	int				offset;
	struct s_list	*next;
}					t_list;

char	*get_next_line(int fd);
t_list	*add_lst(t_list *lst, int fd);
t_list	*search_fd(t_list **head, int fd);
t_list	*search_nl(t_list *nod);
void	keep(t_list	**head, t_list	*nod);
int		ft_result_len(t_list *nod);
char	*make_result(t_list *nod);
void	make_result_2(t_list *nod, char **result, int j, int result_len);
#endif