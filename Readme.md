# mesh-loader

A raw data mesh loader

## Support
All Assimp supported formats are supported, so far, the library extracts position, normals, uv0 and indices data.

## Requirements
GLM and Assimp must be installed on the system.

## Usage
The library uses the decorator pattern to load mesh data so it only loads what you need, if you request a data that wasn't loaded, an empty vector will be returned.

The library takes advantage of GLM's datatypes which are widely used in graphics applications.

Usage example:
```
unique_ptr<MeshIndices> mesh = make_unique<MeshIndices>(
        make_unique<MeshUV0>(
            make_unique<MeshNorm>(
                make_unique<MeshPos>(
                    make_unique<MeshBase>(nullptr)))));

mesh->load("./data/cube.glb", 0);

vector<vec3> pos = mesh->getPositions();
cout << pos.size() << endl;
for (vec3 v : pos)
{
    cout << v.x << " " << v.y << " " << v.z << endl;
}

vector<vec3> norms = mesh->getNormals();
cout << norms.size() << endl;
for (vec3 v : norms)
{
    cout << v.x << " " << v.y << " " << v.z << endl;
}

vector<vec2> uv0 = mesh->getUvCoords0();
cout << uv0.size() << endl;
for (vec2 v : uv0)
{
    cout << v.x << " " << v.y << endl;
}

vector<unsigned> indices =mesh->getIndices();
cout << indices.size() << endl;
for (unsigned i : indices)
{
    cout << i << endl;
}
```

## Installtion
On Unix-based systems, it's easier to use Meson for installation, Windows users will have to compile and move the compiled files to a suitable location.

## Motivation
I've written mesh loading code many times and just decided to create a loader instead !