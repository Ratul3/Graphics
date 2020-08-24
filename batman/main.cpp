#include <windows.h>
#include <GL/glut.h>

void initGL() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.9f, 0.3f);
    glVertex2f(-2.8f, 0.3f);
    glVertex2f(-2.8f, 0.8f);
    glVertex2f(-2.9f, 0.8f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.8f, 0.2f);
    glVertex2f(-2.7f, 0.2f);
    glVertex2f(-2.7f, 0.9f);
    glVertex2f(-2.8f, 0.9f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //3
    glVertex2f(-2.7f, 0.1f);
    glVertex2f(-2.6f, 0.1f);
    glVertex2f(-2.6f, 1.0f);
    glVertex2f(-2.7f, 1.0f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //4
    glVertex2f(-2.6f, 0.0f);
    glVertex2f(-2.5f, 0.0f);
    glVertex2f(-2.5f, 1.1f);
    glVertex2f(-2.6f, 1.1f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //5
    glVertex2f(-2.5f, -0.1f);
    glVertex2f(-2.4f, -0.1f);
    glVertex2f(-2.4f, 1.2f);
    glVertex2f(-2.5f, 1.2f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //6
    glVertex2f(-2.4f, -0.2f);
    glVertex2f(-2.3f, -0.2f);
    glVertex2f(-2.3f, 1.3f);
    glVertex2f(-2.4f, 1.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.4f, -0.4f);
    glVertex2f(-2.3f, -0.4f);
    glVertex2f(-2.3f, -0.2f);
    glVertex2f(-2.4f, -0.2f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.4f, -0.5f);
    glVertex2f(-2.3f, -0.5f);
    glVertex2f(-2.3f, -0.4f);
    glVertex2f(-2.4f, -0.4f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.4f, 1.3f);
    glVertex2f(-2.3f, 1.3f);
    glVertex2f(-2.3f, 1.5f);
    glVertex2f(-2.4f, 1.5f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.4f, 1.5f);
    glVertex2f(-2.3f, 1.5f);
    glVertex2f(-2.3f, 1.6f);
    glVertex2f(-2.4f, 1.6f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //7
    glVertex2f(-2.3f, -0.2f);
    glVertex2f(-2.2f, -0.2f);
    glVertex2f(-2.2f, 1.3f);
    glVertex2f(-2.3f, 1.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //8
    glVertex2f(-2.2f, -0.3f);
    glVertex2f(-2.1f, -0.3f);
    glVertex2f(-2.1f, 0.9f);
    glVertex2f(-2.2f, 0.9f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //9
    glVertex2f(-2.1f, -0.1f);
    glVertex2f(-2.0f, -0.1f);
    glVertex2f(-2.0f, 0.8f);
    glVertex2f(-2.1f, 0.8f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //10
    glVertex2f(-2.0f, 0.0f);
    glVertex2f(-1.9f, 0.0f);
    glVertex2f(-1.9f, 0.8f);
    glVertex2f(-2.0f, 0.8f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //11
    glVertex2f(-1.9f, 0.1f);
    glVertex2f(-1.8f, 0.1f);
    glVertex2f(-1.8f, 0.9f);
    glVertex2f(-1.9f, 0.9f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //12
    glVertex2f(-1.8f, 0.0f);
    glVertex2f(-1.7f, 0.0f);
    glVertex2f(-1.7f, 1.4f);
    glVertex2f(-1.8f, 1.4f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //13
    glVertex2f(-1.7f, -0.2f);
    glVertex2f(-1.6f, -0.2f);
    glVertex2f(-1.6f, 1.3f);
    glVertex2f(-1.7f, 1.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //14
    glVertex2f(-1.6f, -0.3f);
    glVertex2f(-1.5f, -0.3f);
    glVertex2f(-1.5f, 1.3f);
    glVertex2f(-1.6f, 1.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //15
    glVertex2f(-1.5f, -0.2f);
    glVertex2f(-1.4f, -0.2f);
    glVertex2f(-1.4f, 1.3f);
    glVertex2f(-1.5f, 1.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //16
    glVertex2f(-1.4f, 0.0f);
    glVertex2f(-1.3f, 0.0f);
    glVertex2f(-1.3f, 1.4f);
    glVertex2f(-1.4f, 1.4f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //17
    glVertex2f(-1.3f, 0.1f);
    glVertex2f(-1.2f, 0.1f);
    glVertex2f(-1.2f, 0.9f);
    glVertex2f(-1.3f, 0.9f);

glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //18
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(-1.1f, 0.0f);
    glVertex2f(-1.1f, 0.8f);
    glVertex2f(-1.2f, 0.8f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //19
    glVertex2f(-1.1f, -0.1f);
    glVertex2f(-1.0f, -0.1f);
    glVertex2f(-1.0f, 0.8f);
    glVertex2f(-1.1f, 0.8f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //20
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-0.9f, 0.9f);
    glVertex2f(-1.0f, 0.9f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //21
    glVertex2f(-0.9f, -0.2f);
    glVertex2f(-0.8f, -0.2f);
    glVertex2f(-0.8f, 1.3f);
    glVertex2f(-0.9f, 1.3f);

glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //22
    glVertex2f(-0.8f, -0.2f);
    glVertex2f(-0.7f, -0.2f);
    glVertex2f(-0.7f, 1.3f);
    glVertex2f(-0.8f, 1.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //23
    glVertex2f(-0.7f, -0.1f);
    glVertex2f(-0.6f, -0.1f);
    glVertex2f(-0.6f, 1.2f);
    glVertex2f(-0.7f, 1.2f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //24
    glVertex2f(-0.6f, 0.0f);
    glVertex2f(-0.5f, 0.0f);
    glVertex2f(-0.5f, 1.1f);
    glVertex2f(-0.6f, 1.1f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //25
    glVertex2f(-0.5f, 0.1f);
    glVertex2f(-0.4f, 0.1f);
    glVertex2f(-0.4f, 1.0f);
    glVertex2f(-0.5f, 1.0f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //26
    glVertex2f(-0.4f, 0.2f);
    glVertex2f(-0.3f, 0.2f);
    glVertex2f(-0.3f, 0.9f);
    glVertex2f(-0.4f, 0.9f);

glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);  //27
    glVertex2f(-0.3f, 0.3f);
    glVertex2f(-0.2f, 0.3f);
    glVertex2f(-0.2f, 0.8f);
    glVertex2f(-0.3f, 0.8f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.2f, 0.2f);
    glVertex2f(-0.1f, 0.2f);
    glVertex2f(-0.1f, 0.9f);
    glVertex2f(-0.2f, 0.9f);

glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.1f, 0.2f);
    glVertex2f(0.0f, 0.2f);
    glVertex2f(0.0f, 0.9f);
    glVertex2f(-0.1f, 0.9f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.1f, 0.1f);
    glVertex2f(-0.1f, 0.2f);
    glVertex2f(-0.2f, 0.2f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.2f, 0.9f);
    glVertex2f(-0.1f, 0.9f);
    glVertex2f(-0.1f, 1.0f);
    glVertex2f(-0.2f, 1.0f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.3f, 0.0f);
    glVertex2f(-0.2f, 0.0f);
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.3f, 0.1f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.3f, 0.1f);
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.2f, 0.3f);
    glVertex2f(-0.3f, 0.3f);

glEnd();



glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.3f, 1.0f);
    glVertex2f(-0.2f, 1.0f);
    glVertex2f(-0.2f, 1.1f);
    glVertex2f(-0.3f, 1.1f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.3f, 0.8f);
    glVertex2f(-0.2f, 0.8f);
    glVertex2f(-0.2f, 1.0f);
    glVertex2f(-0.3f, 1.0f);

glEnd();




glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.4f, -0.1f);
    glVertex2f(-0.3f, -0.1f);
    glVertex2f(-0.3f, 0.0f);
    glVertex2f(-0.4f, 0.0f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-0.3f, 0.0f);
    glVertex2f(-0.3f, 0.2f);
    glVertex2f(-0.4f, 0.2f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.4f, 1.1f);
    glVertex2f(-0.3f, 1.1f);
    glVertex2f(-0.3f, 1.2f);
    glVertex2f(-0.4f, 1.2f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.4f, 0.9f);
    glVertex2f(-0.3f, 0.9f);
    glVertex2f(-0.3f, 1.1f);
    glVertex2f(-0.4f, 1.1f);

glEnd();



glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.5f, -0.2f);
    glVertex2f(-0.4f, -0.2f);
    glVertex2f(-0.4f, -0.1f);
    glVertex2f(-0.5f, -0.1f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.5f, -0.1f);
    glVertex2f(-0.4f, -0.1f);
    glVertex2f(-0.4f, 0.1f);
    glVertex2f(-0.5f, 0.1f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.5f, 1.2f);
    glVertex2f(-0.4f, 1.2f);
    glVertex2f(-0.4f, 1.3f);
    glVertex2f(-0.5f, 1.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.5f, 1.0f);
    glVertex2f(-0.4f, 1.0f);
    glVertex2f(-0.4f, 1.2f);
    glVertex2f(-0.5f, 1.2f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.6f, -0.3f);
    glVertex2f(-0.5f, -0.3f);
    glVertex2f(-0.5f, -0.2f);
    glVertex2f(-0.6f, -0.2f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.6f, -0.2f);
    glVertex2f(-0.5f, -0.2f);
    glVertex2f(-0.5f, 0.0f);
    glVertex2f(-0.6f, 0.0f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.6f, 1.3f);
    glVertex2f(-0.5f, 1.3f);
    glVertex2f(-0.5f, 1.4f);
    glVertex2f(-0.6f, 1.4f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.6f, 1.1f);
    glVertex2f(-0.5f, 1.1f);
    glVertex2f(-0.5f, 1.3f);
    glVertex2f(-0.6f, 1.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.6f, -0.4f);
    glVertex2f(-0.6f, -0.3f);
    glVertex2f(-0.7f, -0.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.7f, -0.3f);
    glVertex2f(-0.6f, -0.3f);
    glVertex2f(-0.6f, -0.1f);
    glVertex2f(-0.7f, -0.1f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 1.4f);
    glVertex2f(-0.6f, 1.4f);
    glVertex2f(-0.6f, 1.5f);
    glVertex2f(-0.7f, 1.5f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.7f, 1.2f);
    glVertex2f(-0.6f, 1.2f);
    glVertex2f(-0.6f, 1.4f);
    glVertex2f(-0.7f, 1.4f);

glEnd();





glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.9f, -0.5f);
    glVertex2f(-0.8f, -0.5f);
    glVertex2f(-0.8f, -0.4f);
    glVertex2f(-0.9f, -0.4f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.9f, -0.4f);
    glVertex2f(-0.8f, -0.4f);
    glVertex2f(-0.8f, -0.2f);
    glVertex2f(-0.9f, -0.2f);

glEnd();



glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.9f, 1.5f);
    glVertex2f(-0.8f, 1.5f);
    glVertex2f(-0.8f, 1.6f);
    glVertex2f(-0.9f, 1.6f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.8f, 1.3f);
    glVertex2f(-0.7f, 1.3f);
    glVertex2f(-0.7f, 1.5f);
    glVertex2f(-0.8f, 1.5f);

glEnd();





glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.8f, -0.5f);
    glVertex2f(-0.7f, -0.5f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.8f, -0.4f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.8f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f, -0.2f);
    glVertex2f(-0.8f, -0.2f);

glEnd();



glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.8f, 1.5f);
    glVertex2f(-0.7f, 1.5f);
    glVertex2f(-0.7f, 1.6f);
    glVertex2f(-0.8f, 1.6f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.9f, 1.3f);
    glVertex2f(-0.8f, 1.3f);
    glVertex2f(-0.8f, 1.5f);
    glVertex2f(-0.9f, 1.5f);

glEnd();



glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, -0.5f);
    glVertex2f(-0.9f, -0.5f);
    glVertex2f(-0.9f, -0.4f);
    glVertex2f(-1.0f, -0.4f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.0f, -0.4f);
    glVertex2f(-0.9f, -0.4f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-1.0f, -0.3f);

glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, 1.5f);
    glVertex2f(-0.9f, 1.5f);
    glVertex2f(-0.9f, 1.6f);
    glVertex2f(-1.0f, 1.6f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.0f, 1.3f);
    glVertex2f(-0.9f, 1.3f);
    glVertex2f(-0.9f, 1.5f);
    glVertex2f(-1.0f, 1.5f);

glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, 1.2f);
    glVertex2f(-0.9f, 1.2f);
    glVertex2f(-0.9f, 1.3f);
    glVertex2f(-1.0f, 1.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.0f, 0.9f);
    glVertex2f(-0.9f, 0.9f);
    glVertex2f(-0.9f, 1.2f);
    glVertex2f(-1.0f, 1.2f);

glEnd();




glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.1f, -0.5f);
    glVertex2f(-1.0f, -0.5f);
    glVertex2f(-1.0f, -0.4f);
    glVertex2f(-1.1f, -0.4f);

glEnd();



glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.1f, -0.4f);
    glVertex2f(-1.0f, -0.4f);
    glVertex2f(-1.0f, -0.1f);
    glVertex2f(-1.1f, -0.1f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.1f, 1.5f);
    glVertex2f(-1.0f, 1.5f);
    glVertex2f(-1.0f, 1.6f);
    glVertex2f(-1.1f, 1.6f);

glEnd();



glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.1f, 0.8f);
    glVertex2f(-1.0f, 0.8f);
    glVertex2f(-1.0f, 1.5f);
    glVertex2f(-1.1f, 1.5f);

glEnd();





glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.2f, -0.5f);
    glVertex2f(-1.1f, -0.5f);
    glVertex2f(-1.1f, -0.4f);
    glVertex2f(-1.2f, -0.4f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.2f, -0.4f);
    glVertex2f(-1.1f, -0.4f);
    glVertex2f(-1.1f, 0.0f);
    glVertex2f(-1.2f, 0.0f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.2f, 1.5f);
    glVertex2f(-1.1f, 1.5f);
    glVertex2f(-1.1f, 1.6f);
    glVertex2f(-1.2f, 1.6f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.2f, 0.8f);
    glVertex2f(-1.1f, 0.8f);
    glVertex2f(-1.1f, 1.5f);
    glVertex2f(-1.2f, 1.5f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.3f, -0.5f);
    glVertex2f(-1.2f, -0.5f);
    glVertex2f(-1.2f, -0.4f);
    glVertex2f(-1.3f, -0.4f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.3f, -0.4f);
    glVertex2f(-1.2f, -0.4f);
    glVertex2f(-1.2f, 0.1f);
    glVertex2f(-1.3f, 0.1f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.3f, 1.5f);
    glVertex2f(-1.2f, 1.5f);
    glVertex2f(-1.2f, 1.6f);
    glVertex2f(-1.3f, 1.6f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.3f, 0.9f);
    glVertex2f(-1.2f, 0.9f);
    glVertex2f(-1.2f, 1.5f);
    glVertex2f(-1.3f, 1.5f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.4f, -0.5f);
    glVertex2f(-1.3f, -0.5f);
    glVertex2f(-1.3f, -0.4f);
    glVertex2f(-1.4f, -0.4f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.4f, -0.4f);
    glVertex2f(-1.3f, -0.4f);
    glVertex2f(-1.3f, 0.0f);
    glVertex2f(-1.4f, 0.0f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.4f, 1.5f);
    glVertex2f(-1.3f, 1.5f);
    glVertex2f(-1.3f, 1.6f);
    glVertex2f(-1.4f, 1.6f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.4f, 1.4f);
    glVertex2f(-1.3f, 1.4f);
    glVertex2f(-1.3f, 1.5f);
    glVertex2f(-1.4f, 1.5f);

glEnd();



glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.5f, -0.5f);
    glVertex2f(-1.4f, -0.5f);
    glVertex2f(-1.4f, -0.4f);
    glVertex2f(-1.5f, -0.4f);

glEnd();



glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.5f, -0.4f);
    glVertex2f(-1.4f, -0.4f);
    glVertex2f(-1.4f, -0.2f);
    glVertex2f(-1.5f, -0.2f);

glEnd();



glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.5f, 1.5f);
    glVertex2f(-1.4f, 1.5f);
    glVertex2f(-1.4f, 1.6f);
    glVertex2f(-1.5f, 1.6f);

