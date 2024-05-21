
package com.mycompany.eutenhosorte;

import javax.swing.JOptionPane;

public class Sorte1 extends javax.swing.JFrame {
    int v1, v2, v3;
    public Sorte1() {
        initComponents();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        lblV1 = new javax.swing.JLabel();
        lblV2 = new javax.swing.JLabel();
        lblV3 = new javax.swing.JLabel();
        btnSortear = new javax.swing.JButton();
        btnSair = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabel1.setFont(new java.awt.Font("Segoe UI", 0, 36)); // NOI18N
        jLabel1.setText("Eu tenho muita sorte");

        lblV1.setFont(new java.awt.Font("Segoe UI", 0, 48)); // NOI18N
        lblV1.setForeground(new java.awt.Color(204, 0, 51));
        lblV1.setText("0");

        lblV2.setFont(new java.awt.Font("Segoe UI", 0, 48)); // NOI18N
        lblV2.setForeground(new java.awt.Color(204, 0, 51));
        lblV2.setText("0");

        lblV3.setFont(new java.awt.Font("Segoe UI", 0, 48)); // NOI18N
        lblV3.setForeground(new java.awt.Color(204, 0, 51));
        lblV3.setText("0");

        btnSortear.setText("Sortear");
        btnSortear.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnSortearActionPerformed(evt);
            }
        });

        btnSair.setText("Sair");

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGap(29, 29, 29)
                        .addComponent(jLabel1))
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGap(68, 68, 68)
                        .addComponent(lblV1)
                        .addGap(92, 92, 92)
                        .addComponent(lblV2)
                        .addGap(84, 84, 84)
                        .addComponent(lblV3))
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGap(81, 81, 81)
                        .addComponent(btnSortear)
                        .addGap(83, 83, 83)
                        .addComponent(btnSair)))
                .addContainerGap(41, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(29, 29, 29)
                .addComponent(jLabel1)
                .addGap(42, 42, 42)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(lblV1)
                    .addComponent(lblV2)
                    .addComponent(lblV3))
                .addGap(49, 49, 49)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(btnSortear)
                    .addComponent(btnSair))
                .addContainerGap(45, Short.MAX_VALUE))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void btnSortearActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnSortearActionPerformed
       
        v1=(int)(Math.random()*3);
        v2=(int)(Math.random()*3);
        v3=(int)(Math.random()*3);

        lblV1.setText(String.valueOf(v1));
        lblV2.setText(String.valueOf(v2));
        lblV3.setText(String.valueOf(v3));
        
        if((v1==v2) && (v1==v3)){
            JOptionPane.showMessageDialog(null,"Ganhou!");
        }else{
            JOptionPane.showMessageDialog(null,"Perdeu!");
        }
    }//GEN-LAST:event_btnSortearActionPerformed

  
    public static void main(String args[]) {
    
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Sorte1().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btnSair;
    private javax.swing.JButton btnSortear;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JLabel lblV1;
    private javax.swing.JLabel lblV2;
    private javax.swing.JLabel lblV3;
    // End of variables declaration//GEN-END:variables
}
