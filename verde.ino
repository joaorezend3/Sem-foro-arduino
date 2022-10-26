// Programa : Pisque um LED
// Autor : FILIPEFLOP
  
void verde(int tempo)
{
  //Acende o led
  digitalWrite(13, HIGH);
    
  //Aguarda intervalo de tempo em milissegundos
  delay(tempo);
    
  //Apaga o led
  digitalWrite(13, LOW);
    
}
