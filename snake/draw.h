
#ifndef _DRAW_H_
#define _DRAW_H_ 
#include "gl/glut.h"
#include<vector>
#include"set.h"
using namespace std;
extern struct strucPos;

class Draw
{
public:
	void DrawString(void *font, const char s[], float x, float y);
	 void DrawGrid();
	 void DrawSnake( vector<strucPos> &  body) ;
	 void DrawFood(strucPos foodpos);

	 void DrawWall();
	 void gameOver(int goalNum);
	 void myReshape(GLsizei w, GLsizei h);
	 void myDisplay(void);
	 Draw();
	 ~Draw();
};

#endif

