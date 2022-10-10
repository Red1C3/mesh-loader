#include <MeshBase.h>
#include <assimp/postprocess.h>
#include <assimp/scene.h>
#include <stdexcept>

using namespace meshLoader;
using namespace std;
using namespace glm;
using namespace Assimp;

Importer MeshBase::importer;

MeshBase::MeshBase(unique_ptr<MeshBase> wrappee) : wrappee(move(wrappee))
{
}
const vector<vec3> &MeshBase::getPositions()
{
    if (wrappee == nullptr)
        return positions;
    return wrappee->getPositions();
}
const vector<vec3> &MeshBase::getNormals()
{
    if (wrappee == nullptr)
        return normals;
    return wrappee->getNormals();
}
const vector<vec2> &MeshBase::getUvCoords0()
{
    if (wrappee == nullptr)
        return uvCoords0;
    return wrappee->getUvCoords0();
}
const vector<unsigned> &MeshBase::getIndices()
{
    if (wrappee == nullptr)
        return indices;
    return wrappee->getIndices();
}
void MeshBase::load(const char *path, int idx)
{
    auto scene = importer.ReadFile(path, aiProcess_Triangulate);
    if (scene->mNumMeshes <= idx)
    {
        throw runtime_error(string("Requested index " +
                                   to_string(idx) +
                                   " At mesh " +
                                   path +
                                   " doesn't exist\n"));
    }
}
void MeshBase::closeFile()
{
    importer.FreeScene();
}