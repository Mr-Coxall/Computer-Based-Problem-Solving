#!/bin/bash

# Copy .bashrc to home directory
cp ./.devcontainer/.bashrc ~/.bashrc
# shellcheck source=/dev/null
source ~/.bashrc

sudo apt update
sudo apt -y full-upgrade
sudo apt install -y mono-devel
pip3 install cpplint
