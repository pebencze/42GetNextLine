/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:45:18 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/09 16:09:01 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_readline(int fd, char *nextline);
char	*ft_trimline(char *nextline);
ssize_t	ft_strlen(char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_line(char *nextline);
char	*ft_substr(char *s, unsigned int start, ssize_t len);
void	*ft_free(char *s1, char *s2);

#endif
