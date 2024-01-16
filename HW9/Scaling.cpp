#include <GL/glut.h>

// Skala awal objek
float skalaX = 1.0f;
float skalaY = 1.0f;

// Menandakan apakah sedang dalam tahap perubahan skala
bool sedangMengubahSkala = false;

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

    // Melakukan scaling objek
    glScalef(skalaX, skalaY, 1.0);

    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-1.0, -1.0);
    glVertex2f(1.0, -1.0);
    glVertex2f(0.0, 1.0);
    glEnd();

    glFlush();
}

void ubahSkala(int nilai) {
    if (sedangMengubahSkala) {
        skalaX = 3.0f;
        skalaY = 3.0f;
        sedangMengubahSkala = false;
    }
    else {
        skalaX = 1.0f;
        skalaY = 1.0f;
        sedangMengubahSkala = true;
    }

    // Meminta glut untuk menjalankan fungsi gambarObjek
    glutPostRedisplay();

    // Setel ulang timer untuk pemanggilan berikutnya setelah 3 detik
    glutTimerFunc(1000, ubahSkala, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Scaling Objek");
    glutDisplayFunc(gambarObjek);

    inisialisasi();

    // Panggil fungsi ubahSkala untuk pertama kali
    ubahSkala(0);

    glutMainLoop();

    return 0;
}