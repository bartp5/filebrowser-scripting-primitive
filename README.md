filebrowser
===========

A filebrowser scripting primitive for the boox m92. Most code was taken from the 
Scibble application by peter-x. So are these compilation instructions:


#### Compiling for arm:

Make sure that you installed the SDK to `/opt/onyx`. Then simply use the script
`build_arm.sh`.

#### Debugging on arm:

Optimally, `gdbserver` could be used (available in the toolchain), but I was not
yet able to achieve a stable connection to the device. Another (less convenient)
option is to use core dumps. Use this file to run scribble on the ebook reader:

    #!/bin/sh
    cd /media/flash
    ulimit -c unlimited
    ./scribble

If the program crashes, a file named `core` is created. The cross gdb found in the
toolchain can be used to analyze this file. Under QtCreator, use Settings->Toolchain
to register the toolchain in `/opt/freescale/...` and then open the core file via
Debug->Debug core file.
