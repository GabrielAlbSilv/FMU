# -*- coding: utf-8 -*-
"""Exercicios -N1.ipynb

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/16fe3EZtl_XhHKxwwQW4guRfoJY-GwLrA
"""

#Exercicio 1
resp = []
cont = 0

resp1 = input("Telefonou para a vítima?: ")
resp.append(resp1)
if resp1 == "sim":
  cont = cont+1

resp1 = input("Esteve no local do crime?")
resp.append(resp1)
if resp1 == "sim":
  cont = cont+1


resp1 = input("Mora perto da vítima?: ")
resp.append(resp1)
if resp1 == "sim":
   cont = cont+1

resp1 = input("Devia para a vítima?")
resp.append(resp1)
if resp1 == "sim":
   cont = cont+1

resp1 = input("Já trabalhou com a vítima?")
resp.append(resp1)

if resp1 == "sim":
   cont = cont+1


if cont <= 1:
  print("Classificação: Inocente")

elif cont == 2:

  print("Classificação: Suspeito")

elif cont < 5:
  print("Classificação: Cúmplice")

elif cont == 5:
  print("Classificação: Assassino")


print(f"Total de respostas: {len(resp)}")
print(f"Respostas: {resp}")

#Exercicio 2
import numpy as np
#"np" - abreviação de np
vetor = np.array([])
vetimpar = np.array([])
vetpar = np.array([])
contimp = 0


for num in range(10):
  vetor = np.append(vetor,int(input(f"{num+1}-Digite um número:")))
  if vetor[num] % 2 == 0:
    vetpar = np.append(vetpar, vetor[num])
    print("par!")
  else:
    print("impar!")
    vetimpar = np.append(vetimpar, vetor[num])
    contimp= contimp+1

print(f"Vetor: {vetor}")
print(f"Maior valor: {max(vetor)}")
print(f"Menor valor: {min(vetor)}")
print(f"O dobro do maior número valor: {2*max(vetor)}")
print(f"O triplo do maior valor: {3*min(vetor)}")
print(f"Quantidade números impares:: {contimp}")
print(f"Soma dos valores impares: {sum(vetimpar)}")