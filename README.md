# DCA1202-ESCULTOR-3D-PARTE-2

**Componentes: Allyson Oliveira e Ariadne Silva**

### **1. Introdução**
<p align = "justify">
Esta segunda parte do projeto consiste na criação do escultor 3D em que realizamos o tratamento de classes abstratas para manipulação de figuras sólidas como cubo, esfera e elipsoide, fazendo operações de desenho em uma matriz de pontos. O Código do projeto é desenvolvido na linguagem C++ utilizando o método de programação orientada a objetos e para vizualização das figuras geradas, pela capacidade de ler arquivos com extensão  '.OFF' , foi utilizado o 'Mashlab' para windows e o 'Geomview' para sistema operacional linux.
 </p>
 <p align = "justify">
Será utilizado novas classes para criação outras classes concretas, que proverão funcionalidades semelhantes àquelas providas pela classe Sculptor do projeto anterior.O projeto agora lê um arquivo em formato ".txt" e desenha as figuras conforme as instruções presentes com os cógidos no arquivo. A interpretação é feita por uma classe abstrata que chamada de "figurageometrica", onde ela trata e gera o desenho conforme os códigos utilizados dentro do arquivo. 
 </p>


### **2. Estrutura**

<p align = "justify">
O código é separado em dois diretórios principais sources e headers, e um código principal chamado 'main.cpp'. Os diretórios são responsáveis por armazenar as classes C++ e os cabeçalhos respectivamente.
 </p>

 - **Headers**: Contém os cabeçalhos(.hpp)
 - **Sources**: Contém os códigos para as figuras geométricas e implementação da classe Sculptor(.cpp)
 - **Documentação**: Contém informações sobre o projeto.
 - **ArquivosOFF**: Contém os modelos com extensão .OFF que podem ser executas e visualizados pelos programas **MASHLAB** (indicado para sistemas linux) ou **GEOMVIEW** (indicado para sistemas windows)
 
 ### **3. Projeto: Yoshi - IMAGEM**
 
 <p align="center">
  <img src= "./Gif/MeshLab 2022.gif">
</p>
