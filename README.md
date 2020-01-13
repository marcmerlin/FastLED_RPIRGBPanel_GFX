FastLED_RPIRGBPanel_GFX: ArduinoOnPC Display Wrapper for Raspberry Pi
=====================================================================

This is a display driver for Framebuffer::GFX that displays on RGB Panels using
https://github.com/hzeller/rpi-rgb-led-matrix . It runs on top of the same code that https://github.com/marcmerlin/Framebuffer_GFX and therefore provides access to the usual 
trio of APIs: FastLED, Adafruit::GFX (via Adafruit::NeoMatrix compatibility using FastLED::NeoMatrix)
and LEDMatrix compatibility too. To get example demo code, go to:
https://github.com/marcmerlin/FastLED_NeoMatrix_SmartMatrix_LEDMatrix_GFX_Demos

Please see this code to see how to use the driver:
* https://github.com/marcmerlin/FastLED_NeoMatrix_SmartMatrix_LEDMatrix_GFX_Demos/blob/022257656e2f1beabe327e88bb96747c0fc955f9/neomatrix_config.h#L262
* https://github.com/marcmerlin/FastLED_NeoMatrix_SmartMatrix_LEDMatrix_GFX_Demos/blob/022257656e2f1beabe327e88bb96747c0fc955f9/neomatrix_config.h#L697

This display driver is meant to be used with
https://github.com/marcmerlin/ArduinoOnPc-FastLED-GFX-LEDMatrix

This allows running arduino code on RGB Panel diplays bigger than 128x64 which 
is the biggest currently supported on arduino chips that are usually limited in
CPU speed, IO pins and/or RAM.
rpi-rgb-led-matrix on an rPi3 allows displays of at least 256x256.

Blog post: http://marc.merlins.org/perso/arduino/post_2020-01-01_Running-FastLED_-Adafruit_GFX_-and-LEDMatrix-code-on-High-Resolution-RGBPanels-with-a-Raspberry-Pi.html

This is Sublime Demo's Matrix unmodified FastLED::NeoMatrix arduino code running on an Rpi3 at 128x192 resolution:
![image](https://user-images.githubusercontent.com/1369412/71630814-7786c100-2c05-11ea-8e97-30374bdfa14c.png)
