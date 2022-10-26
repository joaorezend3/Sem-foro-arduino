// Programa : Pisque um LED
// Autor : FILIPEFLOP
  
void buzina(int tempo)
{
  //Acende o led
  digitalWrite(10, HIGH);
    
  //Aguarda intervalo de tempo em milissegundos
  delay(tempo);
    
  //Apaga o led
  digitalWrite(10, LOW);
  delay(tempo);
    
}
