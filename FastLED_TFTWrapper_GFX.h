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

#ifndef _FastLED_TFTWrapper_GFX_H_
#define _FastLED_TFTWrapper_GFX_H_
#include "Framebuffer_GFX.h"
#include "TFT_LinuxWrapper.h"
#include "FastLED.h"

class FastLED_TFTWrapper_GFX : public Framebuffer_GFX {
  public:
    FastLED_TFTWrapper_GFX(CRGB *, uint16_t, uint16_t, TFT_LinuxWrapper* tft);
    void show();

  protected:
    TFT_LinuxWrapper* _tft;

  private:
    const uint16_t _tftw, _tfth;
};

#endif // _FastLED_TFTWrapper_GFX_H_
// vim:sts=4:sw=4
