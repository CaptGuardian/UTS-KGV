// piano.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <glut.h>
#include <stdlib.h>
#include <iostream>
#include <string>

float cx = 255, cy = 255, cz = 255;
float dx = 255, dy = 255, dz = 255;
float ex = 255, ey = 255, ez = 255;
float fx = 255, fy = 255, fz = 255;
float gx = 255, gy = 255, gz = 255;
float ax = 255, ay = 255, az = 255;
float bx = 255, by = 255, bz = 255;
float c2x = 255, c2y = 255, c2z = 255;
float d2x = 255, d2y = 255, d2z = 255;
float p1 = 0, p2 = 255, p3 = 0;


void base()
{
    glBegin(GL_QUADS);
        glColor3ub(0, 0, 0);
        glVertex2f(200, -100);
        glVertex2f(200, 100);
        glVertex2f(-200, 100);
        glVertex2f(-200, -100);

    glEnd();

}
void c()
{
    glBegin(GL_QUADS);
    glColor3f(cx, cy, cz);
    glVertex2f(-155, -95);
    glVertex2f(-155, 95);
    glColor3ub(224, 224, 224);
    glVertex2f(-195, 95);
    glColor3ub(cx, cy, cz);
    glVertex2f(-195, -95);

    glEnd();
}

void d()
{
    glBegin(GL_QUADS);
    glColor3ub(dx, dy, dz);
    glVertex2f(-112, -95);
    glVertex2f(-112, 95);
    glColor3ub(224, 224, 224);
    glVertex2f(-152, 95);
    glColor3ub(dx, dy, dz);
    glVertex2f(-152, -95);

    glEnd();
}

void e()
{
    glBegin(GL_QUADS);
    glColor3ub(ex, ey, ez);
    glVertex2f(-69, -95);
    glVertex2f(-69, 95);
    glColor3ub(224, 224, 224);
    glVertex2f(-109, 95);
    glColor3ub(ex, ey, ez);
    glVertex2f(-109, -95);

    glEnd();
}

void f()
{
    glBegin(GL_QUADS);
    glColor3ub(fx, fy, fz);
    glVertex2f(-26, -95);
    glVertex2f(-26, 95);
    glColor3ub(224, 224, 224);
    glVertex2f(-66, 95);
    glColor3ub(fx, fy, fz);
    glVertex2f(-66, -95);

    glEnd();
}

void g()
{
    glBegin(GL_QUADS);
    glColor3ub(gx, gy, gz);
    glVertex2f(23, -95);
    glVertex2f(23, 95);
    glColor3ub(224, 224, 224);
    glVertex2f(-23, 95);
    glColor3ub(gx, gy, gz);
    glVertex2f(-23, -95);

    glEnd();
}

void a()
{
    glBegin(GL_QUADS);
    glColor3ub(ax, ay, az);
    glVertex2f(66, -95);
    glVertex2f(66, 95);
    glColor3ub(224, 224, 224);
    glVertex2f(26, 95);
    glColor3ub(ax, ay, az);
    glVertex2f(26, -95);

    glEnd();
}

void b()
{
    glBegin(GL_QUADS);
    glColor3ub(bx, by, bz);
    glVertex2f(109, -95);
    glVertex2f(109, 95);
    glColor3ub(224, 224, 224);
    glVertex2f(69, 95);
    glColor3ub(bx, by, bz);
    glVertex2f(69, -95);

    glEnd();
}

void c2()
{
    glBegin(GL_QUADS);
    glColor3ub(c2x, c2y, c2z);
    glVertex2f(152, -95);
    glVertex2f(152, 95);
    glColor3ub(224, 224, 224);
    glVertex2f(112, 95);
    glColor3ub(c2x, c2y, c2z);
    glVertex2f(112, -95);

    glEnd();
}

void d2()
{
    glBegin(GL_QUADS);
    glColor3ub(d2x, d2y, d2z);
    glVertex2f(195, -95);
    glVertex2f(195, 95);
    glColor3ub(224, 224, 224);
    glVertex2f(155, 95);
    glColor3ub(d2x, d2y, d2z);
    glVertex2f(155, -95);

    glEnd();
}

void cis()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-145, -20);
    glVertex2f(-145, 95);
    glVertex2f(-165, 95);
    glVertex2f(-165, -20);

    glEnd();
}

void dis()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-102, -20);
    glVertex2f(-102, 95);
    glVertex2f(-122, 95);
    glVertex2f(-122, -20);

    glEnd();
}

void fis()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-16, -20);
    glVertex2f(-16, 95);
    glVertex2f(-36, 95);
    glVertex2f(-36, -20);

    glEnd();
}


void gis()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(33, -20);
    glVertex2f(33, 95);
    glVertex2f(13, 95);
    glVertex2f(13, -20);

    glEnd();
}

void ais()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(76, -20);
    glVertex2f(76, 95);
    glVertex2f(56, 95);
    glVertex2f(56, -20);

    glEnd();
}

void cis2()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(162, -20);
    glVertex2f(162, 95);
    glVertex2f(142, 95);
    glVertex2f(142, -20);

    glEnd();
}

void dis2()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(195, -20);
    glVertex2f(195, 95);
    glVertex2f(185, 95);
    glVertex2f(185, -20);

    glEnd();
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'a':
    case 'A':
        cx = p1;
        cy = p2;
        cz = p3;
        break;
    case 's':
    case 'S':
        dx = p1;
        dy = p2;
        dz = p3;
        break;
    case 'd':
    case 'D':
        ex = p1;
        ey = p2;
        ez = p3;
        break;
    case 'f':
    case 'F':
        fx = p1;
        fy = p2;
        fz = p3;
        break;
    case 'g':
    case 'G':
        gx = p1;
        gy = p2;
        gz = p3;
        break;
    case 'h':
    case 'H':
        ax = p1;
        ay = p2;
        az = p3;
        break;
    case 'j':
    case 'J':
        bx = p1;
        by = p2;
        bz = p3;
        break;
    case 'k':
    case 'K':
        c2x = p1;
        c2y = p2;
        c2z = p3;
        break;
    case 'l':
    case 'L':
        d2x = p1;
        d2y = p2;
        d2z = p3;
        break;

    }

    glutPostRedisplay();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    base();
    c();
    d();
    e();
    f();
    g();
    a();
    b();
    c2();
    d2();
    cis();
    dis();
    fis();
    gis();
    ais();
    cis2();
    dis2();
    glutSwapBuffers();
}
int main()
{
    glutInit(&__argc, __argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowPosition(350, 250);
    glutInitWindowSize(960, 540);
    glutCreateWindow("Piano");
    glClearColor(1.0, 1.0, 1.0, 1.0);
    gluOrtho2D(-320, 320, -240, 240);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutSetKeyRepeat(GLUT_KEY_REPEAT_OFF);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
