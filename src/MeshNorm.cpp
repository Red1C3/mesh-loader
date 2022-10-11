#include <mesh-loader/MeshNorm.h>
#include <assimp/scene.h>
using namespace meshLoader;
using namespace std;
using namespace glm;

vector<vec3> MeshNorm::getNormals()
{
    return normals;
}
void MeshNorm::_load(const char *path, int idx)
{
    if (wrappee != nullptr)
    {
        wrappee->_load(path, idx);
    }
    auto mesh = importer.GetScene()->mMeshes[idx];
    for (int i = 0; i < mesh->mNumVertices; ++i)
    {
        normals.push_back(vec3(mesh->mNormals[i].x,
                               mesh->mNormals[i].y,
                               mesh->mNormals[i].z));
    }
}