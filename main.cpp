#include <Arduino.h>
#include "Audio.h"
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
// create a synthwaveform object, the output object, and the connections
AudioSynthWaveform       waveform1;      //xy=110,75
AudioOutputPT8211        pt8211_1;          //xy=303,78
AudioConnection          patchCord1(waveform1, 0, pt8211_1, 0);
AudioConnection          patchCord2(waveform1, 0, pt8211_1, 1);

const u_int8_t kButtonPin = 2;
const u_int8_t kDialPin = 2;


void setup() {
  //setup audio memory and Serial monitor
  Serial.begin(115200);
  AudioMemory(10);

  // load a sine waveform into waveform 1
  waveform1.begin(WAVEFORM_SINE);
  waveform1.frequency(440);
  waveform1.amplitude(0.7);

  // setup a digital pin as an input
  pinMode(kButtonPin, INPUT);

  Serial.println("setup complete!");
}

void loop() {

  //read button (where should button connect?)
  int buttonStatus = digitalRead(kButtonPin);
  
  //read dial (where should dial connect?)
  float potValue = analogRead(A1);

  // set the amplitude of the waveform
  waveform1.amplitude(0.5);
  
  // we will increase the waveform frequency by 4 until its 1760, then wait a little each time
  for (int i = 4; i <= 1760; i+=4)
  {
    delay(100);
    waveform1.frequency(i);
  }
}