glEnd();




glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.5f, 1.3f);
    glVertex2f(-1.4f, 1.3f);
    glVertex2f(-1.4f, 1.5f);
    glVertex2f(-1.5f, 1.5f);

glEnd();





glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.6f, -0.5f);
    glVertex2f(-1.5f, -0.5f);
    glVertex2f(-1.5f, -0.4f);
    glVertex2f(-1.6f, -0.4f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.6f, -0.4f);
    glVertex2f(-1.5f, -0.4f);
    glVertex2f(-1.5f, -0.3f);
    glVertex2f(-1.6f, -0.3f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.6f, 1.3f);
    glVertex2f(-1.5f, 1.3f);
    glVertex2f(-1.5f, 1.5f);
    glVertex2f(-1.6f, 1.5f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.6f, 1.5f);
    glVertex2f(-1.5f, 1.5f);
    glVertex2f(-1.5f, 1.6f);
    glVertex2f(-1.6f, 1.6f);

glEnd();



glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.7f, -0.4f);
    glVertex2f(-1.6f, -0.4f);
    glVertex2f(-1.6f, -0.2f);
    glVertex2f(-1.7f, -0.2f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.7f, -0.5f);
    glVertex2f(-1.6f, -0.5f);
    glVertex2f(-1.6f, -0.4f);
    glVertex2f(-1.7f, -0.4f);

