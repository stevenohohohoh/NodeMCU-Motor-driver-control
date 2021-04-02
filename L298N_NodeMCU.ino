
int In1 = 0;
int In2 = 2;
int ENA = 4;

int In3 = 13;
int In4 = 12;
int ENAB = 14;


int SPEED = 30;

void setup(){
  pinMode(In1,OUTPUT);
  pinMode(In2,OUTPUT);
  pinMode(ENA, OUTPUT);
  
  pinMode(In3,OUTPUT);
  pinMode(In4,OUTPUT);
  pinMode(ENAB, OUTPUT);
  

  digitalWrite(In1,LOW);
  digitalWrite(In2, HIGH);
  

//
//  digitalWrite(ENA, HIGH);
  
  
//ENA 255 means high speed and 0 means low speed
 
}

void loop(){

  
  digitalWrite(ENAB, HIGH);
  digitalWrite(In3, LOW);
digitalWrite(In4, HIGH);

delay(2000); // now change motor directions

digitalWrite(ENAB, HIGH);
digitalWrite(In3, HIGH);
digitalWrite(In4, LOW);
delay(2000);
 
}
