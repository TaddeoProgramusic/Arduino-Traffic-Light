# Arduino-Traffic-Light

This project demonstrates a simple traffic light system using three LEDs controlled by an Arduino UNO. It is ideal for beginners who want to understand basic digital outputs and timing sequences.

## Requirements

- 3 LEDs (red, yellow, and green)  
- 3 × 220Ω resistors (one for each LED)  
- 1 breadboard  
- Jumper wires  
- 1 Arduino UNO board  

## Description

The project simulates a standard traffic light cycle using three LEDs.  
Each LED represents one phase of the traffic signal:

- **Red** – stop  
- **Yellow** – prepare  
- **Green** – go  

The Arduino controls the timing of each phase, switching the LEDs on and off in sequence to mimic a real traffic light. This setup is useful for learning about digital pins, delays, and basic circuit wiring.

You can expand this project by adding pedestrian buttons, sound alerts, or non‑blocking timing using `millis()`.
