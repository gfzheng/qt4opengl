#include "glbox.h"

GLBox::GLBox(QWidget *parent) :
    QGLWidget(parent)
{
}

void GLBox::initializeGL()
{
    // Set up the rendering context, define display lists etc.:

    glClearColor(0.0f, 0.0f, 0.0f, 0.5f);   // Black Background
    glClearDepth(1.0f);                     // Depth Buffer Setup
    // Really Nice Perspective Calculations
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
    // The Type Of Depth Testing To Do
    glDepthFunc(GL_LESS);
    // Enables Depth Testing
    glEnable(GL_DEPTH_TEST);
}

void GLBox::resizeGL( int w, int h )
{
    // setup viewport, projection etc.:
    glViewport( 0, 0, (GLint)w, (GLint)h );
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    //定义可视空间(左，右，下，上，近，远)。
    //关键: paintGL里的对象需要出现在这个区域才可见。
    glFrustum( -3.0, 3.0, -2.0, 2.0, 5.0, 15.0 );
    glMatrixMode( GL_MODELVIEW );
}

void GLBox::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(-1.5f,0.0f,-6.0f);

    glBegin(GL_TRIANGLES);
        glColor3f(1.0f,0.0f,0.0f);
        glVertex3f( 0.0f, 1.0f, 0.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glVertex3f(-1.0f,-1.0f, 0.0f);
        glColor3f(0.0f,0.0f,1.0f);
        glVertex3f( 1.0f,-1.0f, 0.0f);
    glEnd();

    glTranslatef(3.0f,0.0f,0.0f);

    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex3f(-1.0f, 1.0f, 0.0f);
        glVertex3f( 1.0f, 1.0f, 0.0f);
        glVertex3f( 1.0f,-1.0f, 0.0f);
        glVertex3f(-1.0f,-1.0f, 0.0f);
    glEnd();
}

