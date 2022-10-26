// Programa : Pisque um LED
// Autor : FILIPEFLOP
  
void amarelo(int tempo)
{
  for(int contador=0; contador<5; contador++)
  {
    //Acende o led
  digitalWrite(12, HIGH);
    
  //Aguarda intervalo de tempo em milissegundos
  pisca(1000);
    
  //Apaga o led
  digitalWrite(12, LOW);
  pisca(500);
  }
    
}
