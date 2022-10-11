#pragma once
#include <mesh-loader/MeshBase.h>
namespace meshLoader
{
    class MeshUV0 : public MeshBase
    {
    public:
        using MeshBase::MeshBase;
        std::vector<glm::vec2> getUvCoords0() override;
        void _load(const char *path, int idx) override;
        unsigned verticesCount() override;
    };
}