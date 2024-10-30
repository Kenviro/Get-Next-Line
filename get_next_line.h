/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:26:31 by ktintim-          #+#    #+#             */
/*   Updated: 2024/10/30 10:26:33 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1234
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

void	*ft_calloc(unsigned int nbr, unsigned int size);
void	ft_bzero(void *s, unsigned int n);

int		ft_strlen(const char *str);

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
char	*joinfree(char *str, char *ret);
char	*firstline(int fd, char *ret);
char	*get_ligne(char *ret);
char	*free_ligne(char *ret);
char	*get_next_line(int fd);

#endif
