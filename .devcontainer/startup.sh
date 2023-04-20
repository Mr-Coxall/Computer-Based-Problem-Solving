#!/bin/bash

# Copy .bashrc to home directory
cp ./.devcontainer/.bashrc ~/.bashrc

sudo apt update
sudo apt -y full-upgrade
sudo apt install -y mono-devel
pip3 install cpplint

sudo mkdir /usr/share/fonts/truetype/ComicMono
sudo cp ./.devcontainer/ComicMono.ttf /usr/share/fonts/truetype/ComicMono

# shellcheck source=/dev/null
source ~/.bashrc
git config pull.rebase false