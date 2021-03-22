#pragma once
#include "Dude.h"
#include "Graphics.h"
class target {
public:
	target(int x, int y);
	void recentre(int X, int Y);
	bool get_touched(dude &dude);
	void draw(Graphics &gfx);

private:
	int x;
	int y;
	const int width=10;
	int height=10;
	Color color;
};