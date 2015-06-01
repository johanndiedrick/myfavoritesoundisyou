
int photocell;


void setup(){
 pinMode(A0, INPUT);
 Serial.begin(9600);
}


void loop(){
 
  photocell = analogRead(A0);
  Serial.println(photocell);
}

