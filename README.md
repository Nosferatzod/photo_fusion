# Documentação do Site - Estúdio Fotográfico

Este é o documento de documentação para o site de um estúdio fotográfico. O site apresenta informações sobre os serviços oferecidos, a localização do estúdio, um carousel de imagens e a navegação por diversas páginas.

## Índice
- [Visão Geral](#visão-geral)
- [Estrutura de Páginas](#estrutura-de-páginas)
  - [Cabeçalho](#cabeçalho)
  - [Carrossel de Imagens](#carrossel-de-imagens)
  - [Conteúdo Principal](#conteúdo-principal)
  - [Rodapé](#rodapé)
- [Funcionalidades Adicionais](#funcionalidades-adicionais)
  - [Menu Responsivo](#menu-responsivo)
  - [Carrossel de Imagens](#carrossel-de-imagens-1)

## Visão Geral

O site tem como objetivo apresentar os serviços de um estúdio fotográfico. Ele é projetado de forma moderna, com navegação simples e visual atrativo, utilizando TailwindCSS e FontAwesome para ícones.

## Estrutura de Páginas

O site é dividido nas seguintes seções:

### Cabeçalho

O cabeçalho contém a navegação principal, com links para as páginas "Home", "Quem Somos", "Produtos", "Serviços", "Orçamentos" e "Contato". O menu é responsivo, sendo exibido como um menu hamburguer em dispositivos móveis. 

#### HTML:
```html
<header class="bg-gray-800 text-white">
    <!-- Logo e Título -->
    <div class="text-lg font-bold">PhotoFusion</div>

    <!-- Menu de navegação -->
    <nav class="hidden md:flex items-center space-x-4">
        <a href="./index.html" class="font-medium text-teal-500 nav-link">Home</a>
        <a href="./about.html" class="text-gray-500 nav-link">Quem Somos</a>
        <a href="./product.html" class="text-gray-500 nav-link">Produtos</a>
        <a href="./services.html" class="text-gray-500 nav-link">Serviços</a>
        <a href="./budget.html" class="text-gray-500 nav-link">Orçamentos</a>
        <a href="./contact.html" class="text-gray-500 nav-link">Contato</a>
    </nav>

    <!-- Menu hamburguer -->
    <button id="menu-btn" class="md:hidden text-white focus:outline-none">
        <i class="fas fa-bars text-2xl"></i>
    </button>
</header>

