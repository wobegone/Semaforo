//Semáforo
//1-7-20
//infinitopython.blogspot.com

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH); //coches verde on
  digitalWrite(12, HIGH); //personas rojo on
  delay(40000); //Esperar 40s
  digitalWrite(8, LOW); //se apaga verde coches
  digitalWrite(9, HIGH); //naranja coches on
  delay(2000); //esperar 2s
  digitalWrite(9, LOW); //naranja coches off
  digitalWrite(10, HIGH); //rojo coches on
  delay(1000); //Esperar 1s
  digitalWrite(12, LOW); //personas rojo  off
  digitalWrite(11, HIGH); //personas verde on
  delay(36000); //esperar 36s
  digitalWrite(11, LOW); //personas verde  off
  digitalWrite(11, HIGH); //personas verde on
  delay(0100); //esperar 
  digitalWrite(11, LOW); //personas verde  off
  digitalWrite(11, HIGH); //personas verde on
  delay(0100); //esperar 
  digitalWrite(11, LOW); //personas verde  off
  digitalWrite(11, HIGH); //personas verde on
  delay(0100); //esperar 
  digitalWrite(11, LOW); //personas verde  off
  digitalWrite(11, HIGH); //personas verde on
  delay(0100); //esperar 
  digitalWrite(11, LOW); //personas verde  off
  digitalWrite(10, LOW); //rojo coches off
}
