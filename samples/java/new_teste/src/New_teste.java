/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 *
 * @author Linco
 */
public class New_teste {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int y = 3, x=4;
        int a = x+y;
        
        CLASSE3 c = new CLASSE3(x,y);
        a = a + c.MET1();
        System.out.println("Resultado");
        System.out.println(a);
    }
    
}
