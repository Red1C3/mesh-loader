#pragma once
#include <MeshBase.h>
namespace meshLoader
{
    class MeshUV0 : public MeshBase
    {
        using MeshBase::MeshBase;
        std::vector<glm::vec2> getUvCoords0() override;
        void load(const char *path, int idx) override;
    };
}