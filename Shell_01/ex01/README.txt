$> man groups

groups [OPTION]... [USERNAME]...

Esse comando exibe na tela os grupos em que o username inserido está incluso.
Você pode fazer um teste da seguinte forma:

$> groups staff // pode apenas digitar no terminal na pasta root
staff : staff god main bocal

$> groups aestevam
aestevam : aestevam

$> groups student
student : student staff main basecamp fortytwo

Ele vem dessa forma, separado apenas por um espaço.
A ideia do exercício é fazer com que eles estejam separados por uma vírgula,
sem quebra de linha e sem espaços (no exemplo dá para ver que o shell está logo 
após o último nome.

@basecamp:~$ FT_USER=student 
// aqui você vai estar atribuindo uma variável localmente

@basecamp:~$ export FT_USER 
// esse comando vai fazer com que essa variável seja criada globalmente

@basecamp:~$ env
FT_USER=student

Pronto, agora o seu ambiente global está com a variável $FT_USER atribuída como
"student". Você está pronto para fazer os testes com a command line de groups.

Primeiro, crie o arquivo print_groups.sh

$ touch print_groups.sh

Após isso, escreva a função abaixo dentro do arquivo:

$ echo "groups $FT_USER | sed 's/ /,/g' | tr -d '\n'" > print_groups.sh

// groups => lista os grupos que um usuário se encontra
// $FT_USER => variável global criada que será testada com os valores (student and staff)
// | => pipe é usado para unir comandos
// sed => sed e tr são quase iguais, mas o sed é um pouco mais 
avançado. Fazem a substituição de um caracter por outro. Por exemplo.
sed 's/<caracter a ser substituido>/<substituição>/g'
no tr seria assim:
tr '<caracter a ser substituido>' '<substituição>'
// tr -d '\n' => nesse caso, a flag -d indica que o tr vai deletar o caracter que está 
dentro das aspas simples. ('<\n>') 
// \n representa uma quebra de linha