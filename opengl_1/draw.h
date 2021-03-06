#pragma once
#include <glut.h>
//#include "main.h"
//#include "draw.h"
#include "init.h"
#include "points.h"
#include "Trees.h"
#include "circles.h"

void draw_yy(void)
{
	/* Clears buffers to preset values */
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glColor3i(0, 0, 0);
	glVertex2i(0, 0);
	glVertex2i(0, yc);
	glVertex2i(1000, yc);
	glVertex2i(1000, 0);
	glEnd();
	int r = 400;
	bresenham_circle_yy(r);
	int o = xc;
	r /= 2;
	yin_yang(o, r);

}


void draw_dc(void)
{
	/* Clears buffers to preset values */
	glClear(GL_COLOR_BUFFER_BIT);

	int r = 300;
	bresenham_circle_dc(r);
	int o = xc;
	r /= 2;
	dream_catcher(o, r);

}