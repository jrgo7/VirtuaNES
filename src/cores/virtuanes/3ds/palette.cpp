
#include "palette.h"


// Array of possible palettes - array of arrays
SNesPalette palChoices[8][64] = 
{
//0	// FCEUX
	{{0x74,0x74,0x74},{0x24,0x18,0x8c},{0x00,0x00,0xa8},{0x44,0x00,0x9c},{0x8c,0x00,0x74},{0xa8,0x00,0x10},{0xa4,0x00,0x00},{0x7c,0x08,0x00},{0x40,0x2c,0x00},{0x00,0x44,0x00},{0x00,0x50,0x00},{0x00,0x3c,0x14},{0x18,0x3c,0x5c},{0x00,0x00,0x00},{0x00,0x00,0x00},{0x00,0x00,0x00},{0xbc,0xbc,0xbc},{0x00,0x70,0xec},{0x20,0x38,0xec},{0x80,0x00,0xf0},{0xbc,0x00,0xbc},{0xe4,0x00,0x58},{0xd8,0x28,0x00},{0xc8,0x4c,0x0c},{0x88,0x70,0x00},{0x00,0x94,0x00},{0x00,0xa8,0x00},{0x00,0x90,0x38},{0x00,0x80,0x88},{0x00,0x00,0x00},{0x00,0x00,0x00},{0x00,0x00,0x00},{0xfc,0xfc,0xfc},{0x3c,0xbc,0xfc},{0x5c,0x94,0xfc},{0xcc,0x88,0xfc},{0xf4,0x78,0xfc},{0xfc,0x74,0xb4},{0xfc,0x74,0x60},{0xfc,0x98,0x38},{0xf0,0xbc,0x3c},{0x80,0xd0,0x10},{0x4c,0xdc,0x48},{0x58,0xf8,0x98},{0x00,0xe8,0xd8},{0x78,0x78,0x78},{0x00,0x00,0x00},{0x00,0x00,0x00},{0xfc,0xfc,0xfc},{0xa8,0xe4,0xfc},{0xc4,0xd4,0xfc},{0xd4,0xc8,0xfc},{0xfc,0xc4,0xfc},{0xfc,0xc4,0xd8},{0xfc,0xbc,0xb0},{0xfc,0xd8,0xa8},{0xfc,0xe4,0xa0},{0xe0,0xfc,0xa0},{0xa8,0xf0,0xbc},{0xb0,0xfc,0xcc},{0x9c,0xfc,0xf0},{0xc4,0xc4,0xc4},{0x00,0x00,0x00},{0x00,0x00,0x00}},
//1	// Composite Direct (FBX)
	{{101,101,101},{0,18,125},{24,0,142},{54,0,130},{86,0,93},{90,0,24},{79,5,0},{56,25,0},{29,49,0},{0,61,0},{0,65,0},{0,59,23},{0,46,85},{0,0,0},{0,0,0},{0,0,0},{175,175,175},{25,78,200},{71,47,227},{107,31,215},{147,27,174},{158,26,94},{153,50,0},{123,75,0},{91,103,0},{38,122,0},{0,130,0},{0,122,62},{0,110,138},{0,0,0},{0,0,0},{0,0,0},{255,255,255},{100,169,255},{142,137,255},{182,118,255},{224,111,255},{239,108,196},{240,128,106},{216,152,44},{185,180,10},{131,203,12},{91,214,63},{74,209,126},{77,199,203},{76,76,76},{0,0,0},{0,0,0},{255,255,255},{199,229,255},{217,217,255},{233,209,255},{249,206,255},{255,204,241},{255,212,203},{248,223,177},{237,234,164},{214,244,164},{197,248,184},{190,246,211},{191,241,241},{185,185,185},{0,0,0},{0,0,0}},
//2	// NES Classic (FBX)
	{{97,97,97},{0,0,136},{31,13,153},{55,19,121},{86,18,96},{93,0,16},{82,14,0},{58,35,8},{33,53,12},{13,65,14},{23,68,23},{0,58,31},{0,47,87},{0,0,0},{0,0,0},{0,0,0},{170,170,170},{13,77,196},{75,36,222},{105,18,207},{144,20,173},{157,28,72},{146,52,4},{115,80,5},{93,105,19},{22,122,17},{19,128,8},{18,118,73},{28,102,145},{0,0,0},{0,0,0},{0,0,0},{252,252,252},{99,154,252},{138,126,252},{176,106,252},{221,109,242},{231,113,171},{227,134,88},{204,158,34},{168,177,0},{114,193,0},{90,205,78},{52,194,142},{79,190,206},{66,66,66},{0,0,0},{0,0,0},{252,252,252},{190,212,252},{202,202,252},{217,196,252},{236,193,252},{250,195,231},{247,206,195},{226,205,167},{218,219,156},{200,227,158},{191,229,184},{178,235,200},{183,229,235},{172,172,172},{0,0,0},{0,0,0}},
//3	// PC-10
	{{109,109,109},{0,36,146},{0,0,219},{109,73,219},{146,0,109},{182,0,109},{182,36,0},{146,73,0},{109,73,0},{36,73,0},{0,109,36},{0,146,0},{0,73,73},{0,0,0},{0,0,0},{0,0,0},{182,182,182},{0,109,219},{0,73,255},{146,0,255},{182,0,255},{255,0,146},{255,0,0},{219,109,0},{146,109,0},{36,146,0},{0,146,0},{0,182,109},{0,146,146},{36,36,36},{0,0,0},{0,0,0},{255,255,255},{109,182,255},{146,146,255},{219,109,255},{255,0,255},{255,109,255},{255,146,0},{255,182,0},{219,219,0},{109,219,0},{0,255,0},{73,255,219},{0,255,255},{73,73,73},{0,0,0},{0,0,0},{255,255,255},{182,219,255},{219,182,255},{255,182,255},{255,146,255},{255,182,182},{255,219,146},{255,255,73},{255,255,109},{182,255,73},{146,255,109},{73,255,219},{146,219,255},{146,146,146},{0,0,0},{0,0,0}},
//4	// PVM Style D93 (FBX)
	{{105,107,99},{0,23,116},{30,0,135},{52,0,115},{86,0,87},{94,0,19},{83,26,0},{59,36,0},{36,48,0},{6,58,0},{0,63,0},{0,59,30},{0,51,78},{0,0,0},{0,0,0},{0,0,0},{185,187,179},{20,83,185},{77,44,218},{103,30,222},{152,24,156},{157,35,68},{160,62,0},{141,85,0},{101,109,0},{44,121,0},{0,129,0},{0,125,66},{0,120,138},{0,0,0},{0,0,0},{0,0,0},{255,255,255},{105,168,255},{150,145,255},{178,138,250},{234,125,250},{243,123,199},{242,142,89},{230,173,39},{215,200,5},{144,223,7},{100,229,60},{69,226,125},{72,213,217},{78,80,72},{0,0,0},{0,0,0},{255,255,255},{210,234,255},{226,226,255},{233,216,255},{245,210,255},{248,217,234},{250,222,185},{249,232,155},{243,242,140},{211,250,145},{184,252,168},{174,250,202},{202,243,243},{190,192,184},{0,0,0},{0,0,0}},
//5	// Smooth (FBX) 
	{{106,109,106},{0,19,128},{30,0,138},{57,0,122},{85,0,86},{90,0,24},{79,16,0},{61,28,0},{37,50,0},{0,61,0},{0,64,0},{0,57,36},{0,46,85},{0,0,0},{0,0,0},{0,0,0},{185,188,185},{24,80,199},{75,48,227},{115,34,214},{149,31,169},{157,40,92},{152,55,0},{127,76,0},{94,100,0},{34,119,0},{2,126,2},{0,118,69},{0,110,138},{0,0,0},{0,0,0},{0,0,0},{255,255,255},{104,166,255},{140,156,255},{181,134,255},{217,117,253},{227,119,185},{229,141,104},{212,157,41},{179,175,12},{123,194,17},{85,202,71},{70,203,129},{71,193,197},{74,77,74},{0,0,0},{0,0,0},{255,255,255},{204,234,255},{221,222,255},{236,218,255},{248,215,254},{252,214,245},{253,219,207},{249,231,181},{241,240,170},{218,250,169},{201,255,188},{195,251,215},{196,246,246},{190,193,190},{0,0,0},{0,0,0}},
//6	// Sony CXA
	{{88,88,88},{0,35,140},{0,19,155},{45,5,133},{93,0,82},{122,0,23},{122,8,0},{95,24,0},{53,42,0},{9,57,0},{0,63,0},{0,60,34},{0,50,93},{0,0,0},{0,0,0},{0,0,0},{161,161,161},{0,83,238},{21,60,254},{96,40,228},{169,29,152},{212,30,65},{210,44,0},{170,68,0},{108,94,0},{45,115,0},{0,125,6},{0,120,82},{0,105,169},{0,0,0},{0,0,0},{0,0,0},{255,255,255},{31,165,254},{94,137,254},{181,114,254},{254,101,246},{254,103,144},{254,119,60},{254,147,8},{196,178,0},{121,202,16},{58,213,74},{17,209,164},{6,191,254},{66,66,66},{0,0,0},{0,0,0},{255,255,255},{160,217,254},{189,204,254},{225,194,254},{254,188,251},{254,189,208},{254,197,169},{254,209,142},{233,222,134},{199,233,146},{168,238,176},{149,236,217},{145,228,254},{172,172,172},{0,0,0},{0,0,0}},
//7	// Wavebeam
	{{107,107,107},{0,27,136},{33,0,154},{64,0,140},{96,0,103},{100,0,30},{89,8,0},{72,22,0},{40,54,0},{0,69,0},{0,73,8},{0,66,29},{0,54,89},{0,0,0},{0,0,0},{0,0,0},{180,180,180},{21,85,211},{67,55,239},{116,37,223},{156,25,185},{172,15,100},{170,44,0},{138,75,0},{102,107,0},{33,131,0},{0,138,0},{0,129,68},{0,118,145},{0,0,0},{0,0,0},{0,0,0},{255,255,255},{99,178,255},{124,156,255},{192,125,254},{233,119,255},{245,114,205},{244,136,107},{221,160,41},{189,189,10},{137,210,14},{92,222,62},{75,216,134},{77,207,210},{82,82,82},{0,0,0},{0,0,0},{255,255,255},{188,223,255},{210,210,255},{225,200,255},{239,199,255},{255,195,225},{255,202,198},{242,218,173},{235,227,160},{210,237,162},{188,244,180},{181,241,206},{182,236,241},{191,191,191},{0,0,0},{0,0,0}}
};

// TODO - Turn nesPalette into a general palette that accepts the value of the 
//		  chosen palette
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


void nespalInitialize()
{
	for(int i; i < 64; i++)
	{
		nesPalette[i] = palChoices[i][0];
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