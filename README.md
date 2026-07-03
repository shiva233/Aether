# Aether 🎧

A USB-C powered Bluetooth-to-USB audio bridge that lets me connect my phone / Steam Deck with Bluetooth and send that audio straight into my PC as a USB audio input!

|  |  |
| :---: | :---: |
| <img width="450" alt="Screenshot 2026-07-01 182312" src="https://github.com/user-attachments/assets/a99a7c9c-2910-49c5-89ac-c1fe535fc484" /> | <img width="450" alt="Screenshot 2026-07-01 182304" src="https://github.com/user-attachments/assets/46dcd7df-6f0c-43ef-b6a7-862565627f28" /> |

What is Aether? :0

Aether is basically a small USB-C dongle/box thing that pairs to my iPhone, Steam Deck, or other Bluetooth audio source, receives the audio wirelessly, and then sends it to my PC over USB so the computer sees it like a normal USB microphone / audio input device.

I wanted this because very often I want to mix audio from my Steam Deck or phone into my PC headphones while on call with friends or watching a movie, without needing random software, aux cables, capture cards, or weird Windows audio routing. So the idea is that Aether just sits between the device and my PC:

Phone / Steam Deck → Bluetooth → Aether → USB-C → PC → My ears :D

The project is also kind of a challenge project for me because it combines Bluetooth Classic audio, I2S digital audio, USB Audio Class, USB-C power/data, and a custom PCB power tree all in one board :D


Extra Info:

- The Bluetooth Module: Microchip BM83 Bluetooth Stereo Audio Module
- The MCU: STM32C552CET6
- Bluetooth: Bluetooth Classic A2DP Sink
- Audio Path: BM83 decodes Bluetooth audio and outputs digital PCM over I2S
- USB: USB 2.0 Full-Speed device over USB-C
- PC Interface: USB Audio Class input device so Windows can recognize it without custom drivers
- Power: Powered fully from the PC through USB-C VBUS
- BM83 Power Rail: 3.6V Buck Regulator 
- STM32 Power Rail: 3.3V LDO
- Stackup: 4-Layer Custom PCB (Signal - GND - GND - Signal)
