#ifndef __LV2_SYSMODULE_H__
#define __LV2_SYSMODULE_H__

#include <ppu-types.h>

#ifdef __cplusplus
extern "C" {
#endif

/* constants */
#define SYSMODULE_OK                             0x00
#define SYSMODULE_LOADED                         0x00
#define SYSMODULE_ERR_DUPLICATE                  0x80012001 /* already loaded */
#define SYSMODULE_ERR_UNKNOWN                    0x80012002 /* unknown prx */
#define SYSMODULE_ERR_UNLOADED                   0x80012003 /* already unloaded */
#define SYSMODULE_ERR_INVALID_MEM                0x80012004 /* invalid memory container */
#define SYSMODULE_ERR_FATAL                      0x800120ff /* call failed */


typedef enum
{
	SYSMODULE_NET = 0x0,
	SYSMODULE_HTTP = 0x1,
	SYSMODULE_HTTP_UTIL = 0x02,
	SYSMODULE_SSL = 0x03,
	SYSMODULE_HTTPS = 0x04,

	SYSMODULE_VDEC = 0x05,
	SYSMODULE_ADEC = 0x06,
	SYSMODULE_DMUX = 0x07,
	SYSMODULE_VPOST = 0x08,
	SYSMODULE_RTC = 0x09,

	SYSMODULE_SPURS = 0x0a,
	SYSMODULE_OVIS = 0x0b,
	SYSMODULE_SHEAP = 0x0c,

	SYSMODULE_SYNC = 0x0d,
	SYSMODULE_FS = 0x0e,
	SYSMODULE_JPGDEC = 0x0f,
	SYSMODULE_GCM_SYS = 0x10,
	SYSMODULE_AUDIO = 0x11,
	SYSMODULE_PAMF = 0x12,
	SYSMODULE_ATRAC3 = 0x13,
	SYSMODULE_NETCTL = 0x14,
	SYSMODULE_SYSUTIL = 0x15,
	SYSMODULE_SYSUTIL_NP = 0x16,
	SYSMODULE_IO = 0x17,
	SYSMODULE_PNGDEC = 0x18,
	SYSMODULE_FONT = 0x19,
	SYSMODULE_FONTFT = 0x1a,
	SYSMODULE_FREETYPE = 0x1b,
	SYSMODULE_USB = 0x1c,
	SYSMODULE_SAIL = 0x1d,
	SYSMODULE_RESC = 0x1f,

	SYSMODULE_DAISY = 0x20,
	SYSMODULE_KEY2CHAR = 0x21,
	SYSMODULE_MIC = 0x22,
	SYSMODULE_CAMERA = 0x23,

	SYSMODULE_VDEC_MPEG2 = 0x24,
	SYSMODULE_VDEC_H264 = 0x25,
	SYSMODULE_ADEC_LPCM = 0x26,
	SYSMODULE_ADEC_AC3 = 0x27,
	SYSMODULE_ADEC_ATX = 0x28,
	SYSMODULE_ADEC_AT3 = 0x29,
	SYSMODULE_ADEC_PAMF = 0x2a,

	SYSMODULE_LV2DBG = 0x2e,

	SYSMODULE_USERINFO = 0x32,
	SYSMODULE_SAVEDATA = 0x33,

	SYSMODULE_VDEC_DIVX = 0x3c,
	SYSMODULE_JPGENC = 0x3d,
	SYSMODULE_FREETYPE_TT = 0x40,
	SYSMODULE_FIBER = 0x43,
	SYSMODULE_VOICE = 0x46,
	SYSMODULE_ADEC_CELP8 = 0x47,
	SYSMODULE_CELP8ENC = 0x48,
	SYSMODULE_MUSIC2 = 0x4a,
	SYSMODULE_MUSIC_DEC = 0x4f,

	SYSMODULE_SPURS_JQ = 0x50,
	SYSMODULE_PNGENC = 0x52,
	SYSMODULE_MUSIC_DEC2 = 0x53,
	SYSMODULE_SYNC2 = 0x55,
	SYSMODULE_RUDP = 0x57,
	SYSMODULE_GEM = 0x5a,
	SYSMODULE_GIFDEC = 0xf0a0,
	SYSMODULE_ADEC_MP3 = 0xf01e,
} sysModuleId;


s32 sysModuleLoad(sysModuleId id);
s32 sysModuleUnload(sysModuleId id);
s32 sysModuleIsLoaded(sysModuleId id);


#ifdef __cplusplus
	}
#endif

#endif