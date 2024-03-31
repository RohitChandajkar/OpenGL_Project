#pragma once
#include "openglwindow.h"
#include <QOpenGLShaderProgram>


    class TriangleWindow : public OpenGLWindow
    {
    public:
        using OpenGLWindow::OpenGLWindow;

        void initialize() override; //intialize
        void render() override;     //funciton for render

    private:
        GLint m_posAttr = 0;
        GLint m_colAttr = 0;
        GLint m_matrixUniform = 0;

        QOpenGLShaderProgram* m_program = nullptr;
        int m_frame = 0;
    };
