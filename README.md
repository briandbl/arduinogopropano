arduinogopropano
================

A Arduino script to take panoramic photos with a GoPro camera and a servo.

Wifi
----

You will need a arduino board and the wifi shield.
The file that controls the gopro camera via wifi is wifi-arduinogopropano.ino

Hero Bus
---------

If you want to use the hero bus connected to the back of the gopro, instead of the wifi shield, use the herobus-arduinogopropano.ino file. Instructions of how to wire the cables to the arduino board are explained right there. You will need the autoexec.ash hack on the gopro camera to work correctly.

Timelapse
---------

If you dont want to use any of above, then use tl-arduinogopropano.ino file. You will need a autoexec.ash hack on the gopro camera to be sync correctly with the board.

Stitching
----------

You can stitch the gopro pics using photoshop to make a panoramic strip. If you want to share your pano:
* Copy the GoPro pics
* Go to www.photosynth.net/preview 
* You need a photosynth account, its free.
* Click on the UPLOAD button.
* Select the gopro pics you copied before.
* Wait...

Enjoy! :octocat:
