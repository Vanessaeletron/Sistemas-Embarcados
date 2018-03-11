1. Por que o Linux recebeu esse nome?
O finlandês Linus Torvalds queria criar um sistema operacional parecido com o Unix e que tivesse compatibilidade com seu computador. Passou a estudar o Minix, outro sistema vindo do Unix, mas não ficando satisfeito Linus começa a desenvolver seu próprio sistema. 
Acredito que seja uma junção do nome do criador e os sistemas da universidade que ele sem baseou.

2. O que são daemons?
A maioria das distribuições linux trás em sua instalação um conjunto de daemons de controle de sistema. Esses daemons controlam (inicia, reinicia, ...) um serviço provido pelo sistema.

3. O que é o shell?
É o o interpretador de comandos, atua como interface para o usuário se comunicar com o kernel. O Shell interpreta comandos textuais (consoles) ou gráficos (gerenciadores de janelas) e os convertem em processos para enviá-los para linguagem do Kernel.

4. Por que é importante evitar executar o terminal como super-usuário?
Porque existe uma série de permissões no sistema que só são dadas ao super-usuário, sendo somente ele o responsável por alterar comandos importantes que podem, se erroneamente configurados, prejudicar o funcionamento do sistema.

5. Qual botão do teclado completa o que o usuário escreve no terminal, de acordo com o contexto?
tab.

6. Quais botões do teclado apresentam instruções escritas anteriormente?
Seta pra cima e seta pra braixo.

7. Apresente os respectivos comandos no terminal para: 

(a) Obter mais informações sobre um comando. 
man 

(b) Apresentar uma lista com os arquivos dentro de uma pasta. 
ls 
ls -l -> Apresenta detalhes do conteúdo listado como: permissões, tamanho do arquivo, usuário dono e
outros.
ls –a: Apresenta todo o conteúdo de um diretório inclusive os ocultos.

(c) Apresentar o caminho completo da pasta. 
pwd: Mostra o diretório atual. Sempre que o usuário tiver dúvidas em qual diretório está trabalhando no momento pode utilizar este comando.

(d) Trocar de pasta. 
cd.

(e) Criar uma pasta. 
mkdir.

(f) Apagar arquivos definitivamente. 
rm dir

(g) Apagar pastas definitivamente.
rmdir

(h) Copiar arquivos. 
cp

(i) Copiar pastas. 
cpdir

(j) Mover arquivos. 
mv

(k) Mover pastas. 
mvdir

(l) Renomear pastas. 
mv

(m) Apresentar o conteúdo de um arquivo. 

(n) Apresentar o tipo de um arquivo. 

(o) Limpar a tela do terminal. 
clear

(p) Encontrar ocorrências de palavras-chave em um arquivo-texto.
cat

(q) Ordenar informações em um arquivo-texto. 

(r) Substituir ocorrências de palavras-chave em um arquivo-texto.

(s) Conferir se dois arquivos são iguais.

(t) Escrever algo na tela.
grep
