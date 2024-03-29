!!! arduino
    This example assumes you are using the latest version of the Arduino IDE on your desktop. If this is your first time using the Arduino IDE, library, or board add-on, please review the following tutorials.

    - [Installing the Arduino IDE](https://learn.sparkfun.com/tutorials/installing-arduino-ide)
    - [Installing Board Definitions in the Arduino IDE](https://learn.sparkfun.com/tutorials/installing-board-definitions-in-the-arduino-ide)
    - [Installing an Arduino Library](https://learn.sparkfun.com/tutorials/installing-an-arduino-library)

!!! note
    If you've never connected an CH340 device to your computer before, you may need to install drivers for the USB-to-serial converter. Check out our section on "[How to Install CH340 Drivers](https://learn.sparkfun.com/tutorials/how-to-install-ch340-drivers)" for help with the installation.

    - [How to Install CH340 Drivers](https://learn.sparkfun.com/tutorials/how-to-install-ch340-drivers/all)

SparkFun has written a library to work with the Acconeer XM125. You can obtain this library through the Arduino Library Manager by searching for "**SparkFun XM125**". Find the one written by SparkFun Electronics and install the latest version. Users who prefer to manually install the library can get it from the [GitHub Repository](https://github.com/sparkfun/SparkFun_Qwiic_XM125_Arduino_Library) or download the .ZIP by clicking the button below:

<div style="text-align: center"><a href="https://github.com/sparkfun/SparkFun_Qwiic_XM125_Arduino_Library/archive/refs/heads/main.zip" class="md-button">SparkFun XM125 A121 Arduino Library (ZIP)</a></div>

!!! note
    The SparkFun Qwiic XM125 Arduino Library uses the [SparkFun Toolkit](https://github.com/sparkfun/SparkFun_Toolkit) as a dependency. This should automatically download when installing  the library using the Arduino Library Manager. For users that are installing the XM125 library manually, make sure to download the SparkFun Toolkit as well. At the time of writing, we were using the following Arduino Libraries, firmware binaries, board add-ons.


     * Arduino Libraries
        * **SparkFun Qwiic XM125 Arduino Library v1.0.1**
        * **SparkFun Toolkit v0.9.1**
    * **Acconeer XM125 A121 v1.5.0** (i.e. SDK for XM125)
        * **i2c_presence_detector.bin**
        * **i2c_distance_detector.bin**
     * Board Definitions
        * **esp32 by Espressif v2.0.14** for the IoT RedBoard - ESP32.
