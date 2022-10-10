#pragma once
#include <MeshBase.h>
namespace meshLoader
{
    class MeshPos : public MeshBase
    {
    public:
        using MeshBase::MeshBase;
        virtual std::vector<glm::vec3> getPositions();
        virtual void load(const char *path,int idx);
    };
}