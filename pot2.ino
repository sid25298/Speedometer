const int sensorPin1 = A0;
const int sensorPin2 = A1;
int i=0;
void setup() {
 // pinMode=(sensorPin, INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int n=analogRead(sensorPin1);
  int m=analogRead(sensorPin2);
  n=map(n,0,1023,0,220);
  m=map(m,0,1023,0,10);
  //Serial.println(n);
  char buffer [50];
  i=sprintf (buffer, "%d %d  ", n, m);
  for(int l= 0; l<=i; l++) 
  Serial.print(buffer[l]);

  Serial.print('\n');
  delay(10);
  // put your main code here, to run repeatedly:

}