glEnd();





glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.7f, 1.3f);
    glVertex2f(-1.6f, 1.3f);
    glVertex2f(-1.6f, 1.5f);
    glVertex2f(-1.7f, 1.5f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.7f, 1.5f);
    glVertex2f(-1.6f, 1.5f);
    glVertex2f(-1.6f, 1.6f);
    glVertex2f(-1.7f, 1.6f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.8f, -0.4f);
    glVertex2f(-1.7f, -0.4f);
    glVertex2f(-1.7f, 0.0f);
    glVertex2f(-1.8f, 0.0f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.8f, -0.5f);
    glVertex2f(-1.7f, -0.5f);
    glVertex2f(-1.7f, -0.4f);
    glVertex2f(-1.8f, -0.4f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.8f, 1.4f);
    glVertex2f(-1.7f, 1.4f);
    glVertex2f(-1.7f, 1.5f);
    glVertex2f(-1.8f, 1.5f);

glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.8f, 1.5f);
    glVertex2f(-1.7f, 1.5f);
    glVertex2f(-1.7f, 1.6f);
    glVertex2f(-1.8f, 1.6f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.9f, -0.4f);
    glVertex2f(-1.8f, -0.4f);
    glVertex2f(-1.8f, 0.1f);
    glVertex2f(-1.9f, 0.1f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.9f, -0.5f);
    glVertex2f(-1.8f, -0.5f);
    glVertex2f(-1.8f, -0.4f);
    glVertex2f(-1.9f, -0.4f);

