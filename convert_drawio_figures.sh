#!/bin/bash

/usr/bin/find ./images -name *.drawio -exec rm -f {}.pdf \; -exec /snap/bin/drawio --crop -x -o {}.pdf {} \;