# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/13 10:32:22 by vfurmane          #+#    #+#              #
#    Updated: 2021/01/19 11:59:41 by vfurmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EX_SRCS		= $(addprefix test/srcs/expected/, int_test.c)
US_SRCS		= $(addprefix test/srcs/user/, int_test.c)
EX_OBJS		= $(EX_SRCS:.c=.o)
US_OBJS		= $(US_SRCS:.c=.o)
EX_EXEC		= $(patsubst test/srcs/expected/%, outs/expected/%, $(EX_OBJS:.o=.out))
US_EXEC		= $(patsubst test/srcs/user/%, outs/user/%, $(US_OBJS:.o=.out))
INCL		= test/includes
FT_PRINTF	= ../ft_printf
CC			= clang
CFLAGS		= -Wall -Wextra -Werror -Wno-format
FSAN		=
CP			= cp -f
RM			= rm -f
MKDIR		= mkdir -p

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@ -I $(INCL)

outs/%.out:	test/srcs/%.o
			$(MKDIR) outs/expected outs/user
			$(CC) $(CFLAGS) $(FSAN) $< -o $@ -L$(FT_PRINTF) -lftprintf

all:		$(EX_EXEC) $(US_EXEC)

ft_printf:
			make -C $(FT_PRINTF)

flags:
			$(CC) $(CFLAGS) -c $(FT_PRINTF)/*.c -I $(INCL) -I $(FT_PRINTF)/libft
			make fclean

clean:
			$(RM) $(EX_OBJS)
			$(RM) $(US_OBJS)

eclean:		clean
			$(RM) -r outs

fclean:		eclean clean
			$(RM) -r logs

re:			fclean all

.PHONY:		all bonus clean fclean re
.SECONDARY:	$(OBJS)
