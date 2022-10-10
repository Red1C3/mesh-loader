#pragma once
#include <MeshBase.h>
namespace meshLoader
{
    class MeshPos : public MeshBase
    {
    public:
        using MeshBase::MeshBase;
        std::vector<glm::vec3> getPositions() override;
        void load(const char *path,int idx) override;
    };
}