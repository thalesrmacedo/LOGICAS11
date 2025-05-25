public class Main { 
  public static int somar(int a, int b) { 
    return a + b; 
  } 
  public static void main(String[] args) { 
    int total = 0; 
    for (int i = 0; i < 4; i++) {  // Isso vai iterar i de 0 a 3 
      total = somar(total, i); 
    } 
    System.out.println(total); 
  } 
}
