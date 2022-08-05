/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaldino <mgaldino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:42:06 by mgaldino          #+#    #+#             */
/*   Updated: 2022/05/13 15:32:09 by mgaldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stddef.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif

char	*get_next_line(int fd);
int		ft_char_in_buffer(char c, char *buf);
char	*ft_accumulate_buffer(char *acc, char *buf, int bytes_read);
char	*ft_extract_remainder_bytes_from_line(char *acc);
int		ft_initialize_and_get_line(int fd, char *buf, char **acc);
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif
