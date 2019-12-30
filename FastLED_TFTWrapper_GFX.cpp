/*-------------------------------------------------------------------------
  Arduino library based on Adafruit_Neomatrix
  by Marc MERLIN <marc_soft@merlins.org>

  You should have received a copy of the GNU Lesser General Public
  License along with NeoMatrix.  If not, see
  <http://www.gnu.org/licenses/>.
  -------------------------------------------------------------------------*/

#include <FastLED_TFTWrapper_GFX.h>

FastLED_TFTWrapper_GFX::FastLED_TFTWrapper_GFX(CRGB *__fb, const uint16_t fbw, const uint16_t fbh,
	TFT_LinuxWrapper* tft):
  Framebuffer_GFX(__fb, fbw, fbh, NULL), _tftw(fbw), _tfth(fbh) {
      _tft = tft;
}

// WARNING, this is very slow an inefficient. It is only there for testing
// but works at 5fs at 160x128 resolution.
void FastLED_TFTWrapper_GFX::show() {
    //Serial.print(millis());
    for (uint16_t tftline = 0; tftline < _tfth; tftline++) {
	for (uint16_t i = 0; i < _tftw; i++) {
	    CRGB pixel = _fb[tftline*matrixWidth + i];
	    uint8_t r = pixel.r;
	    uint8_t g = pixel.g;
	    uint8_t b = pixel.b;
	    _tft->win->drawPoint_RGB(i, tftline, r, g, b);
	}
    }
    //Serial.print( " ");
    //Serial.println(millis());
}

// vim:sts=4:sw=4
//
