#!/bin/bash

./gource -1280x720 --log-format custom --realtime --load-config foo.cfig --multi-sampling --user-friction 0.25 --highlight-dirs -o coolLog-1280x720.ppm < coolLog.txt

ffmpeg -y -b 10000K -r 60 -f image2pipe -vcodec ppm -i coolLog-1280x720.ppm -vcodec libx264 -vpre slow -threads 0 -bf 0 coolLog.x264.mp4

