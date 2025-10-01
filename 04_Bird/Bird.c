// header files
//#include <GL/GLU.h>
#include <GL/GLUT.h>

// global variable declarations
BOOL bFullScreen = FALSE;

// Entry-point function
int main(int argc, char* argv[])
{
    // local function declarations
    int initialize(void);
    void resize(int, int);
    void display(void);
    void keyboard(unsigned char, int, int);
    void mouse(int, int, int, int);
    void uninitialize(void);

    // code
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Radhika Vishwakarma - Polygon Bird Demo");

    initialize();

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    // glutWMCloseFunc(uninitialize);
    glutCloseFunc(uninitialize);

    glutMainLoop();

    return(0);
}

int initialize(void) {
    // code
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    return(0);
}

void resize(int width, int height) {
    // code
    glViewport(0, 0, width, height);
}

void display(void) {
    // code
    glClear(GL_COLOR_BUFFER_BIT);

    // glBegin(GL_POLYGON);
    // glColor3f(0.88f, 0.66f, 0.06f);
    // glVertex2f(-0.69f, -0.67f);
    // glVertex2f(-0.5f, -0.6f);
    // glVertex2f(-0.38f, -0.6f);
    // glVertex2f(-0.4f, -0.5f);
    // glVertex2f(-0.35f, -0.33f);
    // glVertex2f(-0.5f, -0.4f);
    // glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.88f, 0.66f, 0.06f);
    glVertex2f(-0.69f, -0.67f);
    glVertex2f(-0.5f, -0.4f);
    glVertex2f(-0.5f, -0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.92f, 0.43f, 0.09f);
    glVertex2f(-0.5f, -0.4f);
    glVertex2f(-0.5f, -0.6f);
    glVertex2f(-0.38f, -0.62f);
    glVertex2f(-0.4f, -0.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.5f, 0.18f);
    glVertex2f(-0.5f, -0.4f);
    glVertex2f(-0.4f, -0.5f);
    glVertex2f(-0.35f, -0.33f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.03f, 0.11f, 0.2f);
    glVertex2f(-0.69f, -0.67f);
    glVertex2f(-0.6f, -0.35f);
    glVertex2f(-0.5f, -0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.25f, 0.83f, 0.89f);
    glVertex2f(-0.5f, -0.4f);
    glVertex2f(-0.6f, -0.35f);
    glVertex2f(-0.31f, 0.1f); 
    glVertex2f(-0.15f, 0.05f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.08f, 0.47f, 0.85f);
    glVertex2f(0.0f, -0.12f);
    glVertex2f(-0.15f, 0.05f);
    glVertex2f(-0.5f, -0.4f);
    glVertex2f(-0.35f, -0.33f);
    glVertex2f(-0.05f, -0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.14f, 0.10f, 0.68f);
    glVertex2f(0.05f, 0.1f);
    glVertex2f(-0.15f, 0.05f);
    glVertex2f(0.0f, -0.12f);
    glVertex2f(0.06f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.41f, 0.15f, 0.61f);
    glVertex2f(-0.31f, 0.1f);
    glVertex2f(-0.25f, 0.19f);
    glVertex2f(-0.15f, 0.34f);
    glVertex2f(-0.1f, 0.2f);
    glVertex2f(0.08f, 0.1f);
    glVertex2f(-0.15f, 0.05f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.23f, 0.12f, 0.31f);
    glVertex2f(0.08f, 0.1f);
    glVertex2f(-0.1f, 0.2f);
    glVertex2f(-0.15f, 0.34f);
    glVertex2f(-0.05f, 0.25f);
    glVertex2f(0.1f, 0.25f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.51f, 0.88f, 0.45f);
    glVertex2f(-0.41f, 0.4f);
    glVertex2f(-0.55f, 0.58f);
    glVertex2f(-0.25f, 0.53f);
    glVertex2f(-0.15f, 0.34f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.33f, 0.38f, 0.16f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-0.9f, 0.3f);
    glVertex2f(-0.5f, 0.42f);
    glVertex2f(-0.15f, 0.34f);
    glVertex2f(-0.25f, 0.19f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.31f, 0.34f, 0.20f);
    glVertex2f(-0.31f, 0.1f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-0.25f, 0.19f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.65f, 0.15f, 0.11f);
    glVertex2f(0.1f, 0.25f);
    glVertex2f(-0.05f, 0.25f);
    glVertex2f(-0.15f, 0.34f);
    glVertex2f(-0.15f, 0.5f);
    glVertex2f(0.05f, 0.55f);
    glVertex2f(0.12f, 0.42f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.56f, 0.13f, 0.10f);
    glVertex2f(-0.15f, 0.5f);
    glVertex2f(-0.05f, 0.62f);
    glVertex2f(0.1f, 0.62f);
    glVertex2f(0.05f, 0.55f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.50f, 0.09f, 0.07f);
    glVertex2f(0.12f, 0.42f);
    glVertex2f(0.05f, 0.55f);
    glVertex2f(0.1f, 0.62f);
    glVertex2f(0.31f, 0.58f);
    glVertex2f(0.31f, 0.52f);
    glEnd();
    
    glBegin(GL_TRIANGLES);
    glColor3f(0.63f, 0.08f, 0.04f);
    glVertex2f(0.31f, 0.52f);
    glVertex2f(0.31f, 0.58f);
    glVertex2f(0.88f, 0.6f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.03f, 0.02f, 0.02f);
    glVertex2f(0.14f, 0.6f);
    glVertex2f(0.13f, 0.57f);
    glVertex2f(0.16f, 0.57f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.01f, 0.27f, 0.03f);
    glVertex2f(-0.5f, 0.48f);
    glVertex2f(-0.55f, 0.47);
    glVertex2f(-0.5f, 0.45f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.01f, 0.27f, 0.03f);
    glVertex2f(-0.55f, 0.53f);
    glVertex2f(-0.56f, 0.48f);
    glVertex2f(-0.52f, 0.49f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.01f, 0.27f, 0.03f);
    glVertex2f(-0.58f, 0.48f);
    glVertex2f(-0.63f, 0.46f);
    glVertex2f(-0.58f, 0.45f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.78f, 0.78f, 0.14f);
    glVertex2f(-0.62f, 0.11f);
    glVertex2f(-0.54f, 0.17f);
    glVertex2f(-0.53f, 0.07f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.78f, 0.78f, 0.14f);
    glVertex2f(-0.65f, 0.2f);
    glVertex2f(-0.66f, 0.13f);
    glVertex2f(-0.6f, 0.18f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.78f, 0.78f, 0.14f);
    glVertex2f(-0.76f, 0.23f);
    glVertex2f(-0.75f, 0.17f);
    glVertex2f(-0.7f, 0.21f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.78f, 0.78f, 0.14f);
    glVertex2f(-0.82f, 0.15f);
    glVertex2f(-0.78f, 0.1f);
    glVertex2f(-0.76f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.78f, 0.78f, 0.14f);
    glVertex2f(-0.74f, 0.11f);
    glVertex2f(-0.78f, 0.07f);
    glVertex2f(-0.72f, 0.08f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.78f, 0.78f, 0.14f);
    glVertex2f(-0.7f, 0.1f);
    glVertex2f(-0.7f, 0.05f);
    glVertex2f(-0.66f, 0.07f);
    glEnd();











    


    

    
    












    
    



    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y) {
    // code
    switch (key) {
    case 27:
        glutLeaveMainLoop();
        //  glutLeaveGameMode();
        break;
    case 'F':
    case 'f':
        if (bFullScreen == FALSE) {
            glutFullScreen();
            bFullScreen = TRUE;
        }
        else {
            glutLeaveFullScreen();
            //  glutLeaveGameMode();
            bFullScreen = FALSE;
        }
        break;
    default:
        break;
    }
}

void mouse(int button, int state, int x, int y) {
    // code
    switch (button) {
        case GLUT_LEFT_BUTTON:
            glutLeaveMainLoop();
            // glutLeaveGameMode();
            break;
        default:
            break;
    }
}

void uninitialize(void) {
    // code
}