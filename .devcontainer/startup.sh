#!/bin/bash

# Copy .bashrc to home directory
cp ./.devcontainer/.bashrc ~/.bashrc

sudo apt update
sudo apt -y full-upgrade
sudo apt install -y mono-devel
pip3 install cpplint

sudo mkdir /usr/share/fonts/truetype/ComicMono
sudo cp ./.devcontainer/ComicMono.ttf /usr/share/fonts/truetype/ComicMono

# install ttyd, ffmpeg and vhs
sudo apt-get install -y build-essential cmake git libjson-c-dev libwebsockets-dev
git clone https://github.com/tsl0922/ttyd.git
cd ttyd && mkdir build && cd build
cmake ..
make && sudo make install
cd ../..
sudo apt install ffmpeg -y
sudo mkdir -p /etc/apt/keyrings
curl -fsSL https://repo.charm.sh/apt/gpg.key | sudo gpg --dearmor -o /etc/apt/keyrings/charm.gpg
echo "deb [signed-by=/etc/apt/keyrings/charm.gpg] https://repo.charm.sh/apt/ * *" | sudo tee /etc/apt/sources.list.d/charm.list
sudo apt update && sudo apt install vhs -y



# shellcheck source=/dev/null
source ~/.bashrc
git config pull.rebase false