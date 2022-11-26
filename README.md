# sandbox

[![conan](https://github.com/koregi/sandbox/actions/workflows/conan.yml/badge.svg)](https://github.com/koregi/sandbox/actions/workflows/conan.yml)
[![build](https://github.com/koregi/sandbox/actions/workflows/build.yml/badge.svg)](https://github.com/koregi/sandbox/actions/workflows/build.yml)

## requirements

```
conan 1.53.0
cmake 3.22.1
```

## build

```bash
mkdir -p build
pushd build
conan install .. --build=missing
cmake ..
cmake --build .
```


