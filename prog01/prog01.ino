/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
          // donar nom al pin 6 de l’Arduino
const int led0 = 7;          // donar nom al pin 7 de l’Arduino
const int led1 = 8;          // donar nom al pin 8 de l’Arduino
const int led2 = 9;          // donar nom al pin 9 de l’Arduino
const int led3 = 10;         // donar nom al pin 10 de l’Arduino
const int led4 = 11;         // donar nom al pin 11 de l’Arduino
const int led5 = 12;         // donar nom al pin 12 de l’Arduino
     // donar nom al pin 2 de l’Arduino
unsigned long temp = 1000;
//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  
}
//********** Loop *****************************************************************
void loop()
{
 
  digitalWrite(led0, HIGH);    // 1
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
 
  
  delay(temp);                  // es queden leds 500ms encesos
  
 digitalWrite(led0, HIGH);    // 2
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
 
  
delay(temp);            

   digitalWrite(led0, HIGH);    //3
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
 
  
delay(temp);  

  digitalWrite(led0, HIGH);    // 4
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
 
  
delay(temp);          

  digitalWrite(led0, HIGH);    //5
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
 
 delay(temp);            


 digitalWrite(led0, HIGH);    // 6
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
 
  
  delay(temp);            

 digitalWrite(led0, HIGH);    // 7
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
 
  
delay(temp); 

        

  digitalWrite(led0, LOW);    // 8
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
 
  
  delay(temp);     


  digitalWrite(led0, LOW);    // 9
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
 
  
delay(temp);     


 digitalWrite(led0, LOW);    // 10
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
 
  
  delay(temp);     

  digitalWrite(led0, LOW);    // 11
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
 
  
  delay(temp);      


 digitalWrite(led0, LOW);    // 12
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
 
  
 delay(temp);      

  
digitalWrite(led0, HIGH);    // 13
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
 
  
 delay(temp);      


 



  
          }
 
//********** Funcions *************************************************************
