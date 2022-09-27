#include <GL/glut.h>

void init(void);
void lines(void);

main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 350);
    glutInitWindowPosition(200, 100);
    glutCreateWindow("E1E121019 - Line");
    init();
    glutDisplayFunc(lines);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-5.0,5.0,-5.0,5.0,-1.0, 1.0);
}

void lines(void){
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(14.0);
    glBegin(GL_LINES);

    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-4.6, 0.0, 0.0);
    glVertex3f(4.6, 0.0, 0.0);

    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-4.6, 3.0, 0.0);
    glVertex3f(4.6, 3.0, 0.0);

    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-4.6, -3.0, 0.0);
    glVertex3f(4.6, -3.0, 0.0);

    glEnd();

    glutSwapBuffers();
}
