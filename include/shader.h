#ifndef SHADER_H
#define SHADER_H

#include <iostream>
#include <string>
#include <GL/glew.h>
#include <fstream>


class Shader
{
    public:
        Shader(const std::string& filename);

        //
        void Bind();



        virtual ~Shader();

    protected:

    private:
        std::string LoadShader(const std::string& fileName);
        void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage);
        GLuint CreateShader(const std::string& text, unsigned int type);

        static const unsigned int NUM_SHADERS = 2;
        GLuint m_program;
        GLuint m_shaders[NUM_SHADERS];

};

#endif // SHADER_H
