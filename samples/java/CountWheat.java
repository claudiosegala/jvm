class CountWheat  {

  public static void main (String args[]) {
  
    int i, j, k;

    j = 1;
    k = 0;

    for (i=1; i <= 64; i++) {
      k += j;
      j *= 2;
      System.out.println(k);
      if (i%4 == 0) System.out.println();
    } 
    System.out.println("All done!");

  }

}