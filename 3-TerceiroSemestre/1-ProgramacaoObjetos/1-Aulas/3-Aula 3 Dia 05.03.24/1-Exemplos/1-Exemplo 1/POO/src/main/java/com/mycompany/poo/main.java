
package com.mycompany.poo;

public class main {
    public static void main(String[] args){
    POO poo=new POO("Gabriel", 36, "xxxxxx");
    POO poo2=new POO("Luke", 20, "yyyyyyyy");
    System.out.println("Nome da pessoa: "+poo.nome+"\nIdade: "+poo.idade+"\nCPF: "+poo.cpf);
    System.out.println("Nome da pessoa: "+poo2.nome+"\nIdade: "+poo2.idade+"\nCPF: "+poo2.cpf);
    poo.dadosPoo();
    }
}
