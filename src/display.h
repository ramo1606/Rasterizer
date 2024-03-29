#pragma once

#include "raylib.h"

/* Window Creation and Destroy */
void InitiRaylibWindow(void);
void DestroyRaylibWindow(void);
int GetWindowWidth();
int GetWindowHeight();

/* Drawing Functions */
void RDrawPixel(int x, int y, Color color);
void RDrawLine(int x0, int y0, int x1, int y1, Color color);
void RDrawTriangle(int x0, int y0, int x1, int y1, int x2, int y2, Color color);
void RDrawGrid(Color color);
void RDrawRectangle(int x, int y, int width, int height, Color color);

/* Rendering Functions*/
void ClearColorBuffer(Color color);
void RenderColorBuffer(void);