project('mesh-loader','cpp')
src_assembler=run_command('./srcAssembler.py',check:true)
sources=src_assembler.stdout().strip().split('\n')
include_dir='./include'
assimp=dependency('assimp')
mesh_loader=library('mesh-loader',sources,include_directories:[include_dir],dependencies:[assimp])