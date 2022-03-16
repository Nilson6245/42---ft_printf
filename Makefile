NAME    =   libftprintf.a

SRC     =   ft_printf.c 	ft_putchar_c.c ft_putnbr_i.c \
			ft_putnbr_p.c  	ft_putnbr_u.c ft_putnbr_x.c ft_putnbr_xx.c ft_putsing.c \
			ft_print_s.c 	ft_putstr_s.c

LIB     =   libft.a

LIB_SRC =   ./Libft

OBJ     =   $(SRC:%.c=%.o)

HEADER  =   ft_printf.h

CC      =   gcc

CFLAGS  =   -Wall -Wextra -Werror

.PHONY  =   all clean fclean re

all     :   $(LIB) $(NAME)

$(NAME) :   $(OBJ) $(HEADER) $(LIB_SRC)/$(LIB)
	ar rcs $(NAME) $? $(LIB_SRC)/*.o

$(LIB)  :
	$(MAKE) all -C $(LIB_SRC)

%.o     :   %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean   :
	$(MAKE) clean -C $(LIB_SRC)
	$(RM) $(OBJ)

fclean  : clean
	$(MAKE) fclean -C $(LIB_SRC)
	$(RM) $(NAME)

re      : fclean all