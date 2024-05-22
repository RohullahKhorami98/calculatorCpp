#!/bin/bash

currentDir=$(pwd)

buildDir="${currentDir}"/build
if [ -f "${buildDir}" ]; then
    rm -r "${buildDir}" 
    mkdir -p "${buildDir}"
    cd "${buildDir}"
    cmake ..
    make
else
    mkdir -p "${buildDir}"
    cd "${buildDir}"
    cmake ..
    make
fi