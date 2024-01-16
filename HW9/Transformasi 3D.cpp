#include <GL/glut.h>

float angle1 = 0.0; // Initial rotation angle
float angle2 = 0.0;
float scale_factor = 2.0; // Initial scaling factor

void init() {
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.0, 0.0, 0.0, 1.0);
}

void drawAxes() {
    glBegin(GL_LINES);
    // Sumbu X (Merah)
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-100.0, 0.0, 0.0);
    glVertex3f(100.0, 0.0, 0.0);

    // Sumbu Y (Hijau)
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(0.0, -100.0, 0.0);
    glVertex3f(0.0, 100.0, 0.0);

    // Sumbu Z (Biru)
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0.0, 0.0, -100.0);
    glVertex3f(0.0, 0.0, 100.0);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, 1.0, 1.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(3.0, 3.0, 3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    drawAxes();

    // Rotate the cubes around the Y-axis
    glPushMatrix();
    glRotatef(angle1, 0.0, 1.0, 0.0); // Rotate around Y-axis
    glColor3f(1.0, 0.0, 0.0); // Red
    glTranslatef(1.0, 1.0, 0.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glRotatef(angle2, 0.0, 1.0, 0.0); // Rotate around Y-axis
    glScalef(scale_factor, scale_factor, scale_factor); // Scale the cube
    glColor3f(0.0, 1.0, 0.0); // Green
    glTranslatef(0.0, 0.0, 0.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glutSwapBuffers();

    // Increment rotation angle and adjust scaling factor for the next frame
    angle1 += 1.0;
    if (angle1 > 360.0) {
        angle1 -= 360.0;
    }

    scale_factor += 0.01;
    if (scale_factor > 2.0) {
        scale_factor = 1.0;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowSize(800, 600);
    glutCreateWindow("3D");

    init();
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}