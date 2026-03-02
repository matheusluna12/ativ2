# Implementação do Padrão Proxy em C

## Descrição do Projeto

Este projeto apresenta uma implementação simples do padrão de projeto estrutural Proxy utilizando a linguagem C. O objetivo é demonstrar, de forma prática, como o padrão pode ser aplicado para controlar o acesso a um determinado recurso antes que ele seja executado.

O exemplo desenvolvido simula um sistema protegido por senha, onde apenas usuários com a senha correta podem acessar a funcionalidade principal.

---

## Sobre o Padrão Proxy

O Proxy é utilizado quando se deseja controlar o acesso a um objeto real. Esse controle pode ocorrer por motivos de segurança, desempenho ou organização do código.

A solução se dá pela criação de uma função intermediária que verifica determinada condição antes de permitir o acesso ao recurso principal. Dessa forma, o cliente não acessa diretamente o sistema real, mas sim o proxy, que decide se o acesso será autorizado ou negado.

Esse método tem como vantagem aumentar a segurança, permitir validações antes da execução e organizar melhor a estrutura do sistema.

---

## Estrutura do Código

No código desenvolvido:

- A função `sistemaReal()` representa o objeto real.
- A função `proxy()` controla o acesso ao sistema.
- A função `main()` representa o cliente que tenta acessar o sistema.

O proxy verifica se a senha informada é igual a 1234. Caso seja correta, o sistema é acessado. Caso contrário, o acesso é negado.

---

## Como Compilar e Executar

No terminal, utilize os seguintes comandos:

gcc proxy.c -o proxy
./proxy


---

## Saída Esperada

Ao executar o programa, a primeira tentativa será autorizada e a segunda será negada, demonstrando o funcionamento do padrão Proxy.

---

## Considerações Finais

A implementação foi desenvolvida de forma simples e objetiva, utilizando apenas conceitos básicos da linguagem C, com o objetivo de facilitar a compreensão do padrão estrutural Proxy.

Mesmo sendo um exemplo simplificado, ele demonstra claramente o princípio fundamental do padrão: a existência de um intermediário que controla o acesso ao objeto principal.
