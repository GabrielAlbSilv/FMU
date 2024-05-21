
package com.mycompany.livros;


public class Livros {

   String titulo, autor,ano;
    int paginas;
    public Livros (String titulo, String autor, String ano, int paginas){
        super();
        this.titulo = titulo;
        this.autor = autor;
        this.ano = ano;
        this.paginas = paginas;
     }
    void dadosLivros(){
        System.out.println("\nTítulo do livro: "+titulo);
        System.out.println("Autor: "+autor);
        System.out.println("Ano de publicação: "+ano);
        System.out.println("Quantidade de páginas: "+paginas);
            
    }  
}
