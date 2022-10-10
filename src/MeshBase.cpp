#include <MeshBase.h>

using namespace meshLoader;
using namespace std;
using namespace glm;

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