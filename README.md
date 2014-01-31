arduinogopropano
================

A Arduino script to take panoramic photos with a GoPro camera and a servo.

Wifi
----

You will need a arduino board and the wifi shield.
The file that controls the gopro camera via wifi is wifi-arduinogopropano.ino

Timelapse
---------

If you want to use the gopro itself, instead of the wifi shield, use the tl-arduinogopropano.ino file. Instructions are explained right there. You will need the autoexec.ash hack on the gopro camera to work correctly.


What it does
------------

The arduino rotates a servo 360 degrees, between the degrees, 6 times it stop to let the gopro take a pic, via wifi or timelapse.

Stitching
----------

You can stitch the gopro pics using photoshop to make a panoramic strip. If you want to share your pano:
* Copy the GoPro pics
* Go to www.photosynth.net/preview 
* You need a photosynth account, its free.
* Select panorama mode.
* Click on the UPLOAD button.
* Select the gopro pics you copied before.
* Wait...

Enjoy! :octocat:
