/*
 * SmartMatrix Library - Common Definitions for Driving Multiplexed Panels
 *
 * Copyright (c) 2015 Louis Beaudoin (Pixelmatix)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef SmartMatrixMultiplexedCommon_h
#define SmartMatrixMultiplexedCommon_h

#define MATRIX_PANEL_HEIGHT (CONVERT_PANELTYPE_TO_MATRIXPANELHEIGHT(panelType))
#define MATRIX_STACK_HEIGHT (matrixHeight / MATRIX_PANEL_HEIGHT)

#define PIXELS_PER_LATCH    ((matrixWidth * matrixHeight) / MATRIX_PANEL_HEIGHT)
#define ROW_PAIR_OFFSET (CONVERT_PANELTYPE_TO_MATRIXROWPAIROFFSET(panelType))

#define SMARTMATRIX_HUB75_32ROW_MOD16SCAN             0
#define SMARTMATRIX_HUB75_16ROW_MOD8SCAN              1

#define CONVERT_PANELTYPE_TO_MATRIXPANELHEIGHT(x)   ((x == SMARTMATRIX_HUB75_32ROW_MOD16SCAN ? 32 : 0) | \
                                                     (x == SMARTMATRIX_HUB75_16ROW_MOD8SCAN ? 16 : 0))

#define CONVERT_PANELTYPE_TO_MATRIXROWPAIROFFSET(x)   ((x == SMARTMATRIX_HUB75_32ROW_MOD16SCAN ? 16 : 0) | \
                                                     (x == SMARTMATRIX_HUB75_16ROW_MOD8SCAN ? 8 : 0))

#define CONVERT_PANELTYPE_TO_MATRIXROWSPERFRAME(x)   ((x == SMARTMATRIX_HUB75_32ROW_MOD16SCAN ? 16 : 0) | \
                                                     (x == SMARTMATRIX_HUB75_16ROW_MOD8SCAN ? 8 : 0))

#define LATCHES_PER_ROW (refreshDepth/COLOR_CHANNELS_PER_PIXEL)
#define ROWS_PER_FRAME (CONVERT_PANELTYPE_TO_MATRIXROWSPERFRAME(panelType))

#define SMARTMATRIX_OPTIONS_NONE                    0
#define SMARTMATRIX_OPTIONS_C_SHAPE_STACKING        (1 << 0)
#define SMARTMATRIX_OPTIONS_BOTTOM_TO_TOP_STACKING  (1 << 1)

#endif