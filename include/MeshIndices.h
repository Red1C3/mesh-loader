#pragma once
#include <MeshBase.h>
namespace meshLoader
{
    class MeshIndices : public MeshBase
    {
    public:
        using MeshBase::MeshBase;
        std::vector<unsigned> getIndices() override;
        void _load(const char *path, int idx);
    };
}