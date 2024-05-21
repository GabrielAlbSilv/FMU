package com.mycompany.exercicios;
import  java.util.Arrays;
import  javax.swing.JOptionPane;
import  java.util.Scanner;

public class Exercicios {

    public static void main(String[] args) {
       double [] vet  = new double[12];
       double soma = 0;
       Scanner ent = new Scanner(System.in);
       for (int i=0; i<vet.length;i++){
           System.out.println("Digite a temperatura do mês " +(i+1)+": ");
           vet[i] = ent.nextDouble();
           soma = (vet[i]+soma);
       }
       System.out.println("Soma  das  temperaturas: "+soma);
       System.out.println("Média das temperaturas: "+(soma/vet.length));
    }
}
