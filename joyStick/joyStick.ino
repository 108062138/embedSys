// Declaration and initialization of the input pin
int JoyStick_X = A2; // X-axis-signal
int JoyStick_Y = A1; // Y-axis-signal
int Button = A0;
void setup ()
{
 pinMode (JoyStick_X, INPUT);
 pinMode (JoyStick_Y, INPUT);
 pinMode (Button, INPUT);
 // pushing the button leads to
 // power up the pullup-resistor
 digitalWrite(Button, HIGH); 
 Serial.begin (9600); // serial output with 9600 bps
}
// The program reads the current values of the input pins
// and outputs them at the serial output
void loop ()
{
 float x, y;
 int Knopf;
 // Current values will be read and converted to the right voltage
 x = analogRead (JoyStick_X) * (5.0 / 1023.0);
 y = analogRead (JoyStick_Y) * (5.0 / 1023.0);
 Knopf = digitalRead (Button);
 //... and outputted here
 Serial.print ("X-axis:"); Serial.print (x, 4); Serial.print ("V, ");
 Serial.print ("Y-axis:"); Serial.print (y, 4); Serial.print ("V, ");
 Serial.print ("Button:");
 if(Knopf==1)
 {
 Serial.println ("not pushed");
 }
 else
 {
 Serial.println ("pushed");
 }
 delay (200);
}