glEnd();




glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-1.9f, 0.9f);
    glVertex2f(-1.8f, 0.9f);
    glVertex2f(-1.8f, 1.5f);
    glVertex2f(-1.9f, 1.5f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.9f, 1.5f);
    glVertex2f(-1.8f, 1.5f);
    glVertex2f(-1.8f, 1.6f);
    glVertex2f(-1.9f, 1.6f);

glEnd();
glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.0f, -0.4f);
    glVertex2f(-1.9f, -0.4f);
    glVertex2f(-1.9f, 0.0f);
    glVertex2f(-2.0f, 0.0f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.0f, -0.5f);
    glVertex2f(-1.9f, -0.5f);
    glVertex2f(-1.9f, -0.4f);
    glVertex2f(-2.0f, -0.4f);

glEnd();



glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.0f, 0.8f);
    glVertex2f(-1.9f, 0.8f);
    glVertex2f(-1.9f, 1.5f);
    glVertex2f(-2.0f, 1.5f);

glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.0f, 1.5f);
    glVertex2f(-1.9f, 1.5f);
    glVertex2f(-1.9f, 1.6f);
    glVertex2f(-2.0f, 1.6f);

glEnd();




glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.1f, -0.4f);
    glVertex2f(-2.0f, -0.4f);
    glVertex2f(-2.0f, -0.1f);
    glVertex2f(-2.1f, -0.1f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.1f, -0.5f);
    glVertex2f(-2.0f, -0.5f);
    glVertex2f(-2.0f, -0.4f);
    glVertex2f(-2.1f, -0.4f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.1f, 0.8f);
    glVertex2f(-2.0f, 0.8f);
    glVertex2f(-2.0f, 1.5f);
    glVertex2f(-2.1f, 1.5f);

glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.1f, 1.5f);
    glVertex2f(-2.0f, 1.5f);
    glVertex2f(-2.0f, 1.6f);
    glVertex2f(-2.1f, 1.6f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.1f, 0.8f);
    glVertex2f(-2.0f, 0.8f);
    glVertex2f(-2.0f, 1.5f);
    glVertex2f(-2.1f, 1.5f);

glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.1f, 1.5f);
    glVertex2f(-2.0f, 1.5f);
    glVertex2f(-2.0f, 1.6f);
    glVertex2f(-2.1f, 1.6f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.1f, -0.4f);
    glVertex2f(-2.0f, -0.4f);
    glVertex2f(-2.0f, -0.1f);
    glVertex2f(-2.1f, -0.1f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.1f, -0.5f);
    glVertex2f(-2.0f, -0.5f);
    glVertex2f(-2.0f, -0.4f);
    glVertex2f(-2.1f, -0.4f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.2f, -0.4f);
    glVertex2f(-2.1f, -0.4f);
    glVertex2f(-2.1f, -0.3f);
    glVertex2f(-2.2f, -0.3f);

glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.2f, -0.5f);
    glVertex2f(-2.1f, -0.5f);
    glVertex2f(-2.1f, -0.4f);
    glVertex2f(-2.2f, -0.4f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.2f, 0.9f);
    glVertex2f(-2.1f, 0.9f);
    glVertex2f(-2.1f, 1.2f);
    glVertex2f(-2.2f, 1.2f);

