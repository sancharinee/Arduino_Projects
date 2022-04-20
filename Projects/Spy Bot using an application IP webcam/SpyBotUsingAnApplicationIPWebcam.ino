#include <SoftwareSerial.h>  
SoftwareSerial SoftSerial(2,3); // SoftSerial( RX , TX );  
// 2 pin connect to TX of HC-05 Bluetooth  
// 3 pin connect to RX of HC-05 Bluetooth  
int Speed = 130;   
int mode=0;  

void setup()  
{  
   Serial.begin(9600);   // buart rate  
   SoftSerial.begin(9600);  
   pinMode(4,OUTPUT);  // LED Pin  
   pinMode(5,OUTPUT);  // LED Pin  
   pinMode(6,OUTPUT);  // LED Pin  
   pinMode(7,OUTPUT);  // LED Pin  
   pinMode(9,OUTPUT);  // MOTOR Pin  
   pinMode(10,OUTPUT);  // MOTOR Pin  
   pinMode(11,OUTPUT);  // MOTOR Pin  
   pinMode(12,OUTPUT);  // MOTOR Pin  
}  
 
void loop()  
{  
 if (SoftSerial.available()>0)  
   {  
    int data = SoftSerial.read();  
    Serial.println(data);  
      
    if(data== 1 )     // FORWARD DIRECTION  
    {  
     digitalWrite(4,HIGH); // LED ON  
     digitalWrite(5,LOW);  // LED OFF  
     digitalWrite(6,LOW);  // LED OFF  
     digitalWrite(7,LOW);  // LED OFF  
     digitalWrite(9,HIGH);  // MOTOR HIGH  
     digitalWrite(10,LOW);  // MOTOR LOW  
     digitalWrite(11,LOW);  // MOTOR LOW  
     digitalWrite(12,HIGH); // MOTOR HIGH  
    }  
    
    if(data== 3 )     // LEFT DIRECTION  
    {  
     digitalWrite(4,LOW);  // LED OFF  
     digitalWrite(5,HIGH); // LED ON  
     digitalWrite(6,LOW);  // LED OFF  
     digitalWrite(7,LOW);  // LED OFF  
     digitalWrite(9,HIGH);  // MOTOR HIGH  
     digitalWrite(10,LOW);  // MOTOR LOW  
     digitalWrite(11,HIGH); // MOTOR HIGH  
     digitalWrite(12,LOW);  // MOTOR LOW  
    } 
     
    if(data== 4 )     // RIGHT DIRECTION  
    {  
     digitalWrite(4,LOW);  // LED OFF  
     digitalWrite(5,LOW);  // LED OFF  
     digitalWrite(6,HIGH); // LED ON  
     digitalWrite(7,LOW);  // LED OFF  
     digitalWrite(9,LOW);  // MOTOR LOW  
     digitalWrite(10,HIGH); // MOTOR HIGH  
     digitalWrite(11,LOW); // MOTOR LOW  
     digitalWrite(12,HIGH); // MOTOR HIGH  
    }  
    
    if(data== 2 )     // BACKWARD DIRECTION  
    {  
     digitalWrite(4,LOW);  // LED OFF  
     digitalWrite(5,LOW);  // LED OFF  
     digitalWrite(6,LOW);  // LED OFF  
     digitalWrite(7,HIGH); // LED ON  
     digitalWrite(9,LOW);  // MOTOR HIGH  
     digitalWrite(10,HIGH); // MOTOR LOW  
     digitalWrite(11,HIGH); // MOTOR LOW  
     digitalWrite(12,LOW); // MOTOR HIGH  
    } 
     
    if(data== 5 )     // STOP DIRECTION  
    {  
     digitalWrite(4,LOW);  // LED OFF  
     digitalWrite(5,LOW);  // LED OFF  
     digitalWrite(6,LOW);  // LED OFF  
     digitalWrite(7,LOW);  // LED OFF  
     digitalWrite(9,LOW);  // MOTOR HIGH  
     digitalWrite(10,LOW); // MOTOR LOW  
     digitalWrite(11,LOW); // MOTOR LOW  
     digitalWrite(12,LOW); // MOTOR HIGH  
    }  
  }  
}  
