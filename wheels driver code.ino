int b1 = 0;
int b2 = 0;
void setup() {
  
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  
}

void loop() {
  b1=digitalRead(3);
  b2=digitalRead(4);
  if(b1==HIGH){
    digitalWrite(9,LOW);
    digitalWrite(11,LOW); 
    digitalWrite(12,HIGH);
    digitalWrite(10,HIGH);
    }
  else{    
    digitalWrite(12,LOW);
    digitalWrite(10,LOW);
    }
  if(b2==HIGH){
    digitalWrite(10,LOW);
    digitalWrite(12,LOW); 
    digitalWrite(9,HIGH);
    digitalWrite(11,HIGH);
    }
  else{    
    digitalWrite(9,LOW);
    digitalWrite(11,LOW);
    }
}
