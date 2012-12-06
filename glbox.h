#ifndef GLBOX_H
#define GLBOX_H

#include <QGLWidget>

class GLBox : public QGLWidget
{
    Q_OBJECT
public:
    explicit GLBox(QWidget *parent = 0);

protected:
    virtual void initializeGL();
    virtual void resizeGL( int width, int height );
    virtual void paintGL();
};

#endif // GLBOX_H
