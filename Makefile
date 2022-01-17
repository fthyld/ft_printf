NAME	=	libftprintf.a

LIBFT_PATH	=	./libft
LIBFT	=	$(LIBFT_PATH)/libft.a

CC	=	@gcc
CFLAGS	=	-Wall -Wextra -Werror

RM	=	@rm -f

AR	=	@ar
ARFLAGS	=	rcs

SOURCES		=	./ft_printf.c 			\
				./ft_print_char.c 		\
				./ft_print_string.c 	\
				./ft_print_pointer.c 	\
				./ft_print_decimal.c 	\
				./ft_print_unsgnd_int.c \
				./ft_print_lower_hexa.c \
				./ft_print_upper_hexa.c

OBJECTS	=	$(SOURCES:.c=.o)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(LIBFT_PATH)

all:	$(LIBFT) $(NAME)

$(LIBFT):
		@make -C $(LIBFT_PATH)

$(NAME):	$(OBJECTS)
			@cp $(LIBFT) $(NAME)
			$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)
			@echo "[LIBFTPRINTF.A CREATED!]"

clean:
		@make clean -C $(LIBFT_PATH)
		$(RM) $(OBJECTS)

fclean:	clean
		@make fclean -C $(LIBFT_PATH)
		$(RM) $(NAME)
		@echo "[LIBFTPRINTF.A DELETED!]"

re:	fclean all

.PHONY:	all clean fclean re libft
