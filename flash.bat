call build.bat
cd bin
cortexflash -X -w output.hex -v -g 0x0 COM3
