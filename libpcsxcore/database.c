#include "misc.h"
#include "../plugins/dfsound/spu_config.h"
#include "sio.h"

/* It's duplicated from emu_if.c */
#define ARRAY_SIZE(x) (sizeof(x) / sizeof(x[0]))

static const char MemorycardHack_db[8][10] =
{
	/* Lifeforce Tenka, also known as Codename Tenka */
	{"SLES00613"},
	{"SLED00690"},
	{"SLES00614"},
	{"SLES00615"},
	{"SLES00616"},
	{"SLES00617"},
	{"SCUS94409"}
};

/* Function for automatic patching according to GameID. */
void Apply_Hacks_Cdrom()
{
	uint32_t i;
	
	/* Apply Memory card hack for Codename Tenka. (The game needs one of the memory card slots to be empty) */
	for(i=0;i<ARRAY_SIZE(MemorycardHack_db);i++)
	{
		if (strncmp(CdromId, MemorycardHack_db[i], 9) == 0)
		{
			/* Disable the second memory card slot for the game */
			Config.Mcd2[0] = 0;
			/* This also needs to be done because in sio.c, they don't use Config.Mcd2 for that purpose */
			McdDisable[1] = 1;
		}
	}
}