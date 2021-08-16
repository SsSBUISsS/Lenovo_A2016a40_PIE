#!/bin/bash
clear
rm -rf completed/ build.log out/
echo "Start compilating"
sleep 1
clear
echo "3"
sleep 1
clear
echo "2"
sleep 1
clear
echo "1"
sleep 1
clear
echo "START"
sleep 1
clear
export ARCH=arm64
export CROSS_COMPILE=~/aarch64-linux-gnu-6.3.1/bin/aarch64-linux-gnu-
#export CROSS_COMPILE=~/tools/GCC/4.9.4/gcc1/bin/aarch64-linux-gnu-
export KBUILD_BUILD_USER=SsSBUISsS
export KBUILD_BUILD_HOST=4pda
make O=out k37mv1_64_bsp_defconfig
make O=out -j12 | tee build log
#clear
mkdir completed/
mv out/arch/arm64/boot/Image.gz-dtb completed/
mv completed/Image.gz-dtb ~/AIK-Linux/split_img/boot.img-zImage
echo "Completed. The new kernel in the completed folder."
