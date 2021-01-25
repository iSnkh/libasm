#ifndef LIBASM_H

# include <string.h>
# include <stdio.h>

size_t			ft_strlen(const char *str);
char            *ft_strcpy(char *dest, const char *src);
int				ft_strcmp(const char *s1, const char *s2);
__ssize_t		ft_write(int fd, const void *buf, size_t count);

#endif
