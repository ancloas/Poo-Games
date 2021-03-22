#include "Target.h"
#include "Game.h"

target::target(int X, int Y)
	: color(255,0,0)
{
	x = X;
	y = Y;
}

void target::recentre(int X, int Y)
{
	x = X;
	y = Y;
}

bool target::get_touched(dude & dude)
{
	int dude_right = dude.GetX() + dude.GetWidth();
	int dude_bottom = dude.GetY() + dude.getheight();
	int target_right = x + width;
	int target_bottom = y + height;
	return ((dude_right >= x) && (target_right >= dude.GetX()) && (dude.GetY() <= target_bottom) && (y <= dude_bottom));
}

void target::draw(Graphics &gfx)
{
	if (color.GetR() == 0)
	{
		color.SetR(255);
		color.SetB(0);
	}
	else {
		if (color.GetG() == 0)
		{
			color.SetG(255);
			color.SetR(0);
		}
		else {
			color.SetB(255);
			color.SetG(0);
		}
	}
	gfx.DrawRectangle(x, y, width, height, color);
}
