
// Software By - AKASH SHAHADE

char val;         // variable to receive data from the serial port
int ledpin = 2;  // LED connected to pin 2 (on-board LED)

void setup()
{
  pinMode(ledpin = 2, OUTPUT); 
  pinMode(ledpin = 3, OUTPUT);
  pinMode(ledpin = 4, OUTPUT); 
  pinMode(ledpin = 5, OUTPUT);
 
    Serial.begin(9600);      

}

void loop()

{


  
  if( Serial.available() )       // if data is available to read
  {
    ;
  }
  val = Serial.read();         // read it and store it in 'val'

  if( val == 'a' )               // if 'a' was received led 2 is switched off
  {
    digitalWrite(ledpin = 2, HIGH);    // turn Off pin 2
  }
 
  if( val == 'A' )               // if 'A' was received led 2 on
  {
    digitalWrite(ledpin = 2, LOW);  // turn ON pin 2
  }

  if( val == 'b' )               // if 'b' was received led 3 is switched off
  {
    digitalWrite(ledpin = 3, HIGH);    // turn Off pin 3
  }
 
  if( val == 'B' )               // if 'B' was received led 3 on
  {
    digitalWrite(ledpin = 3, LOW);  // turn ON pin 3
  } //else (ledpin = 3, LOW)        //set led pin 3 to low state

if( val == 'c' )               // if 'a' was received led 2 is switched off
  {
    digitalWrite(ledpin = 4, HIGH);    // turn Off pin 2
  }
 
  if( val == 'C' )               // if 'A' was received led 2 on
  {
    digitalWrite(ledpin = 4, LOW);  // turn ON pin 2
  }
if( val == 'd' )               // if 'a' was received led 2 is switched off
  {
    digitalWrite(ledpin = 5, HIGH);    // turn Off pin 2
  }
 
  if( val == 'D' )               // if 'A' was received led 2 on
  {
    digitalWrite(ledpin = 5, LOW);  // turn ON pin 2
  }
          
}
