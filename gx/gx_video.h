/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2014 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2014 - Daniel De Matteis
 *  Copyright (C) 2012-2014 - Michael Lelli
 * 
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _GX_VIDEO_H__
#define _GX_VIDEO_H__

struct gx_overlay_data
{
   GXTexObj tex;
   float tex_coord[8];
   float vertex_coord[8];
   float alpha_mod;
};

typedef struct gx_video
{
   bool should_resize;
   bool keep_aspect;
   bool double_strike;
   bool rgb32;
   uint32_t *menu_data; // FIXME: Should be const uint16_t*.
   bool rgui_texture_enable;
   rarch_viewport_t vp;
   unsigned scale;
#ifdef HAVE_OVERLAY
   struct gx_overlay_data *overlay;
   unsigned overlays;
   bool overlay_enable;
   bool overlay_full_screen;
#endif
} gx_video_t;

void gx_set_video_mode(void *data, unsigned fbWidth, unsigned lines);
const char *gx_get_video_mode(void);

enum
{
   GX_RESOLUTIONS_512_192 = 0,
   GX_RESOLUTIONS_598_200,
   GX_RESOLUTIONS_640_200,
   GX_RESOLUTIONS_384_224,
   GX_RESOLUTIONS_448_224,
   GX_RESOLUTIONS_480_224,
   GX_RESOLUTIONS_512_224,
   GX_RESOLUTIONS_576_224,
   GX_RESOLUTIONS_608_224,
   GX_RESOLUTIONS_640_224,
   GX_RESOLUTIONS_340_232,
   GX_RESOLUTIONS_512_232,
   GX_RESOLUTIONS_512_236,
   GX_RESOLUTIONS_336_240,
   GX_RESOLUTIONS_384_240,
   GX_RESOLUTIONS_512_240,
   GX_RESOLUTIONS_530_240,
   GX_RESOLUTIONS_640_240,
   GX_RESOLUTIONS_512_384,
   GX_RESOLUTIONS_598_400,
   GX_RESOLUTIONS_640_400,
   GX_RESOLUTIONS_384_448,
   GX_RESOLUTIONS_448_448,
   GX_RESOLUTIONS_480_448,
   GX_RESOLUTIONS_512_448,
   GX_RESOLUTIONS_576_448, 
   GX_RESOLUTIONS_608_448, 
   GX_RESOLUTIONS_640_448, 
   GX_RESOLUTIONS_340_464, 
   GX_RESOLUTIONS_512_464, 
   GX_RESOLUTIONS_512_472, 
   GX_RESOLUTIONS_384_480,
   GX_RESOLUTIONS_512_480,
   GX_RESOLUTIONS_530_480,
   GX_RESOLUTIONS_640_480,
   GX_RESOLUTIONS_LAST,
};

unsigned rgui_gx_resolutions[GX_RESOLUTIONS_LAST][2] = {
   { 512, 192 },
   { 598, 200 },
   { 640, 200 },
   { 384, 224 },
   { 448, 224 },
   { 480, 224 },
   { 512, 224 },
   { 576, 224 },
   { 608, 224 },
   { 640, 224 },
   { 340, 232 },
   { 512, 232 },
   { 512, 236 },
   { 336, 240 },
   { 384, 240 },
   { 512, 240 },
   { 530, 240 },
   { 640, 240 },
   { 512, 384 },
   { 598, 400 },
   { 640, 400 },
   { 384, 448 },
   { 448, 448 },
   { 480, 448 },
   { 512, 448 },
   { 576, 448 },
   { 608, 448 },
   { 640, 448 },
   { 340, 464 },
   { 512, 464 },
   { 512, 472 },
   { 384, 480 },
   { 512, 480 },
   { 530, 480 },
   { 640, 480 },
};

unsigned rgui_current_gx_resolution = GX_RESOLUTIONS_640_480;
#endif

