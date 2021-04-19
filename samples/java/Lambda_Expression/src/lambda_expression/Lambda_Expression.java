/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lambda_expression;

/**
 *
 * @author Linco
 */
public class Lambda_Expression {
    final static String salutation = "Hello ";
    
    public static void main(String args[]) {
       GreetingService greetService1 = message -> 
       System.out.println(salutation + message);
       greetService1.sayMessage("World!");
    }
    
    interface GreetingService {
       void sayMessage(String message);
    }
}
