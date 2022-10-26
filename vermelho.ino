// Programa : Pisque um LED
// Autor : FILIPEFLOP
  
void vermelho(int tempo)
{
  //Acende o led
  digitalWrite(11, HIGH);
    
  //Aguarda intervalo de tempo em milissegundos
  delay(tempo);
  //criar laco for com 2
  for(int conta=0;conta<4;conta++)
  {
    buzina(250);    
  }
  //Apaga o led
  digitalWrite(11, LOW);
 
}
