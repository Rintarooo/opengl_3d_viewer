# Simple 3D model viewer

## Usage
## setup
```bash
# Install GLM
git clone https://github.com/g-truc/glm.git
mkdir include
mv ./glm/glm/ ./include
```

## local on M1 Mac
```bash
# you need to install homebrew
brew -v

# install freeglut to use GLUT library
brew install freeglut
xeyes
glxgears
```

## docker
```bash
docker-compose -f .devcontainer/docker-compose.yml build m1mac-opengl
# xhost local:root
xhost +localhost
xhost + local:
# defaults write org.xquartz.X11 enable_iglx -bool YES
docker-compose -f .devcontainer/docker-compose.yml run --rm m1mac-opengl /bin/bash
xeyes
glxgears

```

## GCP VM
```bash
# Dockerfileからビルド
docker-compose -f .devcontainer/docker-compose.yml build opengl-vm
# Xサーバーのアクセス権限を与える
xhost local:root
# コンテナ入る
docker-compose -f .devcontainer/docker-compose.yml run --rm opengl-vm /bin/bash
# GUI表示出来るか確認
xeyes
# C++ビルド
./build.sh
```

$ glxinfo | grep "OpenGL version" 
OpenGL version string: 2.1 Metal - 83.1