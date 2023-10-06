### Makefile


### Lib
Para transformarmos as diversas funções + headerfile em uma biblioteca, precisamos primeiro compilar cada arquivo `.c` para um object file (`.o`). Para fazer isso usamos a flag `-c` na hora de compilar:
```bash
cc -Wall -Wextra -Werror -c *.c
```
Após isso teremos um **object file** para cada arquivo C.

Agora precisamos transformar esses object files em um unico arquivo `.a` (ainda não sei direito o que significa isso), e para isso usamos o comando `ar`:
```bash
ar -rc libft.a *.o
```
- O comando `ar` é o comando para criar, modificar e extrair de `archives` (acredito que o nome venha de `ar`chives). Um `archive` é um único arquivo que segura uma coleção de outros arquivos em uma estrutura que torna possível recuperar os arquivos originais individualmente (esses são chamados de membros do `archive`)
- a flag `-r` serve para inserir membros em um `archive`.
- a flag `-c` serve para criar um `archive`.

Então, resumindo, para criarmos nossa biblioteca seguimos os seguintes passos:
1. Compilar nossos arquivos `.c` para termos os arquivos `.o`:
```bash
cc -Wall -Wextra -Werror -c *.c
```

2. Com os arquivos `.o` criamos um `archive` utilizando o comando `ar` com as flags `-rc`:
```bash
ar -rc libft.a *.o
```

Agora temos nossa biblioteca `libft.a` (aparentemente esse arquivo é usado na hora do `linking` na compilação, também não entendi 100% ainda);
