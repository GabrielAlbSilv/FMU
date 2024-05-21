package com.mycompany.somar;
import java.util.Scanner; //Pacote para receber dados do teclado


public class Somar {

    public static void main(String[] args) {//Conteúdo desta função pode ser acessado fora da classe
        
     int a=0,b=0,c=0;
     Scanner s = new Scanner (System.in); //Instância do  java.util.Scanner para não escrever sempre
     System.out.println("Insira um valor para A: ");
     a=s.nextInt(); //Variável A vai receber um valor inteiro via teclado
     System.out.println("Insira um valor para B: ");
     b=s.nextInt();
     c=a+b;
     System.out.println("Resultado de "+a+"+"+b+" = "+c);
    }
}
