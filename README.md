FastLED_RPIRGBPanel_GFX: ArduinoOnPC Display Wrapper for Raspberry Pi
=====================================================================

This is a display driver for Framebuffer::GFX that displays on RGB Panels using
https://github.com/hzeller/rpi-rgb-led-matrix

This allows running arduino code on RGB Panel diplays bigger than 128x64 which 
is the biggest currently supported on arduino chips that are usually limited in
CPU speed, IO pins and/or RAM.
rpi-rgb-led-matrix on an rPi3 allows displays of at least 256x256.

This is Sublime Demo's Matrix unmodified FastLED::NeoMatrix arduino code running on an Rpi3 at 128x192 resolution:
![image](https://user-images.githubusercontent.com/1369412/71630814-7786c100-2c05-11ea-8e97-30374bdfa14c.png)
