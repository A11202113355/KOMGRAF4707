#include <GL/glut.h>

// Sudut rotasi
float sudutRotasi = 0.0f;

void inisialisasi() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-5, 5, -5, 5);
}

void gambarObjek() {
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glTranslatef(0.0, 0.0, 0.0); // Pusat rotasi di (0, 0, 0)
    glRotatef(sudutRotasi, 0.0, 0.0, 1.0); // Melakukan rotasi objek

    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-1.0, -1.0);
    glVertex2f(1.0, -1.0);
    glVertex2f(0.0, 1.0);
    glEnd();

    glFlush();
}

void animasi(int nilai) {
    sudutRotasi -= 1.0; // Meningkatkan sudut rotasi
    if (sudutRotasi >= 360.0)
        sudutRotasi = 0.0;

    glutPostRedisplay(); // Meminta glut untuk menjalankan fungsi gambarObjek lagi
    glutTimerFunc(1000 / 60, animasi, 0); // Mengatur waktu jeda animasi (60 fps)
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Rotasi Objek");
    glutDisplayFunc(gambarObjek);

    inisialisasi();

    glutTimerFunc(0, animasi, 0); // Memulai animasi

    glutMainLoop();

    return 0;
}