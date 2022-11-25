# sandbox

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


