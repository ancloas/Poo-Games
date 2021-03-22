#pragma once
#include "Graphics.h"
#include "Dude.h"
class poo {
public:
	//member functions
	poo(int X, int Y, int vx, int vy, dude &d);
	poo();
	void draw(Graphics & gfx);
	void colloide_boundaries(Graphics & gfx);
	void freeze();
	void calculate_pos(Graphics &gfx);
	void GotEaten(dude & dude);
	bool IsEaten();
	//member variables
private:	
	int x;
	int y;
	int dx;
	int dy;
	bool isEaten = false;
	static constexpr int width = 24;
	static constexpr int height = 24;

};
