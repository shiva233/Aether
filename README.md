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

## Block Diagram
Coming soon, I promise!! I just need to make a cleaner one!!

## Schematics:

<img width="1650" height="1275" alt="Schematic_page-0002" src="https://github.com/user-attachments/assets/6efbda56-6468-47fb-9e24-5d1209b4a17c" />
<img width="1650" height="1275" alt="Schematic_page-0001" src="https://github.com/user-attachments/assets/a728f393-b3bc-4c06-b02d-182e062a797d" />

## Layout:

|  |  |
| :---: | :---: |
| <img width="450" alt="Top layer" src="https://github.com/user-attachments/assets/a8dc968d-a39d-414a-a511-38609c935002" /><br><b>Top Layer</b> | <img width="450" alt="Bottom layer" src="https://github.com/user-attachments/assets/9d42ffbb-3107-4788-9361-698f7ce86986" /><br><b>Bottom Layer</b> |
| <img width="450" alt="Inner layer 1" src="https://github.com/user-attachments/assets/567f3eb0-fdac-48f3-b36a-9a3642e6a498" /><br><b>Inner Layer</b> | <img width="450" alt="Inner layer 2" src="https://github.com/user-attachments/assets/5679fb54-7584-42a9-9ac8-66841c7e2811" /><br><b>Inner Layer</b> |

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
