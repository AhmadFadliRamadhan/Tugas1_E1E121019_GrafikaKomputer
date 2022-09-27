#include <GL/glut.h>

void init(void);
void dots(void);

main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(200, 100);
    glutCreateWindow("E1E121019 - Dots");
    init();
    glutDisplayFunc(dots);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,10.0,0.0,10.0, -0.1, 0.1);
}

void dots(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPointSize(10.0);
    glBegin(GL_POINTS);

    glColor3f(1.0, 0.5, 0.0); // orange
    glVertex3f(5.0, 7.5, 0.0);
    glColor3f(1.0, 0.25, 0.0); // orangered
    glVertex3f(3.75, 4.5, 0.0);
    glColor3f(0.858824, 0.439216, 0.858824); // orchid
    glVertex3f(6.25, 4.5, 0.0);
    glColor3f(0.560784, 0.737255, 0.560784); // palegreen
    glVertex3f(2.5, 2.0, 0.0);
    glColor3f(0.737255, 0.560784, 0.560784); // pink
    glVertex3f(5.0, 2.0, 0.0);
    glColor3f(0.917647, 0.678431, 0.917647); // plum
    glVertex3f(7.5, 2.0, 0.0);

    glEnd();

    glLineWidth(2.0);
    glBegin(GL_LINES);

    glColor3f(1.0,0.0,0.0);

    glVertex3f(1.0,1.0,0.0);
    glVertex3f(9.0,1.0,0.0);

    glVertex3f(9.0,1.0,0.0);
    glVertex3f(5.0,9.0,0.0);

    glVertex3f(5.0,9.0,0.0);
    glVertex3f(1.0,1.0,0.0);

    glEnd();

    glutSwapBuffers();
}
