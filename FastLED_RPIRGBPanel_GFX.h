/*--------------------------------------------------------------------
  Arduino library based on Adafruit_Neomatrix
  by Marc MERLIN <marc_soft@merlins.org>

  Original notice and license from Adafruit_Neomatrix:
  NeoMatrix is free software: you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as
  published by the Free Software Foundation, either version 3 of
  the License, or (at your option) any later version.

  NeoMatrix is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with NeoMatrix.  If not, see
  <http://www.gnu.org/licenses/>.
  --------------------------------------------------------------------*/

#ifndef _FastLED_RPIRGBPanel_GFX_H_
#define _FastLED_RPIRGBPanel_GFX_H_
#include "Framebuffer_GFX.h"
#include "FastLED.h"

// https://github.com/hzeller/rpi-rgb-led-matrix
#undef min
#undef max
#include <led-matrix.h>
using rgb_matrix::RGBMatrix;

class FastLED_RPIRGBPanel_GFX : public Framebuffer_GFX {
  public:
    FastLED_RPIRGBPanel_GFX(CRGB *, uint16_t, uint16_t);
    void setMatrix(RGBMatrix *rgbmatrix) { _matrix = rgbmatrix; }
    // FrameBuffer::GFX brightness is 0 to 255, rpi-rgb-panel is 0 to 100
    void setBrightness(int b) { _matrix->SetBrightness(b/2.5); };
    void show();

  protected:
    RGBMatrix *_matrix;

  private:
    const uint16_t _fbw, _fbh;
};

#endif // _FastLED_RPIRGBPanel_GFX_H_
// vim:sts=4:sw=4
