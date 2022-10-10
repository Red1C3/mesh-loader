#include <MeshIndices.h>
#include <assimp/scene.h>
using namespace meshLoader;
using namespace glm;
using namespace std;
vector<unsigned> MeshIndices::getIndices()
{
    return indices;
}
void MeshIndices::load(const char *path, int idx)
{
    if (wrappee != nullptr)
    {
        wrappee->load(path, idx);
    }
    auto mesh = importer.GetScene()->mMeshes[idx];
    for (int i = 0; i < mesh->mNumFaces; ++i)
    {
        for (int j = 0; j < mesh->mFaces[i].mNumIndices; ++j)
        {
            indices.push_back(mesh->mFaces[i].mIndices[j]);
        }
    }
}