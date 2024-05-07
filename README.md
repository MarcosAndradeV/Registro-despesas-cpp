# Registro-despesas-cpp

`$ cmake -S . -B build/`

## Descrição:
  - Elabore um programa para ajudar os usuários a registrar suas despesas diárias. Os usuários devem ser capazes de adicionar novas despesas, remover despesas antigas, visualizar um resumo das despesas e atualizar informações sobre as despesas.

## Funcionalidades:
  - Use arquivos para armazenar os registros de despesas.
  - Implemente cada operação (adicionar, remover, atualizar, exibir) em um arquivo de função separado

### Etapa 1: Preparação e Configuração
1. Configuração do Git: Instalação do Git em todas as máquinas da equipe e configuração
inicial de nome de usuário e endereço de e-mail.
2. Criação do Repositório Remoto: Um membro da equipe cria um repositório remoto em
uma plataforma de hospedagem (GitHub, GitLab, etc.) e convida os outros membros da
equipe como colaboradores.
3. Clonagem do Repositório: Cada membro da equipe clona o repositório remoto para suas
máquinas locais usando o comando `git clone`.
4. Revisão do README: Todos os membros da equipe revisam e atualizam o README do
projeto com instruções de configuração, uso e colaboração.

### Etapa 2: Desenvolvimento das Funcionalidades
1. Adicionar Despesas:
- Um membro da equipe pode ser responsável por implementar a função
adicionarDespesa() que permite ao usuário adicionar novas despesas.
2. Remover Despesas:
- Outro membro pode trabalhar na função removerDespesa() para permitir que o
usuário remova despesas existentes do registro.
3. Visualizar Resumo das Despesas:
- Um terceiro membro pode implementar a função visualizarResumo() para
exibir um resumo das despesas registradas.
4. Atualizar Informações sobre as Despesas:
- O quarto membro pode ficar responsável pela função atualizarDespesa() que
permite ao usuário atualizar informações sobre as despesas existentes.
5. Manipulação de Arquivos:
- Um membro da equipe pode ser responsável por implementar funções para lidar
com a manipulação de arquivos, como abrir, fechar, ler e gravar dados em
arquivos.

### Etapa 3: Integração e Testes
- Integração de Funcionalidades: Após concluir a implementação das funcionalidades, os
membros da equipe mesclam seus ramos de funcionalidade de volta para o ramo
principal e resolvem quaisquer conflitos que possam surgir.
- Testes e Depuração: A equipe realiza testes rigorosos para garantir que todas as
funcionalidades funcionem conforme o esperado e que não haja erros ou bugs no
código.

### Etapa 4: Finalização e Entrega

1. **Detalhes das Funcionalidades:**
- Ao discutir as funcionalidades do projeto, certifique-se de fornecer detalhes adicionais sobre
o que cada função deve fazer e quais são os requisitos específicos de entrada e saída.
- Por exemplo, para a função `adicionarDespesa()`, você pode esclarecer quais informações o
usuário deve fornecer ao adicionar uma nova despesa, como descrição, valor e data.
2. **Interfaces de Funções:**
- Discuta como as diferentes funções se comunicarão entre si e como os dados serão
passados de uma função para outra.
- Por exemplo, a função `removerDespesa()` pode precisar receber informações sobre a
despesa a ser removida, que podem ser passadas como parâmetros.
3. **Formato de Dados e Manipulação de Arquivos:**
- Certifique-se de discutir o formato dos dados a serem armazenados nos arquivos e como
esses dados serão lidos e gravados.
- Por exemplo, você pode decidir armazenar cada despesa como uma linha em um arquivo de
texto, com campos separados por vírgulas.
4. **Testes e Depuração:**
- Além de discutir os testes a serem realizados, você também pode considerar a
implementação de casos de teste específicos para cada funcionalidade.
- Certifique-se de discutir como lidar com possíveis erros e exceções que podem surgir
durante a execução do programa.
5. **Prazos e Metas:**
- Defina prazos para cada etapa do projeto e estabeleça metas específicas a serem
alcançadas até esses prazos.
- Certifique-se de que todos os membros da equipe tenham uma compreensão clara das
expectativas e do cronograma do projeto.