glEnd();



glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.2f, 1.2f);
    glVertex2f(-2.1f, 1.2f);
    glVertex2f(-2.1f, 1.3f);
    glVertex2f(-2.2f, 1.3f);

glEnd();



glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.2f, 1.3f);
    glVertex2f(-2.1f, 1.3f);
    glVertex2f(-2.1f, 1.5f);
    glVertex2f(-2.2f, 1.5f);

glEnd();



glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.2f, 1.5f);
    glVertex2f(-2.1f, 1.5f);
    glVertex2f(-2.1f, 1.6f);
    glVertex2f(-2.2f, 1.6f);

glEnd();



glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.3f, -0.4f);
    glVertex2f(-2.2f, -0.4f);
    glVertex2f(-2.2f, -0.2f);
    glVertex2f(-2.3f, -0.2f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.3f, -0.5f);
    glVertex2f(-2.2f, -0.5f);
    glVertex2f(-2.2f, -0.4f);
    glVertex2f(-2.3f, -0.4f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.3f, 1.3f);
    glVertex2f(-2.2f, 1.3f);
    glVertex2f(-2.2f, 1.5f);
    glVertex2f(-2.3f, 1.5f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.3f, 1.5f);
    glVertex2f(-2.2f, 1.5f);
    glVertex2f(-2.2f, 1.6f);
    glVertex2f(-2.3f, 1.6f);

glEnd();






glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.5f, -0.3f);
    glVertex2f(-2.4f, -0.3f);
    glVertex2f(-2.4f, -0.1f);
    glVertex2f(-2.5f, -0.1f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.5f, -0.4f);
    glVertex2f(-2.4f, -0.4f);
    glVertex2f(-2.4f, -0.3f);
    glVertex2f(-2.5f, -0.3f);

glEnd();




glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.5f, 1.2f);
    glVertex2f(-2.4f, 1.2f);
    glVertex2f(-2.4f, 1.4f);
    glVertex2f(-2.5f, 1.4f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.5f, 1.4f);
    glVertex2f(-2.4f, 1.4f);
    glVertex2f(-2.4f, 1.5f);
    glVertex2f(-2.5f, 1.5f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.6f, -0.2f);
    glVertex2f(-2.5f, -0.2f);
    glVertex2f(-2.5f, 0.0f);
    glVertex2f(-2.6f, 0.0f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.6f, -0.3f);
    glVertex2f(-2.5f, -0.3f);
    glVertex2f(-2.5f, -0.2f);
    glVertex2f(-2.6f, -0.2f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.6f, 1.1f);
    glVertex2f(-2.5f, 1.1f);
    glVertex2f(-2.5f, 1.3f);
    glVertex2f(-2.6f, 1.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.6f, 1.3f);
    glVertex2f(-2.5f, 1.3f);
    glVertex2f(-2.5f, 1.4f);
    glVertex2f(-2.6f, 1.4f);

glEnd();



glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.7f, -0.1f);
    glVertex2f(-2.6f, -0.1f);
    glVertex2f(-2.6f, 0.1f);
    glVertex2f(-2.7f, 0.1f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.7f, -0.2f);
    glVertex2f(-2.6f, -0.2f);
    glVertex2f(-2.6f, -0.1f);
    glVertex2f(-2.7f, -0.1f);

glEnd();



glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.7f, 1.0f);
    glVertex2f(-2.6f, 1.0f);
    glVertex2f(-2.6f, 1.2f);
    glVertex2f(-2.7f, 1.2f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.7f, 1.2f);
    glVertex2f(-2.6f, 1.2f);
    glVertex2f(-2.6f, 1.3f);
    glVertex2f(-2.7f, 1.3f);

glEnd();



glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.8f, 0.0f);
    glVertex2f(-2.7f, 0.0f);
    glVertex2f(-2.7f, 0.2f);
    glVertex2f(-2.8f, 0.2f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.8f, -0.1f);
    glVertex2f(-2.7f, -0.1f);
    glVertex2f(-2.7f, 0.0f);
    glVertex2f(-2.8f, 0.0f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.8f, 0.9f);
    glVertex2f(-2.7f, 0.9f);
    glVertex2f(-2.7f, 1.1f);
    glVertex2f(-2.8f, 1.1f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.8f, 1.1f);
    glVertex2f(-2.7f, 1.1f);
    glVertex2f(-2.7f, 1.2f);
    glVertex2f(-2.8f, 1.2f);

glEnd();



glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.9f, 0.1f);
    glVertex2f(-2.8f, 0.1f);
    glVertex2f(-2.8f, 0.3f);
    glVertex2f(-2.9f, 0.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.9f, 0.0f);
    glVertex2f(-2.8f, 0.0f);
    glVertex2f(-2.8f, 0.1f);
    glVertex2f(-2.9f, 0.1f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-2.9f, 0.8f);
    glVertex2f(-2.8f, 0.8f);
    glVertex2f(-2.8f, 1.0f);
    glVertex2f(-2.9f, 1.0f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-2.9f, 1.0f);
    glVertex2f(-2.8f, 1.0f);
    glVertex2f(-2.8f, 1.1f);
    glVertex2f(-2.9f, 1.1f);

glEnd();





glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-3.0f, 0.2f);
    glVertex2f(-2.9f, 0.2f);
    glVertex2f(-2.9f, 0.9f);
    glVertex2f(-3.0f, 0.9f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-3.0f, 0.9f);
    glVertex2f(-2.9f, 0.9f);
    glVertex2f(-2.9f, 1.0f);
    glVertex2f(-3.0f, 1.0f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-3.0f, 0.1f);
    glVertex2f(-2.9f, 0.1f);
    glVertex2f(-2.9f, 0.2f);
    glVertex2f(-3.0f, 0.2f);

glEnd();




glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-3.1f, 0.2f);
    glVertex2f(-3.0f, 0.2f);
    glVertex2f(-3.0f, 0.9f);
    glVertex2f(-3.1f, 0.9f);

glEnd();




    glFlush();
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);          // Initialize GLUT
    glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
    glutInitWindowSize(320, 320);// Set the window's initial width & height

   glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
gluOrtho2D(-4,1,-2,3);
    glutDisplayFunc(display);       // Register callback handler for window re-paint event
    initGL();                       // Our own OpenGL initialization
    glutMainLoop();                 // Enter the event-processing loop
    return 0;
}











