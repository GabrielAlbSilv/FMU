

package com.mycompany.poo;

public class POO {

    String nome;
    int idade;
    String cpf;
    public POO(String nome, int idade, String cpf){
        super();
        this.nome=nome;
        this.idade=idade;
        this.cpf=cpf;
    }
    void dadosPoo(){
        System.out.println("Nome da pessoa: "+nome);
        System.out.println("Idade da pessoa: "+idade);
        
    }
}
