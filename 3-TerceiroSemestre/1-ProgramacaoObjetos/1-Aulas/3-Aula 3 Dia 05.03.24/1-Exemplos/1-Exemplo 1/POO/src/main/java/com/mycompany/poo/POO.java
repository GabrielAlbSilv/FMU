

package com.mycompany.poo;

public class POO {

    String nome, cpf;
    int idade;
    public POO(String nome, int idade, String cpf){
        super(); //construtor da super classe, super classe contém os dados abaixo
        this.nome=nome; //instanciando variáel nome
        this.idade=idade;
        this.cpf=cpf;
    }
    void dadosPoo(){
        System.out.println("Nome da pessoa: "+nome);
        System.out.println("Idade da pessoa: "+idade);
        System.out.println("CPF da pessoa: "+cpf);
    }
}
