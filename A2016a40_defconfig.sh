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
export ARCH=arm
export CROSS_COMPILE=~/arm-linux-androideabi-4.9/bin/arm-linux-androidkernel-
export KBUILD_BUILD_USER=SsSBUISsS
export KBUILD_BUILD_HOST=4pda
make O=out A2016a40_defconfig
make O=out -j12 | tee build log
#clear
mkdir completed/
mv out/arch/arm/boot/zImage-dtb completed/
echo "Completed. The new kernel in the completed folder."
