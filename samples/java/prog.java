class prog{ 
  public static void main(String[] args){ 
    subclasse subc= new subclasse(); 
    superclasse superc=subc; 
    subc.escreve(); 
    superc.escreve();  
    System.out.println(subc.str);
    System.out.println(superc.str);      
  } 
} 