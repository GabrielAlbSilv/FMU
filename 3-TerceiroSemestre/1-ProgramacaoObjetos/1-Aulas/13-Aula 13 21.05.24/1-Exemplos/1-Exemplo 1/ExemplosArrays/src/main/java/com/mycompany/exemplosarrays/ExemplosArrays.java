package com.mycompany.exemplosarrays;
import  java.util.Arrays;
import  javax.swing.JOptionPane;
import  java.util.Scanner;

public class ExemplosArrays {

    public static void main(String[] args) {
        /*
        int[] arrayUm = {12,3,5,68,9,6,73,44,456,65,321};
        int[] arrayDois = {43,42,4,8,55,21,2,45};
        
        if(arrayDois.length>8){
            System.out.println("Tamanho do Array Dois - Maior que 8!");
        }else{
            System.out.println("Tamanho do Array Dois - Menor que 8!");
        }
        System.out.println("Tamanho do Array Um: "+arrayUm.length);
        */
        
       /*int vet [] = new int [10];
       String retorno;
       for(int i = 0; i<vet.length;i++){
           retorno = JOptionPane.showInputDialog((i+1)+"-Digite um valor: ");
           vet[i] = Integer.parseInt(retorno);
        }
       Arrays.sort(vet);
       System.out.println("Vetor ordenado: ");
       for(int i=0;i<vet.length;i++){
           System.out.print(vet[i]+" ,");
       }
       */
       
       Scanner ent = new Scanner(System.in);
       int[] vet = new int[5];
       int soma = 0;
       for (int i=0; i<vet.length;i++){
           System.out.println((i+1)+"-Digite uma idade: ");
           vet[i] = ent.nextInt();
           soma = (vet[i]+soma);
       }
       System.out.println("Soma das  idades: "+soma);
       System.out.println("Média das idades: "+(soma/vet.length));
    }
}
