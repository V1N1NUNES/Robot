# Relatório Detalhado sobre a Qualidade do Código: Robo.c


### 1. __Complexidade Ciclomática:__ 
A complexidade ciclomática mede o número de caminhos independetens que o código pode ter. Ajudando assim a identificar sua complexidade e possíveis pontos de falha. <br><br>

   #### __Anotações:__ 
   - Função main: Complexidade ciclomática = 1 (simples, sem outros caminhos possíveis.)

   - Função iniciarCaminho: Complexidade ciclomática = 2 (verificação de alocação de memória e loop de inicialização)

   - Função Final: Complexidade ciclomática = 5 (estrutura de loop e switch-case)

   - Função Distancia: Complexidade ciclomática = 2 (loop com estrutura condicional)
<br><br>

### 2. __Cobertura de Código :__ 
Cobertura de código nada mais é do que à extensão em que o código é testado por testes automatizados. Nesse código não foi encontrado nenhum tipo de teste automatizado. O que implica uma cobertura de código desconhecida e possivelmente baixa. É altamente recomendável que se implemente testes automatizados para melhor cobertura de código.<br><br>

   #### __implementações:__
<!-- Implementação dos testes aqui -->

<br><br>

### 3. __Dívida Técnica:__ 
Dívida técnica são os "compromissos" feitros durante o código que tem como objetivo obter ganhos rápidos no desenvolvimento do software/programa, que no futuro, posssam resultar em mais trabalho.<br><br>

   #### __Anotações:__
   - Uso Excessivo de Alocação Dinâmica: A alocação de memória em pode ser prejudicar o desempenho na hora da compilação.

   - Tratamento de Erros: A falta de tratamento de erros em algumas partes do código pode resultar em falhas difíceis de depurar.

   #### __Solução:__
   - Uso Excessivo de Alocação Dinâmica: A alocação de memória para cada ponto pode ser simplificada com um único bloco de memória.

   - Tratamento de Erros: Implementar mensagens para confirmações durante a compilação do código.
<br><br>

### 4. __Código Duplicado :__ 
Código duplicado refere-se quando á ocorrencia de uma parte de código ser implementada ou chamada diversas vezes em várias partes do software/programa. O que dificulta a manutenção e/ou o funcionamento do código. <br><br>

   #### __Anotações:__
   - Código de Inicialização de Memória: A lógica de alocação de memória se repete algumas vezes durante o código.

   - Cálculo da Distância : O cálculo da distância percorrida esta sendo feita dentro da função (int Distancia(Caminho *C)) podendo dificultar a leitura e compreenção. 

   #### __Solução:__ 
   - Código de Inicialização: Pode ser encapsulada em uma função auxiliar.
   
   - Cálculo da Distância: O incremento da variável distancia no Final e Distancia pode ser encapsulado. 
<br><br>

### 5. __Más Práticas:__  
Más práticas de codificação podem levar a código frágil e difícil de manter.<br><br>

   #### __Anotações:__
   - Falta de Liberação de Memória: A memória alocada dinamicamente nunca é liberada, o que pode levar a vazamentos de memória.

   - Declarações Globais: O uso de variáveis globais. Por exemplo: (int ciclos).

   #### __Solução:__
   - Falta de Liberação de Memória: Implementar a liberação de memória em verificações e quando os valores ja foram capturados. 

   - Declarações Globais:
<br><br>

### 6. __Vulnerabilidades de Segurança :__ 
Vulnerabilidades de segurança são falhas que podem ser exploradas para comprometer a integridade do sistema.<br><br>

   #### __Anotações:__
   - Falta de Validação de Entrada: Não há validação robusta da entrada do usuário, o que pode levar a valores inesperados e falhas.

   - Erro de Alocação de Memória: Falta de tratamento de erro adequado após a alocação de memória.

   - Recomendações: Adicionar Testes Unitários: Implementar testes para todas as funções para garantir alta cobertura de código.

   - Refatoração de Código: Reduzir a duplicação e melhorar o gerenciamento de memória.

   - Validação de Entrada: Adicionar validação de entrada para garantir valores válidos.

   - Liberação de Memória: Certificar-se de que toda memória alocada dinamicamente seja liberada adequadamente.

   #### __Solução:__
   <!--escrever soluções-->
<br><br>


# __Diferenças entre o Código Original e o Código Refatorado__
<br><br>
Aqui estão as principais melhorias em termos de desempenho, segurança, e boas práticas de programação:

### __1. Desempenho__
   - #### __Alocação de Memória:__

     - Original: Alocava memória para cada ponto individualmente, o que pode ser ineficiente e causar fragmentação de memória.

     - Refatorado: Aloca todos os pontos em um único bloco de memória, o que é mais eficiente e reduz a fragmentação.

   - #### __Inicialização:__

     - Original: Inicializava os pontos em um loop separado após a alocação.

     - Refatorado: Inicializa os pontos diretamente durante a alocação, economizando tempo de execução.

###  __2. Segurança__
   - #### __Validação de Entrada:__

     - Original: Não fazia verificação robusta da entrada do usuário.

     - Refatorado: Adiciona verificação para garantir que a entrada do usuário seja válida, evitando comportamentos inesperados.

   - #### __Liberação de Memória:__

     - Original: Não liberava a memória alocada dinamicamente, o que poderia levar a vazamentos de memória.

     - Refatorado: Adiciona a função liberarCaminho para garantir que a memória seja liberada corretamente após o uso.

   - #### __Tratamento de Erros:__

     - Original: Não tratava adequadamente os erros de alocação de memória.

     - Refatorado: Inclui verificações de erro após cada alocação de memória e libera recursos adequadamente em caso de falha.

### __3. Boas Práticas de Programação__
   - #### __Variáveis Globais:__

     - Original: Utilizava variáveis globais (ex: ciclos).

     - Refatorado: Move variáveis globais para o escopo local da função main, reduzindo o acoplamento e melhorando a modularidade.

   - #### __Reutilização de Código:__

     - Original: Código de inicialização de memória e cálculo de distância era duplicado.

     - Refatorado: Simplifica a alocação de memória em um único bloco e inicializa os