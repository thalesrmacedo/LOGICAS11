#include <iostream> 

using namespace std; 
int somar(int a, int b) { 
  return a + b; 
} 

int main() { 
int total = 0; 
for (int i = 0; i < 4; i++) {  // Isso vai iterar i de 0 a 3 
total = somar(total, i); 
} 
cout << total;  // Isso imprimirá a soma de 0 + 1 + 2 + 3 
return 0; 
}
