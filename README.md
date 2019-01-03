### 用处
使用 cmake 获取 git 信息，自动生成版本号

### 使用
```
git clone https://github.com/xieydd/cmake-with-git-metadata.git
git fetch --tags
mkdir build
cd build
cmake ..
cp ../version/version.c ../
make && ./version
```
