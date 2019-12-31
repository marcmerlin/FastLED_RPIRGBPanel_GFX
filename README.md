FastLED_RPIRGBPanel_GFX: Display Wrapper for ArduinoOnPC
=========================================================

This is a display driver for Framebuffer::GFX that displays on RGB Panels using
https://github.com/hzeller/rpi-rgb-led-matrix

This allows running arduino code on RGB Panel diplays bigger than 128x64 which 
is the biggest currently supported on arduino chips that are usually limited in
CPU speed, IO pins and/or RAM.
rpi-rgb-led-matrix on an rPi3 allows displays of at least 256x256.
