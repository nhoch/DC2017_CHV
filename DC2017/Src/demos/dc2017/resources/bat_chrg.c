
/*******************************************************************************
* image
* filename: C:/Repos/SpecializedSolutions/QCM/Software/DC2017/Src/demos/dc2017/resources/bat_chrg.xml
* name: bat_chrg
*
* preset name: Monochrome
* data block size: 8 bit(s), uint8_t
* RLE compression enabled: no
* conversion type: Monochrome, Edge 128
* bits per pixel: 1
*
* preprocess:
*  main scan direction: top_to_bottom
*  line scan direction: forward
*  inverse: no
*******************************************************************************/

/*
 typedef struct {
     const uint8_t *data;
     uint16_t width;
     uint16_t height;
     } tImage;
*/
#include <stdint.h>
#include "resources.h"


static const uint8_t image_data_bat_chrg[16] = {
    0xff, 0xfc,
    0x80, 0x04,
    0x92, 0x04,
    0x8b, 0x06,
    0x86, 0x86,
    0x82, 0x44,
    0x80, 0x04,
    0xff, 0xfc
};
const tImage bat_chrg = { image_data_bat_chrg, 15, 8};

