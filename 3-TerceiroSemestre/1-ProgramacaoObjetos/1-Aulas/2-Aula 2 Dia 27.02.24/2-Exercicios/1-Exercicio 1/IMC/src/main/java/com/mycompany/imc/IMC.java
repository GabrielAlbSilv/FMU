package com.mycompany.imc;
import java.util.Scanner; 
public class IMC {

    public static void main(String[] args) {
        float peso, altura, res;
        Scanner s = new Scanner (System.in);
        System.out.println("Este programa calcula o IMC");
        System.out.println("Insira o seu peso: ");
        peso=s.nextFloat();
        System.out.println("Insira a sua altura: ");
        altura=s.nextFloat();
        res = peso/(altura*altura);
        if(res>=30){
            System.out.println("IMC:"+res);
            System.out.println("Você está acima do peso");
        }else{
            System.out.println("IMC:"+res);
            System.out.println("Você está no peso ideal");
        }
    }
}
