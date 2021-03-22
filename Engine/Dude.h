#pragma once
#include "Graphics.h"

class dude{
public:
   dude();
   void	MoveRight();
   void MoveLeft();
   void MoveUp();
   void MoveDown();
   void Clamp_Screen();
   void Draw(Graphics &gfx);
   int GetX() const;
   int GetY() const;
   int GetWidth() const;
   int getheight() const;
private:
	int x = 400;
	int y = 300;	
	static constexpr int width = 20;
	static constexpr int height = 20;

};
