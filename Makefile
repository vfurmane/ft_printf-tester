# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/13 10:32:22 by vfurmane          #+#    #+#              #
#    Updated: 2021/01/18 12:52:22 by vfurmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= $(addprefix test/srcs/, )
OBJS		= $(SRCS:.c=.o)
EXEC		= $(patsubst test/srcs/%, outs/%, $(OBJS:.o=.out))
INCL		= test/includes
CC			= clang
CFLAGS		= -Wall -Wextra -Werror
FSAN		=
CP			= cp -f
RM			= rm -f
MKDIR		= mkdir -p

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@ -I $(INCL)

outs/%.out:	test/srcs/%.o
			$(MKDIR) outs
			$(CC) $(CFLAGS) $(FSAN) $< -o $@

all:		$(EXEC)

clean:
			$(RM) $(OBJS)

eclean:		clean
			$(RM) -r outs

fclean:		eclean clean
			$(RM) -r logs

re:			fclean all

.PHONY:		all bonus clean fclean re
.SECONDARY:	$(OBJS)
