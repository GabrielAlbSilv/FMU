
package com.mycompany.atividaden1part3;
import javax.swing.JOptionPane;

public class AtividadeN1Part3 {

    public static void main(String[] args) {
      float base, alt, h, res;
      String sbase, salt, sh;
      JOptionPane.showMessageDialog(null,"Esse programa calcula a Área do Trapézio","Área do trapézio",JOptionPane.PLAIN_MESSAGE);
      sbase=JOptionPane.showInputDialog("Insira o valor da primeira base: "); 
      salt=JOptionPane.showInputDialog("Insira o valor da altura: ");
      sh=JOptionPane.showInputDialog("Insira o valor da segunda base; ");
      
      base=Float.parseFloat(sbase);
      alt=Float.parseFloat(salt);
      h=Float.parseFloat(sh);
      res = ((alt+base)*h)/2;
      JOptionPane.showMessageDialog(null,"Resultado: "+res,"Área do trapézio",JOptionPane.PLAIN_MESSAGE);
    }
}
