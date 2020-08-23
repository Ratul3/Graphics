#include <windows.h>
#include <GL/glut.h>

void initGL() {

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //1 w
    glVertex2f(-0.9f, 0.8f);
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.8f, 0.9f);
    glVertex2f(-0.9f, 0.9f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //2 b
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.7f, 0.8f);
    glVertex2f(-0.7f, 0.9f);
    glVertex2f(-0.8f, 0.9f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //3 w
    glVertex2f(-0.7f, 0.8f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.6f, 0.9f);
    glVertex2f(-0.7f, 0.9f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //4 b
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.5f, 0.8f);
    glVertex2f(-0.5f, 0.9f);
    glVertex2f(-0.6f, 0.9f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //5 w
    glVertex2f(-0.5f, 0.8f);
    glVertex2f(-0.4f, 0.8f);
    glVertex2f(-0.4f, 0.9f);
    glVertex2f(-0.5f, 0.9f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //6 b
    glVertex2f(-0.4f, 0.8f);
    glVertex2f(-0.3f, 0.8f);
    glVertex2f(-0.3f, 0.9f);
    glVertex2f(-0.4f, 0.9f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //7 w
    glVertex2f(-0.3f, 0.8f);
    glVertex2f(-0.2f, 0.8f);
    glVertex2f(-0.2f, 0.9f);
    glVertex2f(-0.3f, 0.9f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //8 b
    glVertex2f(-0.2f, 0.8f);
    glVertex2f(-0.1f, 0.8f);
    glVertex2f(-0.1f, 0.9f);
    glVertex2f(-0.2f, 0.9f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //2nd line 1 b
    glVertex2f(-0.9f, 0.7f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.9f, 0.8f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //2nd line 2 w
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.7f, 0.8f);
    glVertex2f(-0.8f, 0.8f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //2nd line 3 b
    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.6f, 0.7f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.7f, 0.8f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //2nd line 4 w
    glVertex2f(-0.6f, 0.7f);
    glVertex2f(-0.5f, 0.7f);
    glVertex2f(-0.5f, 0.8f);
    glVertex2f(-0.6f, 0.8f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //2nd line 5 b
    glVertex2f(-0.5f, 0.7f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.4f, 0.8f);
    glVertex2f(-0.5f, 0.8f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //2nd line 6 w
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.3f, 0.7f);
    glVertex2f(-0.3f, 0.8f);
    glVertex2f(-0.4f, 0.8f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //2nd line 7 b
    glVertex2f(-0.3f, 0.7f);
    glVertex2f(-0.2f, 0.7f);
    glVertex2f(-0.2f, 0.8f);
    glVertex2f(-0.3f, 0.8f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //2nd line 8 w
    glVertex2f(-0.2f, 0.7f);
    glVertex2f(-0.1f, 0.7f);
    glVertex2f(-0.1f, 0.8f);
    glVertex2f(-0.2f, 0.8f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //3rd line 1 w
    glVertex2f(-0.9f, 0.6f);
    glVertex2f(-0.8f, 0.6f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.9f, 0.7f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //3rd line 2 b
    glVertex2f(-0.8f, 0.6f);
    glVertex2f(-0.7f, 0.6f);
    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.8f, 0.7f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //3rd line 3 w
    glVertex2f(-0.7f, 0.6f);
    glVertex2f(-0.6f, 0.6f);
    glVertex2f(-0.6f, 0.7f);
    glVertex2f(-0.7f, 0.7f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //3rd line 4 b
    glVertex2f(-0.6f, 0.6f);
    glVertex2f(-0.5f, 0.6f);
    glVertex2f(-0.5f, 0.7f);
    glVertex2f(-0.6f, 0.7f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //3rd line 5 w
    glVertex2f(-0.5f, 0.6f);
    glVertex2f(-0.4f, 0.6f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.5f, 0.7f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //3rd line 6 b
    glVertex2f(-0.4f, 0.6f);
    glVertex2f(-0.3f, 0.6f);
    glVertex2f(-0.3f, 0.7f);
    glVertex2f(-0.4f, 0.7f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //3rd line 7 w
    glVertex2f(-0.3f, 0.6f);
    glVertex2f(-0.2f, 0.6f);
    glVertex2f(-0.2f, 0.7f);
    glVertex2f(-0.3f, 0.7f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //3rd line 8 b
    glVertex2f(-0.2f, 0.6f);
    glVertex2f(-0.1f, 0.6f);
    glVertex2f(-0.1f, 0.7f);
    glVertex2f(-0.2f, 0.7f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //4th line 1 b
    glVertex2f(-0.9f, 0.5f);
    glVertex2f(-0.8f, 0.5f);
    glVertex2f(-0.8f, 0.6f);
    glVertex2f(-0.9f, 0.6f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //4th line 2 w
    glVertex2f(-0.8f, 0.5f);
    glVertex2f(-0.7f, 0.5f);
    glVertex2f(-0.7f, 0.6f);
    glVertex2f(-0.8f, 0.6f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //4th line 3 b
    glVertex2f(-0.7f, 0.5f);
    glVertex2f(-0.6f, 0.5f);
    glVertex2f(-0.6f, 0.6f);
    glVertex2f(-0.7f, 0.6f);

glEnd();



glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //4th line 4 w
    glVertex2f(-0.6f, 0.5f);
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(-0.5f, 0.6f);
    glVertex2f(-0.6f, 0.6f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //4th line 5 b
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(-0.4f, 0.5f);
    glVertex2f(-0.4f, 0.6f);
    glVertex2f(-0.5f, 0.6f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //4th line 6 w
    glVertex2f(-0.4f, 0.5f);
    glVertex2f(-0.3f, 0.5f);
    glVertex2f(-0.3f, 0.6f);
    glVertex2f(-0.4f, 0.6f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //4th line 7 b
    glVertex2f(-0.3f, 0.5f);
    glVertex2f(-0.2f, 0.5f);
    glVertex2f(-0.2f, 0.6f);
    glVertex2f(-0.3f, 0.6f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //4th line 8 w
    glVertex2f(-0.2f, 0.5f);
    glVertex2f(-0.1f, 0.5f);
    glVertex2f(-0.1f, 0.6f);
    glVertex2f(-0.2f, 0.6f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //5th line 1 w
    glVertex2f(-0.9f, 0.4f);
    glVertex2f(-0.8f, 0.4f);
    glVertex2f(-0.8f, 0.5f);
    glVertex2f(-0.9f, 0.5f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //5th line 2 b
    glVertex2f(-0.8f, 0.4f);
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.7f, 0.5f);
    glVertex2f(-0.8f, 0.5f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //5th line 3 w
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.6f, 0.4f);
    glVertex2f(-0.6f, 0.5f);
    glVertex2f(-0.7f, 0.5f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //5th line 4 b
    glVertex2f(-0.6f, 0.4f);
    glVertex2f(-0.5f, 0.4f);
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(-0.6f, 0.5f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //5th line 5 w
    glVertex2f(-0.5f, 0.4f);
    glVertex2f(-0.4f, 0.4f);
    glVertex2f(-0.4f, 0.5f);
    glVertex2f(-0.5f, 0.5f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //5th line 6 b
    glVertex2f(-0.4f, 0.4f);
    glVertex2f(-0.3f, 0.4f);
    glVertex2f(-0.3f, 0.5f);
    glVertex2f(-0.4f, 0.5f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //5th line 7 w
    glVertex2f(-0.3f, 0.4f);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.2f, 0.5f);
    glVertex2f(-0.3f, 0.5f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //5th line 8 b
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.1f, 0.4f);
    glVertex2f(-0.1f, 0.5f);
    glVertex2f(-0.2f, 0.5f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //6th line 1 b
    glVertex2f(-0.9f, 0.3f);
    glVertex2f(-0.8f, 0.3f);
    glVertex2f(-0.8f, 0.4f);
    glVertex2f(-0.9f, 0.4f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //6th line 2 w
    glVertex2f(-0.8f, 0.3f);
    glVertex2f(-0.7f, 0.3f);
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.8f, 0.4f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //6th line 3 b
    glVertex2f(-0.7f, 0.3f);
    glVertex2f(-0.6f, 0.3f);
    glVertex2f(-0.6f, 0.4f);
    glVertex2f(-0.7f, 0.4f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //6th line 4 w
    glVertex2f(-0.6f, 0.3f);
    glVertex2f(-0.5f, 0.3f);
    glVertex2f(-0.5f, 0.4f);
    glVertex2f(-0.6f, 0.4f);

glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //6th line 5 b
    glVertex2f(-0.5f, 0.3f);
    glVertex2f(-0.4f, 0.3f);
    glVertex2f(-0.4f, 0.4f);
    glVertex2f(-0.5f, 0.4f);

glEnd();
glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //6th line 6 w
    glVertex2f(-0.4f, 0.3f);
    glVertex2f(-0.3f, 0.3f);
    glVertex2f(-0.3f, 0.4f);
    glVertex2f(-0.4f, 0.4f);

glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //6th line 7 b
    glVertex2f(-0.3f, 0.3f);
    glVertex2f(-0.2f, 0.3f);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.3f, 0.4f);

glEnd();
glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //6th line 8 w
    glVertex2f(-0.2f, 0.3f);
    glVertex2f(-0.1f, 0.3f);
    glVertex2f(-0.1f, 0.4f);
    glVertex2f(-0.2f, 0.4f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //7th line 1 w
    glVertex2f(-0.9f, 0.2f);
    glVertex2f(-0.8f, 0.2f);
    glVertex2f(-0.8f, 0.3f);
    glVertex2f(-0.9f, 0.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //7th line 2 b
    glVertex2f(-0.8f, 0.2f);
    glVertex2f(-0.7f, 0.2f);
    glVertex2f(-0.7f, 0.3f);
    glVertex2f(-0.8f, 0.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //7th line 3 w
    glVertex2f(-0.7f, 0.2f);
    glVertex2f(-0.6f, 0.2f);
    glVertex2f(-0.6f, 0.3f);
    glVertex2f(-0.7f, 0.3f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //7th line 4 b
    glVertex2f(-0.6f, 0.2f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-0.5f, 0.3f);
    glVertex2f(-0.6f, 0.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //7th line 5 w
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-0.4f, 0.2f);
    glVertex2f(-0.4f, 0.3f);
    glVertex2f(-0.5f, 0.3f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //7th line 6 b
    glVertex2f(-0.4f, 0.2f);
    glVertex2f(-0.3f, 0.2f);
    glVertex2f(-0.3f, 0.3f);
    glVertex2f(-0.4f, 0.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //7th line 7 w
    glVertex2f(-0.3f, 0.2f);
    glVertex2f(-0.2f, 0.2f);
    glVertex2f(-0.2f, 0.3f);
    glVertex2f(-0.3f, 0.3f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //7th line 8 b
    glVertex2f(-0.2f, 0.2f);
    glVertex2f(-0.1f, 0.2f);
    glVertex2f(-0.1f, 0.3f);
    glVertex2f(-0.2f, 0.3f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //8th line 1 b
    glVertex2f(-0.9f, 0.1f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-0.8f, 0.2f);
    glVertex2f(-0.9f, 0.2f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //8th line 2 w
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-0.7f, 0.1f);
    glVertex2f(-0.7f, 0.2f);
    glVertex2f(-0.8f, 0.2f);

glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //8th line 3 b
    glVertex2f(-0.7f, 0.1f);
    glVertex2f(-0.6f, 0.1f);
    glVertex2f(-0.6f, 0.2f);
    glVertex2f(-0.7f, 0.2f);

glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //8th line 4 w
    glVertex2f(-0.6f, 0.1f);
    glVertex2f(-0.5f, 0.1f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-0.6f, 0.2f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //8th line 5 b
    glVertex2f(-0.5f, 0.1f);
    glVertex2f(-0.4f, 0.1f);
    glVertex2f(-0.4f, 0.2f);
    glVertex2f(-0.5f, 0.2f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //8th line 6 w
    glVertex2f(-0.4f, 0.1f);
    glVertex2f(-0.3f, 0.1f);
    glVertex2f(-0.3f, 0.2f);
    glVertex2f(-0.4f, 0.2f);

glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); //8th line 7 b
    glVertex2f(-0.3f, 0.1f);
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.2f, 0.2f);
    glVertex2f(-0.3f, 0.2f);

glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); //8th line 8 w
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.1f, 0.1f);
    glVertex2f(-0.1f, 0.2f);
    glVertex2f(-0.2f, 0.2f);

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


