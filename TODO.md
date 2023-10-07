# Documentation
- Atualizar descrições de cada função na tabela do readme (copiar as descrições que estão nas documentações de cada arquivo .c

# Code
### Part 1 - Libc Functions
- ~~isalpha~~
- ~~isdigit~~
- ~~isalnum~~
- ~~isascii~~
- ~~isprint~~
- ~~strlen~~
- ~~toupper~~
- ~~tolower~~
- ~~strchr~~
- ~~strrchr~~
- ~~atoi~~
- ~~strncmp~~
- ~~strdup~~
- ~~calloc~~ (se ft_bzero tiver certo, calloc ta certo tbm)
- strlcpy
- strlcat
- memmove
- strnstr

**Not quite sure**
- ~~memchr~~
- ~~memset~~ 
- ~~bzero~~ 
- ~~memcpy~~ 
- ~~memcmp~~


### Part 2 - Adittional Functions
- ~~ft_substr~~ (duvida a respeito de null-terminating byte)
- ~~ft_strjoin~~
- ~~ft_strtrim~~ (ta feio o codigo)
- ~~ft_itoa~~ (ta feio, talvez esteja faltando tratar algum erro)
- ft_strmapi
- ft_striteri

**Not quite sure**
- ~~ft_split~~ (Ta com memory leak eu acho, e ta feio pra caralho)
- ~~ft_putchar_fd~~ (duvida sobre fd?)
- ~~ft_putstr_fd~~ (duvida sobre fd?)
- ~~ft_putendl_fd~~ (duvida sobre fd?)
- ~~ft_putnbr_fd~~ (duvida sobre fd?)

### Duvidas
- a respeito do tipo `size_t` que existe em funcoes como `strlen`, `strncmp`, devemos implementar esse tipo no headerfile ou importar a lib que possua essa definição?
- Casting nas funções de Mem
- Usar uma função da propria libft dentro de outra função da libft: em `ft_strdup` usei `ft_strlen`
- Nas funções de escrever em um file descriptor especifico, é realmente só usar write com `fd` como variável?
- Memory leak na `ft_split` está só na main?
- Funções como argumento de funções????

### Bonus part
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap
