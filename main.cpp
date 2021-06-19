#include <windows.h>  // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void display()
{
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(2);

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-60,-70);
    glVertex2f(-55,-70);
    glVertex2f(-55,-50);
    glVertex2f(-60,-50);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-67,-50);
    glVertex2f(-48,-50);
    glVertex2f(-57.5,-35);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-65,-41);
    glVertex2f(-50,-41);
    glVertex2f(-57.5,-26);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-63,-33);
    glVertex2f(-52,-33);
    glVertex2f(-57.5,-22);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-62,-27);
    glVertex2f(-53,-27);
    glVertex2f(-57.5,-20);
    glEnd();

    glFlush(); // Render now

}
/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char **argv)
{
    glutInit(&argc, argv);            // Initialize GLUT
    glutInitWindowSize(1080, 600);    // Set the window's initial width & height
    glutCreateWindow("Tree"); // Create a window with the given title
    gluOrtho2D(-100.0, 100.0, -100.0, 100.0);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
