#include <mesh-loader/MeshUV0.h>
#include <assimp/scene.h>
using namespace meshLoader;
using namespace std;
using namespace glm;
vector<vec2> MeshUV0::getUvCoords0()
{
    return uvCoords0;
}
void MeshUV0::_load(const char *path, int idx)
{
    if (wrappee != nullptr)
    {
        wrappee->_load(path, idx);
    }
    auto mesh = importer.GetScene()->mMeshes[idx];
    for (int i = 0; i < mesh->mNumVertices; ++i)
    {
        uvCoords0.push_back(vec2(mesh->mTextureCoords[0][i].x, mesh->mTextureCoords[0][i].y));
    }
}
unsigned MeshUV0::verticesCount(){
    return uvCoords0.size();
}