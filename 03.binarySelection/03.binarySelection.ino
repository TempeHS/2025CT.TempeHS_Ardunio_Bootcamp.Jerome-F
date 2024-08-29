/*  Author: 

  Learning Intention:
  The students understand binary selection logic and apply it to a simple control structures.
  
  Success Criteria:
    1.  I understand binary selection is asking questions that only have a true and false outcome
    2.  I can apply different comparison operators to get a desired outcome in a basic if else
        control structure 
    3.  I understand 'if', 'if else', and 'if else if else'
    4.  I understand the difference between a 'nested if', and using boolean operators
    5.  I can read a simple logic flowchart

  Student Notes: 
  Comparison Operators
    - != (not equal to)
    - < (less than)
    - <= (less than or equal to)
    - == (equal to)
    - > (greater than)
    - >= (greater than or equal to)

    Boolean Operators
    - ! (logical not)
    - && (logical and)
    - || (logical or)


  Documentation: 
    https://www.arduino.cc/reference/en/#structure
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/03.binarySelection/Readme.md

*/

static unsigned int ledPin = 6;
static unsigned int buttonPin = 5;
static unsigned int lightSensorPin = 1;
bool readPin; 

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(lightSensorPin, INPUT);
  Serial.begin(9600);
  Serial.println("Debuged");
}

void loop() 
{
  Serial.println(analogRead(A3));
 if (analogRead(A3) == 700)
 {
    digitalWrite(ledPin, HIGH);
  } else if (analogRead(A3) >= 300)
 {
    digitalWrite(ledPin, HIGH);
 } else 
 { digitalWrite(ledPin, LOW);
 } 
}

// readPin = digitalRead(buttonPin);
// digitalWrite(ledPin, HIGH);