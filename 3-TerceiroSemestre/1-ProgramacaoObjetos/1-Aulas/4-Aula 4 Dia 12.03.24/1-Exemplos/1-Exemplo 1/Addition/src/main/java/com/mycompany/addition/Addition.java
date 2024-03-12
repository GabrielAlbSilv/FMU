
package com.mycompany.addition;
//Biblioteca para trabalhar com telas
import javax.swing.JOptionPane;

public class Addition {

    public static void main(String[] args) {
        //Valores digitados via teclado
       String firstNumber, secondNumber; 
       //Variáveis para calculo
       int number1, number2;
       
       //Criando tela para receber valores via teclado
       firstNumber=JOptionPane.showInputDialog("Insira o primeiro número:"); 
       secondNumber=JOptionPane.showInputDialog("Insira o segundo número:");
       
       //Convertento string para int
       number1=Integer.parseInt(firstNumber);
       number2=Integer.parseInt(secondNumber);
    }
}
