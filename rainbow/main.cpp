#include <windows.h>
#include <GL/glut.h>

void initGL() {

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(-0.9f, 0.8f);
    glVertex2f(0.9f, 0.8f);
    glVertex2f(0.9f, 0.9f);
    glVertex2f(-0.9f, 0.9f);

glEnd();

  glBegin(GL_QUADS);
   glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.9f, 0.7f);
    glVertex2f(0.9f, 0.7f);
    glVertex2f(0.9f, 0.8f);
    glVertex2f(-0.9f, 0.8f);

glEnd();

  glBegin(GL_QUADS);
glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
    glVertex2f(-0.9f, 0.6f);
    glVertex2f(0.9f, 0.6f);
    glVertex2f(0.9f, 0.7f);
    glVertex2f(-0.9f, 0.7f);

glEnd();

 glBegin(GL_QUADS);
   glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.9f, 0.5f);
    glVertex2f(0.9f, 0.5f);
    glVertex2f(0.9f, 0.6f);
    glVertex2f(-0.9f, 0.6f);

glEnd();


glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.9f, 0.4f);
    glVertex2f(0.9f, 0.4f);
    glVertex2f(0.9f, 0.5f);
    glVertex2f(-0.9f, 0.5f);

glEnd();

glBegin(GL_QUADS);
   glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f(-0.9f, 0.3f);
    glVertex2f(0.9f, 0.3f);
    glVertex2f(0.9f, 0.4f);
    glVertex2f(-0.9f, 0.4f);

glEnd();


glBegin(GL_QUADS);
  glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
    glVertex2f(-0.9f, 0.2f);
    glVertex2f(0.9f, 0.2f);
    glVertex2f(0.9f, 0.3f);
    glVertex2f(-0.9f, 0.3f);

glEnd();


    glFlush();
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);          // Initialize GLUT
    glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
    glutInitWindowSize(320, 320);// Set the window's initial width & height

   glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
    glutDisplayFunc(display);       // Register callback handler for window re-paint event
    initGL();                       // Our own OpenGL initialization
    glutMainLoop();                 // Enter the event-processing loop
    return 0;
}











