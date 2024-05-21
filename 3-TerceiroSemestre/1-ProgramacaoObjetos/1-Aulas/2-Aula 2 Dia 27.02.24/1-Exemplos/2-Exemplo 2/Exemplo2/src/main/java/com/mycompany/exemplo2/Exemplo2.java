package com.mycompany.exemplo2;

public class Exemplo2 {

    String nome, cpf;
    int idade;
    public Exemplo2(String nome,int idade, String cpf){
        super(); //construtor da super classe, super classe contém os dados abaixo
        this.nome=nome; //this chama o construtor
        this.idade=idade;
        this.cpf=cpf;
       
    }
    void dadosExemplo2(){
        System.out.println("Nome da pessoa: "+nome);
        System.out.println("Idade da pessoa: "+idade);
        System.out.println("CPF da pessoa: "+cpf);
    }
}
