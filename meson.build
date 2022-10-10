project('mesh-loader','cpp',
    version:'0.1.0',
    default_options:['buildtype=release'])
src_assembler=run_command('./srcAssembler.py',check:true)
headers_assembler=run_command('./headersAssembler.py',check:true)
sources=src_assembler.stdout().strip().split('\n')
headers=headers_assembler.stdout().strip().split('\n')
include_dir='./include'
assimp=dependency('assimp')
mesh_loader=library('mesh-loader',sources,include_directories:[include_dir],dependencies:[assimp],
    install:true)

pkg=import('pkgconfig')
pkg.generate(mesh_loader,install_dir:'/usr/local/pkgconfig')
install_headers(headers,subdir:'mesh-loader')
