

package com.mycompany.imc;
import javax.swing.JOptionPane;

public class IMC {

    public static void main(String[] args) {
        float peso, altura, res;
        String speso, saltura;
        JOptionPane.showMessageDialog(null,"Esse programa calcula o IMC","IMC",JOptionPane.PLAIN_MESSAGE);
        speso=JOptionPane.showInputDialog("Insira o seu peso: "); 
        saltura=JOptionPane.showInputDialog("Insira a sua altura: "); 
        
        peso=Float.parseFloat(speso);
        altura=Float.parseFloat(saltura);
         
        res = peso/(altura*altura);
        if(res>=30){
            JOptionPane.showMessageDialog(null,"IMC: "+res+"\nVocê está acima do peso","IMC",JOptionPane.PLAIN_MESSAGE);
           
        }else{
            JOptionPane.showMessageDialog(null,"IMC: "+res+"\nVocê está no peso ideal","IMC",JOptionPane.PLAIN_MESSAGE);
        }
    }
}
