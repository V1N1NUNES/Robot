# Robozinho

### Sumário
1. Descrição  
2. Funcionalidades 
3. Estrutura do projeto
4. Instruções de uso
5. Contribuição
6. Licença

<br>

## Descrição
- __Repositório:__  Repositório com finalidade de realizar a atividade proposta de estrutura de dados e reaproveitado para reafatoração de código para o trabalho de Qualidade de Software. 

- __Projeto:__ O projeto consiste no desenvolvimento de uma lista encadeada por uma série de pontos ligados um ao outro. Esse código cria um caminho para o "Robô" percorrer de acordo com a estrada de dados fornecida.   

- __Organização de Pastas:__
  - SRC: Código original
  - Pasta "refactored": Projeto refatorado 

## Funcionalidades
- Entrada do número de ciclos para o percurso.
- Cálculo da posição final do robô e da distância total percorrida.
- Verificação de entradas e liberação de memória para evitar vazamentos.
- Alocação otimizada de memória para pontos do percurso.
## Estrutura do projeto

- __roborefactory.c__
  - Função main: Função que contem a entrada de dados por parte do usuário e chamada das funções que constroem o caminho e seus pontos.

  - Função IniciarCaminho: Aloca memória dinâmicamente para o caminho de tamanho determinado de acordo com a estrada de dados.

  - Função Final: Retorna a posição exata do ultimo ponto (ciclo) em que o robô percorreu de acordo com o gráfico.

  - Função Distancia: Retorna a distância percorrida pelo robô durante os pontos percorridos.

- __roborefactory.h:__
  - TAD Caminho: Contem os dados necessários para criação do caminho para o robô (Ponto *Origem ; int N ; int Distancia)
  - TAD Ponto: Contem os dados necessários para criação de um ponto pelo caminho criado (int Y ; int X)
  - Caminho *iniciarCaminho(int N): Protótipo da função que cria o caminho que o rebô deve percorrer implementada em **roborefactory.c**
  - Ponto Final(Caminho *C): Protótipos de função para retornar o ponto final implementada em **roborefactory.c**
  - int Distancia(Caminho *C): Protótipo da função que retorna a distância percorrida pelo robô implementada em **roborefactory.c**
  - void liberarCaminho(Caminho *C): Liberação de memória para o TAD Caminho implementada em **roborefactory.c**

## instruções de uso
  - __Pré-requisitos:__
    - Compilador C: Certifique-se de ter um compilador C instalado na sua máquina. Em sistemas Linux e macOS, o gcc já costuma estar disponível. Em Windows, recomenda-se instalar o MinGW.
    - Git (opcional, mas recomendado): Para baixar o repositório diretamente do GitHub.

  - __Rodar o software em sua maquina:__
    - Passo 1: Clonar o Repositório
Baixe o projeto para sua máquina usando Git. Use o comando git clone <URL-do-repositório> no terminal, substituindo <URL-do-repositório> pela URL do repositório GitHub onde o código está hospedado.
Caso você não tenha Git instalado, também pode baixar o projeto manualmente como um arquivo ZIP e extraí-lo.

    - Passo 2: Navegar até o Diretório do Projeto
Entre no diretório onde o projeto foi baixado, utilizando o comando cd nome-do-diretorio-do-projeto.
Substitua nome-do-diretorio-do-projeto pelo nome da pasta onde o projeto está.

    - Passo 3: Compilar o Código
Compile o código usando gcc. Execute o comando gcc -o robo main.c -o robo para criar um executável chamado robo (ou robo.exe no Windows) a partir do arquivo main.c.

    - Passo 4: Executar o Programa
Execute o programa com o comando ./robo. No Windows, pode ser necessário usar robo.exe.

    - Passo 5: Interagir com o Programa
Após a execução, o programa solicitará o número de ciclos. Digite o número desejado e pressione Enter. O programa calculará e mostrará a posição final do robô e a distância total percorrida.

  - __Exemplo de Entrada:__

    - Quando o programa solicitar a quantidade de ciclos, insira um número (ex.: 5) e pressione Enter.

  - __Saída Esperada:__

    - O programa exibirá a posição final do robô em coordenadas X e Y, e a distância total percorrida.
Passo 6: Encerramento
Ao final da execução, o programa liberará a memória usada e encerrará normalmente.
Se desejar repetir com outro valor de ciclos, basta reexecutar o programa a partir do passo 4.
    
## Contribuição
 - [V1N1NUNES](https://github.com/V1N1NUNES)
