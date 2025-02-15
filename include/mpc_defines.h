/*
 * (C) 2016-2022 see Authors.txt
 *
 * This file is part of MPC-BE.
 *
 * MPC-BE is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * MPC-BE is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

#define MPC_WND_CLASS_NAMEW L"MPC-BE"

#define KILOBYTE          1024
#define MEGABYTE       1048576
#define GIGABYTE    1073741824

#define INVALID_TIME INT64_MIN

#define GETU16(b) *(UINT16*)(b)
#define GETU32(b) *(UINT32*)(b)
#define GETU64(b) *(UINT64*)(b)

#ifndef FCC
#define FCC(ch4) ((((DWORD)(ch4) & 0xFF) << 24) |     \
                  (((DWORD)(ch4) & 0xFF00) << 8) |    \
                  (((DWORD)(ch4) & 0xFF0000) >> 8) |  \
                  (((DWORD)(ch4) & 0xFF000000) >> 24))
#endif

#define SCALE64(a, b, c) (__int64)((double)(a) * (b) / (c)) // very fast, but it can give a small rounding error

#define ALIGN(x, a)           __ALIGN_MASK(x,(decltype(x))(a)-1)
#define __ALIGN_MASK(x, mask) (((x)+(mask))&~(mask))

#define SAFE_DELETE(p)       { if (p) { delete (p);     (p) = nullptr; } }
#define SAFE_DELETE_ARRAY(p) { if (p) { delete [] (p);  (p) = nullptr; } }

#define PCIV_ATI         0x1002
#define PCIV_nVidia      0x10DE
#define PCIV_Intel       0x8086
#define PCIV_S3_Graphics 0x5333

// non-standard values for Transfer Matrix
#define VIDEOTRANSFERMATRIX_FCC   6
#define VIDEOTRANSFERMATRIX_YCgCo 7

// some FOURCCs
#define FOURCC_YUV444P16 MAKEFOURCC('Y','3',0,16)
#define FOURCC_RGB48     MAKEFOURCC('R','G','B',48)
