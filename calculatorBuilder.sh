#!/bin/bash

currentDir=$(pwd)

buildDir="${currentDir}"/build
if [ -f "${buildDir}" ]; then
    rm -r "${buildDir}" 
    mkdir -p "${buildDir}"
    cd "${buildDir}" || exit
    cmake ..
    make
else
    mkdir -p "${buildDir}"
    cd "${buildDir}" || exit
    cmake ..
    make
fi