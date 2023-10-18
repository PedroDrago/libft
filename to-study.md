### To Study Better

- strlcat
```c
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	count2;

	count = 0;
	count2 = 0;
	while (dst[count] && count < size) //percorre ate o final de dst ou ate que atinjamos o limite, e contamos os caracteres;
		count++;
	while (src[count2] && (count + count2 + 1) < size)
	{
		dst[count + count2] = src[count2]; //concatena enquanto src durar ou enquanto estiver dentro do limite (size)
		count2++;
	}
	if (count < size)
		dst[count + count2] = '\0'; //adiciona null-byte se houver espaço
	return (count + ft_strlen(src)); //retorna o tamanho da string que deveria ter sido criada, mesmo que não tenha sido completamente concatenada.
}

```
- strlcpy
```c
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*end;
	const char	*start;

	end = dst + size; //ponteiro para o local final do vetor, pois size indexes para frente de dst seria o ultimo local possivel para se copiar
	start = src;
	while (*start != '\0' && dst < end) //enquanto start nao terminar e destino não tiver chegado no maximo.
	{
		*dst = *start;  //copia;
		dst++;
		start++;
	}
	if (dst < end) //se ainda houver espaço disponivel, adiciona o nulo ao final
		*dst = 0;
	else if (size > 0) //se nao tiver espaço disponivel, e size for maior que zero significa que existe espaço para adicionar algo, e então adiciona o nulo ao final mesmo assim, possivelmente sobrescrevendo um caractere
		dst[-1] = 0;
	while (*start != '\0') /percorre o restante da string com o ponteiro
		start++;
	return (start - src); //a subtração vai retornar a quantidade de caracteres copiados, ja que src permanece fixo, e start andou até onde era possivel.
}
```
- memmove
```c
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		count;
	char	*srcpy;
	char	*destcpy;

	srcpy = (char *) src;
	destcpy = (char *) dest;
	if (!dest || !src)
		return (NULL);
	if (dest > src) //verifica se a area de DEST esa ANTES da area de SRC, isso é importante para lidar com overlap
	{
		count = n - 1; //caso haja overlap (area de destino esta antes da area de origem), move os bytes de tras para frente para evitar problemas de overlap.
		while (count >= 0)
		{
			destcpy[count] = srcpy[count];
			count--;
		}
	}
	else
	{
		count = -1; //caso contrario copia normal
		while (++count < (int) n)
			destcpy[count] = srcpy[count];
	}
	return (dest);
}
```
- split: 
- strtrim: o ft_strchr pode ser usado pra verificar se o caractere atual faz parte de um set, ja que a função procura a primeira ocorrencia de um caracter numa string, e caso nao encontre retorna nulo, isso é usado nos loopings do inicio e do fim pra rodar até encontrar um caracter que não faça parte do set
- substr: Ao inves de criar uma substring de start ate end, que era o que eu imaginava (len sendo o end), na verdade len representa a quantidade de caracteres que a substring vai ter, então a substring começará em start e terminará len caracteres depois de start;
- lstmap: reescrever o codigo;
