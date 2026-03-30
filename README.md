# Arduino-synthesizer
Arduino-based synthesizer with potentiometer-controlled sound and a button for filter and reverb mode selection

## What It Does

This synthesizer generates audio using the Teensy Audio Library, outputting through a PT8211 DAC. It features multiple audio modes controlled by a button, with a potentiometer for real-time sound manipulation. The signal chain includes waveform generation, a state variable filter, reverb, and a mixer for blending dry and wet signals. The potentiometer is mapped to a pentatonic scale. 

Modes:
1. Mute
2. Dry
3. Filter
4. reverb
5. filter + reverb

## Components Used

- Teensy 4.0
- PT8211 DAC (digital-to-analog converter)
- Potentiometer
- Push button
- Speaker / audio output

## How It Works

The Teensy Audio Library handles signal routing through a chain of audio objects: a waveform generator feeds into both a dry path and a filter/reverb path, which are blended through mixers before reaching the DAC output. The button cycles through different sound modes, while the potentiometer adjusts parameters in real time.

## Signal Chain

Waveform → State Variable Filter → Effect Mixer → Reverb → Output Mixer → PT8211 DAC (stereo out)

## What I Learned

- Working with the Teensy Audio Library and audio signal routing
- Digital-to-analog conversion with the PT8211
- Real-time parameter control using analog inputs
- Audio effects chains (filtering, reverb, dry/wet mixing)
- C++ programming with PlatformIO

## Demo

(https://drive.google.com/file/d/1tiV1_NzuQh45uuqOuKnmB8Lk8Y0rOqpW/view?usp=sharing)