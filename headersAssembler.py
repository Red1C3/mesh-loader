#!/bin/python3

import os
from posix import listdir
from posixpath import join
cwd = os.getcwd()
cwd = cwd+'/include/mesh-loader'
h_files = [f for f in listdir(cwd) if os.path.isfile(
    join(cwd, f)) and os.path.splitext(f)[1] == '.h']
for f in h_files:
    print('./include/mesh-loader/'+f)
