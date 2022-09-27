#include <GL/glut.h>

void init(void);
void polygon(void);

main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 380);
    glutInitWindowPosition(200, 100);
    glutCreateWindow("E1E121019 - Polygon");
    init();
    glutDisplayFunc(polygon);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,22.0,0.0,23.0,-1.0, 1.0);
}

void polygon(void){
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(3.0);
    glBegin(GL_LINES);

    glColor3f(0.737255, 0.560784, 0.560784); //A
    glVertex3f(11.0, 22.0, 0.0);
    glVertex3f(14.0, 15.0, 0.0);

    glColor3f(0.917647, 0.678431, 0.917647); //B
    glVertex3f(14.0, 15.0, 0.0);
    glVertex3f(21.0, 15.0, 0.0);

    glColor3f(0.858824, 0.439216, 0.858824); //C
    glVertex3f(21.0, 15.0, 0.0);
    glVertex3f(15.0, 10.0, 0.0);

    glColor3f(0.917647, 0.678431, 0.917647); //D
    glVertex3f(15.0, 10.0, 0.0);
    glVertex3f(18.0, 1.0, 0.0);

    glColor3f(0.737255, 0.560784, 0.560784); //E
    glVertex3f(18.0, 1.0, 0.0);
    glVertex3f(11.0, 6.0, 0.0);

    glColor3f(0.917647, 0.678431, 0.917647); //F
    glVertex3f(11.0, 6.0, 0.0);
    glVertex3f(4, 1.0, 0.0);

    glColor3f(0.858824, 0.439216, 0.858824); //G
    glVertex3f(4, 1.0, 0.0);
    glVertex3f(7.0, 10.0, 0.0);

    glColor3f(0.917647, 0.678431, 0.917647); //H
    glVertex3f(7.0, 10.0, 0.0);
    glVertex3f(1.0, 15.0, 0.0);

    glColor3f(0.858824, 0.439216, 0.858824); //I
    glVertex3f(1.0, 15.0, 0.0);
    glVertex3f(8.0, 15.0, 0.0);

    glColor3f(0.917647, 0.678431, 0.917647); //J
    glVertex3f(8.0, 15.0, 0.0);
    glVertex3f(11.0, 22.0, 0.0);

    glEnd();

    glutSwapBuffers();
}
