#pragma once
#include <MeshBase.h>
namespace meshLoader
{
    class MeshNorm : public MeshBase
    {
    public:
        using MeshBase::MeshBase;
        std::vector<glm::vec3> getNormals() override;
        void _load(const char *path, int idx) override;
    };
}