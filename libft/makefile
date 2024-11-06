# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Library name and source files
LIBNAME = libft.a
SRC = ft_atoi.c ft_isprint.c ft_putendl_fd.c ft_strlcat.c ft_strtrim.c \
      ft_bzero.c ft_memchr.c ft_putnbr_fd.c ft_strlcpy.c ft_substr.c \
      ft_calloc.c ft_memcmp.c ft_putstr_fd.c ft_strlen.c ft_tolower.c \
      ft_isalnum.c ft_memcpy.c ft_strncmp.c ft_toupper.c \
      ft_isalpha.c ft_memmove.c ft_strchr.c ft_split.c\
      ft_isascii.c ft_memset.c ft_strdup.c ft_strnstr.c ft_striteri.c ft_strmapi.c\
      ft_isdigit.c ft_putchar_fd.c ft_strjoin.c ft_strrchr.c

# Object files
OBJ = $(SRC:.c=.o)

# Target to create the library
$(LIBNAME): $(OBJ)
	@ar rcs $(LIBNAME) $(OBJ)
	@echo "Library created successfully: $(LIBNAME)"

# Rule to compile source files into object files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled successfully: $<"

# Clean up object files
clean:
	@rm -f $(OBJ)
	@echo "Object files removed successfully."

# Clean up object files and the library
fclean: clean
	@rm -f $(LIBNAME)
	@echo "Library removed successfully."

# Rebuild the library
re: fclean $(LIBNAME)

# Default target
all: $(LIBNAME)

