/*-------------------------------------------------------------------------
  Arduino library based on Adafruit_Neomatrix
  by Marc MERLIN <marc_soft@merlins.org>

  You should have received a copy of the GNU Lesser General Public
  License along with NeoMatrix.  If not, see
  <http://www.gnu.org/licenses/>.
  -------------------------------------------------------------------------*/

#include <FastLED_RPIRGBPanel_GFX.h>

FastLED_RPIRGBPanel_GFX::FastLED_RPIRGBPanel_GFX(CRGB *__fb, const uint16_t fbw, const uint16_t fbh):
  Framebuffer_GFX(__fb, fbw, fbh, NULL), _fbw(fbw), _fbh(fbh) {
}

void FastLED_RPIRGBPanel_GFX::show() {
    for (uint16_t y = 0; y < _fbh; y++) {
	for (uint16_t x = 0; x < _fbw; x++) {
	    CRGB pixel = _fb[y*matrixWidth + x];
	    uint8_t r = pixel.r;
	    uint8_t g = pixel.g;
	    uint8_t b = pixel.b;
	    _canvas->SetPixel(x, y, r, g, b);
	}
    }
}

// vim:sts=4:sw=4
