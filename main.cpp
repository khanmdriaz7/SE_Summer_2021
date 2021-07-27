#include <cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
    void display(){
          glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
          glClear(GL_COLOR_BUFFER_BIT);
          glBegin(GL_QUADS);

    //black background
          glColor3ub(38, 38, 38);
          glVertex2f(-1.0f, -0.45f);
          glVertex2f(1.0f, -0.45f);
          glVertex2f(1.0f, 1.0f);
          glVertex2f(-1.0f, 1.0f);


          glColor3ub(179, 119, 0);
          glVertex2f(0.0f, -0.5f);//Right square main
          glVertex2f(0.0f, 0.2f);
          glVertex2f(0.75f, 0.2f);
          glVertex2f(0.75f, -0.5f);


          glColor3ub(128, 64, 0);
          glVertex2f(0.79f, 0.2f);//Right UP 1 from down
          glVertex2f(0.76f, 0.35f);
          glVertex2f(-0.045f, 0.35f);
          glVertex2f(0.0f, 0.2f);

          glColor3ub(128, 64, 0);
          glVertex2f(0.78f, 0.35f);//Right UP 2 from down
          glVertex2f(0.74f, 0.50f);
          glVertex2f(-0.085f, 0.50f);
          glVertex2f(-0.045f, 0.35f);

          glColor3ub(128, 64, 0);
          glVertex2f(0.76f, 0.50f);//Right UP 3 from down
          glVertex2f(0.72f, 0.65f);
          glVertex2f(-0.15f, 0.65f);
          glVertex2f(-0.085f, 0.50f);

          glColor3ub(128, 64, 0);
          glVertex2f(0.74f, 0.65f);//Right UP 4 from down
          glVertex2f(0.69f, 0.83f);
          glVertex2f(-0.18f, 0.83f);
          glVertex2f(-0.148f, 0.65f);



          glColor3ub(0, 0, 0);
          glVertex2f(0.0f, 0.17f);//Right square main up black
          glVertex2f(0.0f, 0.2f);
          glVertex2f(0.75f, 0.2f);
          glVertex2f(0.75f, 0.17f);


          glColor3ub(153, 102, 0);
          glVertex2f(0.0f, -0.5f);//Left square main
          glVertex2f(0.0f, 0.2f);
          glVertex2f(-0.31f, 0.2f);
          glVertex2f(-0.31f, -0.5f);



          glColor3ub(0,0,0);//right down black
          glVertex2f(0.0f, -0.5f);
          glVertex2f(0.0f, -0.53f);
          glVertex2f(0.73f, -0.53f);
          glVertex2f(0.73f, -0.5f);

          glColor3ub(179, 119, 0);//right down black lower
          glVertex2f(0.0f, -0.53f);
          glVertex2f(0.0f, -0.63f);
          glVertex2f(0.73f, -0.63f);
          glVertex2f(0.73f, -0.53f);

          glColor3ub(214, 214, 194);//right down blacker lower ash square
          glVertex2f(0.0f, -0.63f);
          glVertex2f(0.0f, -0.83f);
          glVertex2f(0.73f, -0.83f);
          glVertex2f(0.73f, -0.63f);


          glColor3ub(214, 214, 194);//left down  lower ash square
          glVertex2f(0.0f, -0.63f);
          glVertex2f(0.0f, -0.83f);
          glVertex2f(-0.6f, -0.83f);
          glVertex2f(-0.6f, -0.63f);


          glColor3ub(214, 214, 194);//left down  lower ash square 2
          glVertex2f(-0.35f, -0.73f);
          glVertex2f(-0.35f, -0.83f);
          glVertex2f(-0.68f, -0.83f);
          glVertex2f(-0.68f, -0.73f);


          glEnd();


          glBegin (GL_TRIANGLES);//house head left

          glColor3ub(153, 102, 0);
          glVertex2f(0.0f, 0.2f);
          glVertex2f(-0.35f, 0.2f);
          glVertex2f(-0.17f, 0.8f);

          glEnd();

          glBegin(GL_QUADS);

          glColor3ub(0, 0, 0);
          glVertex2f(-0.31f, 0.2f);//Left up black
          glVertex2f(-0.35f, 0.2f);
          glVertex2f(-0.17f, 0.8f);
          glVertex2f(-0.15f, 0.73f);



          glColor3ub(0, 0, 0);
          glVertex2f(-0.31f, 0.2f);//Left up black
          glVertex2f(-0.35f, 0.2f);
          glVertex2f(-0.17f, 0.8f);
          glVertex2f(-0.15f, 0.73f);


          glColor3ub(128, 64, 0);
          glVertex2f(-0.35f, 0.2f);//Left up black side thin border
          glVertex2f(-0.37f, 0.2f);
          glVertex2f(-0.183f, 0.836f);
          glVertex2f(-0.17f, 0.8f);


          glColor3ub(153, 102, 0);//left down stair
          glVertex2f(0.0f, -0.45f);
          glVertex2f(0.0f, -0.63f);
          glVertex2f(-0.45f, -0.63f);
          glVertex2f(-0.45f, -0.45f);


          glColor3ub(153, 102, 0);//left down stair 2
          glVertex2f(-0.55f, -0.63f);
          glVertex2f(0.0f, -0.63f);
          glVertex2f(0.0f, -0.55f);
          glVertex2f(-0.55f, -0.55f);



    glEnd();



    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);


    glVertex2f(0.0f, -0.45f);//left down stair border 1 from up
    glVertex2f(0.0f, -0.63f);

    glVertex2f(-0.45f, -0.55f);//left down stair border 1 from up
    glVertex2f(-0.45f, -0.45f);

    glVertex2f(0.0f, -0.45f);//left down stair border 1 from up
    glVertex2f(-0.45f, -0.45f);

    glVertex2f(-0.2f, -0.55f);//left down stair border 1 from up
    glVertex2f(-0.45f, -0.55f);

    glVertex2f(-0.2f, -0.45f);//left down stair border 1 from up
    glVertex2f(-0.2f, -0.55f);


    //Right square main

    glVertex2f(0.0f, -0.5f);
    glVertex2f(0.75f, -0.5f);

    glVertex2f(0.75f, 0.2f);
    glVertex2f(0.75f, -0.5f);




    glVertex2f(0.79f, 0.2f);//Right up 1 from down
    glVertex2f(0.76f, 0.35f);

    glVertex2f(-0.045f, 0.35f);
    glVertex2f(0.0f, 0.2f);



int main(int argc, char** argv)
  {
      glutInit(&argc, argv);
      glutCreateWindow("OpenGL Setup");
      glutInitWindowSize(320, 320);
      glutDisplayFunc(display);
      glutMainLoop();

      return 0;
}
