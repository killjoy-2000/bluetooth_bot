#include<SoftwareSerial.h>
SoftwareSerial b(11,12);
char c;

#define l1 2
#define l2 3
#define r1 4
#define r2 5
#define s1 6
#define s2 10




void setup() {
  Serial.begin(9600);
  b.begin(9600);
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);

  // put your setup code here, to run once:

}

void loop() {
  if(b.available()){
  c = b.read();
  Serial.println(c);
  }

  analogWrite(s1,250);
  analogWrite(s2,250);

  if(c == 'F'){
    digitalWrite(l1,HIGH);
    digitalWrite(l2,LOW);
    digitalWrite(r1,HIGH);
    digitalWrite(r2,LOW);

  }
  else if(c == 'B'){
    digitalWrite(l2,HIGH);
    digitalWrite(l1,LOW);
    digitalWrite(r2,HIGH);
    digitalWrite(r1,LOW);

  }
  else if(c == 'L'){
    digitalWrite(l1,HIGH);
    digitalWrite(l2,LOW);
    digitalWrite(r1,LOW);
    digitalWrite(r2,HIGH);

  }
  else if(c == 'R'){
    digitalWrite(l1,LOW);
    digitalWrite(l2,HIGH);
    digitalWrite(r1,HIGH);
    digitalWrite(r2,LOW);

  }
  else if(c == 'G'){
    digitalWrite(l1,HIGH);
    digitalWrite(l2,LOW);
    digitalWrite(r1,LOW);
    digitalWrite(r2,LOW);

  }
  else if(c == 'I'){
    digitalWrite(l1,LOW);
    digitalWrite(l2,LOW);
    digitalWrite(r1,HIGH);
    digitalWrite(r2,LOW);

  }
  else if(c == 'H'){
    digitalWrite(l1,LOW);
    digitalWrite(l2,HIGH);
    digitalWrite(r1,LOW);
    digitalWrite(r2,LOW);

  }
  else if(c == 'J'){
    digitalWrite(l1,LOW);
    digitalWrite(l2,LOW);
    digitalWrite(r1,LOW);
    digitalWrite(r2,HIGH);

  }
  else if(c == 'S'){
    digitalWrite(l1,LOW);
    digitalWrite(l2,LOW);
    digitalWrite(r1,LOW);
    digitalWrite(r2,LOW);

  }
  // put your main code here, to run repeatedly:

}
