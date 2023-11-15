// char value; //initialize variable’value’.
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600); //start serial comm with computer at baud rate 9600 baud.
}

void loop()
{
  char one  = '1';
  char two  = '2';
  char ran  = 'r';
  char volt = 'v';
  if (Serial.available() != 1) {
    char value = ' ';
    value = Serial.read(); //read the serial data(ASCII value)
    
    if (value == one) {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("LED ON");
    }
    if (value == two) {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("LED OFF");
    }
    if  (value == ran) {
      int r = random(0, 255);
      Serial.println(r);
    }
    if (value == volt) {
      int volt = analogRead(A0);
      Serial.println(volt); 
    }
    //Serial.println(value); //print the value back to the monitor(computer)

  }
} //end
