# -*- coding: utf-8 -*-
"""1-Exemplo TUPLAS- 10/04/2024.ipynb

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/1wKyIOBnMIKZMdpNkKaN4b_xstYL39uGf

Tupla

-Um tipo de estrutura de dados

-Imutável, depois de definidos os dados não podem ser modifiicados

-Heterogênia, aceita diferentes tipos de dados
"""

#Tupla
numeros=(1,2,3)
#Imprimindo a tupla
print(numeros)
#Verificando o tipo de estrutura
type(numeros)
#Acessando posição especifica da tupla
print(numeros[0])

estados = ('SP','São Paulo', 'RJ', 'Rio de Janeiro')
print(estados)
valores = (1,2,3,4,'Nome','Idade','Sexo')
print(valores)

#Concatenando uma tupla
estados = ('SP','São Paulo', 'RJ', 'Rio de Janeiro')
print(f"{estados[1]} - {estados[0]}")
print(f"{estados[3]} - {estados[2]}")

estados = ('SP','São Paulo', 'RJ', 'Rio de Janeiro')
#Acessando o último valor da tupla
print(estados[-1])

#Acessando posições 1 e 2
print(estados[1:3])

#Acessando todas as posições a partir da 1
print(estados[1:])

#Acessando todas as posições antes da posição 2
print(estados[:2])

#Atualizando dados de uma tupla
estados = ('SP','São Paulo', 'RJ', 'Rio de Janeiro')
print(estados)
print(type(estados))


#Tupla é imutável, então é necesserário converte-la
#Convertendo tupla para lista
atualiza = list(estados)

#Modificando  valores da lista

#Inserindo dados no começo da lista
atualiza.insert(0,"MG")
atualiza.insert(1,"Minas Gerais")

#Inserindo dados no final da lista
atualiza.append("ES")
atualiza.append("Espirito Santo")

#Alterando dados da lista
atualiza[2] = "RS"
atualiza[3] = "Rio Grande do Sul"

#Convertando lista para tupla
estados = tuple(atualiza)
print(estados)
print(type(estados))

#Utilizando métodos na tupla
estados = ('SP','São Paulo', 'RJ', 'Rio de Janeiro')

#Contando quantas vezes o valor "São Paulo" está inserido na tupla
print(estados.count('São Paulo'))

#Contando quantos valores estão inseridos na tupla
print(len(estados))

#Unindo duas tuplas
estados = ('SP','São Paulo', 'RJ', 'Rio de Janeiro')
cidades = ('Guarulhos', 'Angra dos Reis')
print(estados)
print(cidades)
#Unindo duas tuplas
juntas = estados+cidades
print(juntas)

#Inserindo dados em um tupla
numeros=()
for i in range(5):
  x = int(input(f"{i+1}-Digite um número: "))
  numeros = numeros+(x,)

print(numeros)