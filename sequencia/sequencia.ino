//Sequencia de LEDs
int ledPin1 = 6;

int ledPin2 = 7;

int ledPin3 = 8;

int ledPin4 = 9;

int ledPin5 = 10;

int ledPin6 = 11;

void setup() {
 pinMode(ledPin1, OUTPUT);

 pinMode(ledPin2, OUTPUT);

 pinMode(ledPin3, OUTPUT);

 pinMode(ledPin4, OUTPUT);

 pinMode(ledPin5, OUTPUT);

 pinMode(ledPin6, OUTPUT);
}

void loop() {
 analogWrite(ledPin1, random(120)+136);

 analogWrite(ledPin2, random(120)+136);

 analogWrite(ledPin3, random(120)+136);
 
 analogWrite(ledPin4, random(120)+136);

 analogWrite(ledPin5, random(120)+136);

 analogWrite(ledPin6, random(120)+136);

 delay(random(100));
}
