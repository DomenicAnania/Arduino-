/* Heartbeat 02 - creating a behaviours with the heart beat
 *  This code will take the neoheart code and use it to create interesting behavours
 *  that will be copied and saved into this code as a behavior case to be used for
 *  creating a behavour narrative. When the behaviors are complete, we will then use
 *  an array like in the examples before with strand test to control the order of
 *  the neo ring's performance to make an interesting sequence of behaviours we can
 *  use at our direction and for sensors later.
 */
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

//What PWM pin do you want to use? Here we don't need the ";" at the end because of #define
#define PIN [where did you plug the neopixel on the arduino?]

//type how many leds you have in ringTotal
int ringTotal = [count of LEDs on ring];

//this is the varable that will control what behaviour happens when. In this code, it is just going
//to cycle through them, so where on the table do you want to start?
int action = 0;

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)

//What do you want to call your neo pixel ring, put your word before the equal sign
//call it ring?
//Also in the blank spot put the number of LEDs are on your ring
Adafruit_NeoPixel  = Adafruit_NeoPixel( [ring name?] , PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

//Need to add the 3 color options for the neopixel ring, red, green and blue
int [red color name?];
int [blue color name?];
int [green color name?];

void setup() {

  Serial.begin(9600);
  //Note that this code defines our ring and not a strip, need to add your word for your neopixel
  //ring before the dot on these two words
  [place your ring name here].begin();
  [place your ring name here].show(); // Initialize all pixels to 'off'
}

void loop() {
  actionTable();
  //delay(50);
  action++;
  if (action > [put here last case number]) {
    //start at the begining
    action = 0;
  }
  
  //Add a void function to fix leds staying on when they should be off issue here
}  

//When you are done, what is wrong with your code? It is broken some how. Can you see what the issue is?
//You need to add a void function here to fix the problem with a for loop where all the Leds need to be
//given the same value of ______

//void [clear ring name?] () {
//  [place your ring name here].clear();
//  [place your ring name here].setBrightness(255);
//}


