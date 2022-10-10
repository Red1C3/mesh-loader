#pragma once
#include <glm/glm.hpp>
#include <vector>
#include <memory>
namespace meshLoader
{
    class MeshBase
    {
    protected:
        std::vector<glm::vec3> positions;
        std::vector<glm::vec3> normals;
        std::vector<glm::vec2> uvCoords0;
        std::vector<unsigned> indices;
        std::unique_ptr<MeshBase> wrappee;

    public:
        MeshBase(std::unique_ptr<MeshBase> wrappee);
        virtual const std::vector<glm::vec3> &getPositions();
        virtual const std::vector<glm::vec3> &getNormals();
        virtual const std::vector<glm::vec2> &getUvCoords0();
        virtual const std::vector<unsigned> &getIndices();
        virtual void load(const char *path) = 0;
    };
}