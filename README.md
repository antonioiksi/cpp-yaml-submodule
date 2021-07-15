# Example git submodule and cmake add_subdirectory 

## Getting started 
```sh
# clone project and submodules
git clone https://github.com/antonioiksi/cpp-yaml-submodule.git
git submodule init
git submodule update
git submodule status

# build project
rm -rf build && mkdir build && cd build && cmake .. && cmake --build . 
```
## First time add submodule
```sh
git submodule add --branch master --name yaml-cpp git@github.com:jbeder/yaml-cpp.git ext/yaml-cpp
cd ext/yaml-cpp
git checkout yaml-cpp-0.7.0
cd ../../ 
git submodule status

git submodule set-branch --branch yaml-cpp-0.7.0 yaml-cpp

```