
#include "palette.h"

// The palette to be applied after palette choice is selected
SNesPalette nesPalette[64];

static float redDeemphFactor[]={
	1.0,
	1.239,
	0.794,
	1.019,
	0.905,
	1.023,
	0.741,
	0.75
};
static float greenDeemphFactor[]={
	1.0,
	0.915,
	1.086,
	0.98,
	1.026,
	0.908,
	0.987,
	0.75
};
static float blueDeemphFactor[]={
	1.0,
	0.743,
	0.882,
	0.653,
	1.277,
	0.979,
	0.101,
	0.75
};

u16 rgbaPalette[16][64];

void nespalInitialize(SNesPalette choice[64])
{	
	// Sets chosen color palette
    for (int i; i < 64; i++)
    {
        nesPalette[i] = choice[i];
    }
	
    //#define MAKE_COLOR(r,g,b,a) (a << 0) | (r << 24) | (g << 16) | (b << 8)
    #define MAKE_COLOR(r,g,b,a) ((r >> 3) << 11) | ((g >> 3) << 6) | ((b >> 3) << 0)

    for (int index = 0; index < 64; index++)
    {
        u8 alpha = 0;
        //if (index == 0)
        //	alpha = 0;

        u8 r = nesPalette[index].red;
        u8 g = nesPalette[index].green;
        u8 b = nesPalette[index].blue;

        rgbaPalette[0][index] = MAKE_COLOR(r,g,b,alpha);

        // compute deemph and grayscale
        //
        int nr, ng, nb;
        for (int i = 1; i < 16; i++)
        {
            if (i & 1)
            {
                // Gray scale
                nr = nesPalette[index & 0x30].red;
                ng = nesPalette[index & 0x30].green;
                nb = nesPalette[index & 0x30].blue;
            }
            else
            {
                // Default palette.
                nr = r;
                ng = g;
                nb = b;
            }

            int deemph = i >> 1;

            // Need r/g swap later for PAL games
            //
            int dr = (int) (nr * redDeemphFactor[deemph]);
            int dg = (int) (ng * greenDeemphFactor[deemph]);
            int db = (int) (nb * blueDeemphFactor[deemph]);
            if (dr > 0xff) dr = 0xff;
            if (dg > 0xff) dg = 0xff;
            if (db > 0xff) db = 0xff;

            rgbaPalette[i][index] = MAKE_COLOR(dr,dg,db,alpha);
        }
    }
}