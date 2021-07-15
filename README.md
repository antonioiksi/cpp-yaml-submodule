#

##
```sh

rm -rf build && mkdir build && cd build && cmake .. && cmake --build . 
```
##
```sh
git submodule add --branch master --name yaml-cpp git@github.com:jbeder/yaml-cpp.git ext/yaml-cpp
cd ext/yaml-cpp
git checkout yaml-cpp-0.7.0
cd ../../ 
git submodule status

git submodule set-branch --branch yaml-cpp-0.7.0 yaml-cpp



git submodule set-branch --branch yaml-cpp-0.7.0 -- ext/yaml-cpp



 git submodule add --name yaml-cpp https://github.com/jbeder/yaml-cpp.git

 git submodule set-branch --branch aBranch -- <submodule_path>)

git submodule set-branch --branch yaml-cpp-0.6.0 external/yaml-cpp


git submodule init
git submodule add -b yaml-cpp-0.6.3 --name yaml-cpp -- https://github.com/jbeder/yaml-cpp.git ext/yaml-cpp

git submodule add -b yaml-cpp-0.6.3 --name yaml-cpp https://github.com/jbeder/yaml-cpp.git ext/yaml-cpp

git submodule add -t yaml-cpp-0.6.2 --name yaml-cpp https://github.com/jbeder/yaml-cpp.git ext/yaml-cpp

git submodule add -b 9a36242 --name yaml-cpp https://github.com/jbeder/yaml-cpp.git ext/yaml-cpp

```