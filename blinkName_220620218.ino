// ------------
// Blink Name -STEPHANIE
// Student ID: 220620218
// ------------


int led = D7; //in-built led D7
int morseCodeSpace = 100; //delay between each morse code symbol
int letterSpace = 300; //delay between between each letter

void setup() {

  pinMode(led, OUTPUT);

}

//short blink
void dot() {
    
    digitalWrite(led, HIGH); //turn on the led
    
    delay(100); //keep the led on for 1 seconds
    
    digitalWrite(led, LOW); //turn the led off
    
}

//long blink
void line() {
    
    digitalWrite(led, HIGH); //turn on the led
    
    delay(300); //keep the led on for 3 seconds
    
    digitalWrite(led, LOW); //turn the led off
}

//morse code for name STEPHANIE
void loop() {

// S

    dot();
    delay(MorseCodeSpace);
    dot();
    delay(MorseCodeSpace);
    dot();
    
// Letter Space
    delay(letterSpace);
    
// T

    line();
    
// Letter Space
    delay(letterSpace);
    
// E

    dot();
    
// Letter Space
    delay(letterSpace);
    
// P

    dot();
    delay(MorseCodeSpace);
    line();
    delay(MorseCodeSpace);
    line();
    delay(MorseCodeSpace);
    dot();
    
// Letter Space
    delay(letterSpace);
    
// H

    dot();
    delay(MorseCodeSpace);
    dot();
    delay(MorseCodeSpace);
    dot();
    delay(MorseCodeSpace);
    dot();
    
// Letter Space
    delay(letterSpace);
    
// A

    dot();
    delay(MorseCodeSpace);
    line();
    
// Letter Space
    delay(letterSpace);
    
// N

    line();
    delay(MorseCodeSpace);
    dot();
    
// Letter Space
    delay(letterSpace);
    
// I

    dot();
    delay(MorseCodeSpace);
    dot();
    
// Letter Space
    delay(letterSpace);
    
// E

    dot();
    
// Letter Space
    delay(letterSpace);
    
}

