#include <MeshBase.h>

using namespace meshLoader;
using namespace std;
using namespace glm;

MeshBase::MeshBase(unique_ptr<MeshBase> wrappee) : wrappee(wrappee)
{
}
const vector<vec3> &MeshBase::getPositions()
{
    return wrappee->getPositions();
}
const vector<vec3> &MeshBase::getNormals()
{
    return wrappee->getNormals();
}
const vector<vec2> &MeshBase::getUvCoords0()
{
    return wrappee->getUvCoords0();
}