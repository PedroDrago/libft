# Mandatory
### to-do
- ft_memmove: memmove supostamente deve copiar os bytes de `src` para um buffer temporário, e depois copiar do buffer temporário para `dest`. Como eu deveria criar esse buffer temporário sem saber previamente o tamanho de `src` e sem poder usar `malloc`?

### done but not sure
- ft_strmapi
- ft_striteri
- ft_strlcat
- ft_strlcpy
- ft_bzero
- ft_memchr
- ft_memcpy
- ft_memcmp
- ft_memset
- ft_memmove

### refactor
- ft_itoa

# Bonus
### to-do
- ft_lstmap

### done but not sure
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter

### Duvidas
- Como fazer o makefile não dar aqueles warnings de recipe duplicada?
- `lstmap`: quando dar `free`? quando usar `del()`? fora isso o que eu fiz deve ta errado.
- back vs front em uma lista. Gravar melhor e conferir se é isso mesmo: front é o head da lista, onde sempre temos acesso ao item. Back é o tail da lista, para acessar temos que fazer um traversal pela lista.

