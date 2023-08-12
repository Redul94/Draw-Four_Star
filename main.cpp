#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0.0, 100.0, 0.0, 100.0, -1.0, 1.0);
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}
void star(int x,int y,int c1,int c2,int c3){
    glColor3f( c1 ,c2, c3);
   glBegin(GL_POLYGON);
   glVertex2i(x+53,y+42);
   glVertex2i(x+56,y+34);
   glVertex2i(x+59,y+42);
   glVertex2i(x+67,y+45);
   glVertex2i(x+59,y+48);
   glVertex2i(x+56,y+56);
   glVertex2i(x+53,y+48);
   glVertex2i(x+45,y+45);
   glEnd();

}


void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //left

   star(0,0,1,0,0);
   star(21,0,1,1,0);
   star(10,11,1,1,1);
   star(10,-11,0,.5,1);


   //right


   //top
  /* glClear(GL_COLOR_BUFFER_BIT);
   glColor3f( 1 ,1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(53,30);
   glVertex2i(56,34);
   glVertex2i(59,42);
   glVertex2i(67,45);
   glVertex2i(59,48);
   glVertex2i(56,56);
   glVertex2i(53,48);
   glVertex2i(45,45);
   glEnd();

   //buttom
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f( 1 ,1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(53,42);
   glVertex2i(56,34);
   glVertex2i(59,42);
   glVertex2i(67,45);
   glVertex2i(59,48);
   glVertex2i(56,56);
   glVertex2i(53,48);
   glVertex2i(45,45);
   glEnd();
*/

// Write your Code


glutSwapBuffers();
}

int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Lab Final");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
