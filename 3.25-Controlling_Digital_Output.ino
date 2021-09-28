void setup()
{
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);

        digitalWrite(8, HIGH);
        delay(500);
        digitalWrite(8, LOW);
        delay(500);
        digitalWrite(8, HIGH);
        delay(500);
        digitalWrite(8, LOW);
        delay(500);
    delay (1000);

        digitalWrite(7, HIGH);
        delay(250);
        digitalWrite(7, LOW);
        delay(1000); 
        digitalWrite(7, HIGH);
        delay(250);
        digitalWrite(7, LOW);
        delay(1000); 
        digitalWrite(7, HIGH);
        delay(250);
        digitalWrite(7, LOW);
        delay(1000); 
    delay (2000);
}

void loop()
{
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(200);
}
