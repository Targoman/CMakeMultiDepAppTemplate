# QBuildSystem-sampleApp
A template CMake project for a multi dependency C++ application

To configure the project run:

```bash
git submodule update --init --recursive
cmake -S . -B out/build
```

in the root directory of the project, then to build the project run:

```bash
cmake --build out/build
```

Have fun :)
