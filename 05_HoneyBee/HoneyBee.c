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
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    return(0);
}

void resize(int width, int height) {
    // code
    glViewport(0, 0, width, height);
}

void display(void) {
    // code
    glClear(GL_COLOR_BUFFER_BIT);
   
    glBegin(GL_TRIANGLES);
    glColor3f(0.48f, 0.31f, 0.15f);
    glVertex2f(-0.54f, 0.01f);
    glVertex2f(-0.51f, 0.09f);
    glVertex2f(-0.57f, 0.12f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.71f, 0.49f, 0.19f);
    glVertex2f(-0.53f, 0.01f);
    glVertex2f(-0.51f, -0.09f);
    glVertex2f(-0.4f, -0.14f);
    glVertex2f(-0.38f, 0.06f);    
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.12f, 0.25f, 0.27f);
    glVertex2f(-0.4f, 0.14f);   
    glVertex2f(-0.51f, 0.09f);
    glVertex2f(-0.48f, 0.19f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.05f, 0.06f, 0.07f);
    glVertex2f(-0.48f, 0.19f);   
    glVertex2f(-0.36f, 0.26f);
    glVertex2f(-0.4f, 0.14f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.98f, 0.81f, 0.49f);
    glVertex2f(-0.57f, 0.12f);   
    glVertex2f(-0.51f, 0.22f);
    glVertex2f(-0.52f, 0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.38f, 0.27f, 0.09f);
    glVertex2f(-0.51f, 0.09f);
    glVertex2f(-0.52f, 0.1f);
    glVertex2f(-0.51f, 0.22f);
    glVertex2f(-0.48f, 0.18f);    
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.02f, 0.03f, 0.04f);
    glVertex2f(-0.58f, -0.01f);
    glVertex2f(-0.59f, -0.04f);
    glVertex2f(-0.56f, -0.04f);
    glVertex2f(-0.56f, -0.01f);

    glBegin(GL_POLYGON);
    glColor3f(0.01f, 0.08f, 0.10f);
    glVertex2f(-0.58f, -0.01f);
    glVertex2f(-0.58f, 0.02f);
    glVertex2f(-0.55f, 0.05f);
    glVertex2f(-0.53f, 0.01f);
    glVertex2f(-0.56f, -0.01f);



    


    











    


    

    
    












    
    



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