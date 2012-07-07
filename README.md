Programas do livro: C: A Linguagem de Programação - Padrão Ansi     
===============================================================   
	Título: C: A linguagem de programação - Padrão Ansi   
	Autor: Kernighan, Brian W. / Ritchie, Dennis M.  
	Editora: Campus(Elsevier)   
	ISBN: 978-85-700-1586-0  
	Idioma: Português   

## Instruções para compilar e testar os programas
É apropriado compilar e testar os programas abaixo em ambiente ***Unix-like***(o que inclui Mac OS).

###Como compilar os programas:
	gcc -o programa programa.c

####Exemplo:
	gcc -o exercicio1-18 exercicio1-18.c

###Como testar os programas:
No capítulo 1, por diversas vezes se fala de modificar um arquivo texto. Contudo, não há qualquer rotina nos programas em C para ler diretamente o arquivo texto. Assim sendo, segue uma sugestão de uso destes programas num sistema unix-like. Ademais vou usar o arquivo **README.md**, ou seja este arquivo que você está lendo.

####Exemplo de como testar o programa compilado acima(exercicio1-18):

####Para mostrar na tela o resultado:
	cat README.md | ./exercicio1-18
####Para gravar o resultado em outro arquivo texto:
	cat README.md | ./exercicio1-18 > SAIDA.txt

#####Para exibir o arquivo gravado:
	cat SAIDA.txt

#####Para exibir o arquivo gravado com o recurso de paginação(aperte [q] para sair):
	less SAIDA.txt

***Obs: Navegue pelo arquivo usando as setas do teclado***.
     
![Capa do Livro](https://github.com/AntonioCosta/LivroC/raw/master/capa.jpg)
## Errata

###Página 7:
Dentro do último programa da página 7. Trocar o **_** pelo **)**. 

####Errado:
	printf("programa"_;

####Certo:
	printf("programa");

###Página 16:
Dentro do programa da página 15 que continua nesta página. Trocar o **-** pelo **=**. 

####Errado:
	c - getchar();

####Certo:
	c = getchar();

###Página 28:
Dentro do programa, tem uma função **copia** que possui um **while**, onde está faltando um **)**.

####Errado:
	while ((para [i] = de [i] != '\0')

####Certo:
	while ((para [i] = de [i] ) != '\0')
