SparkFun Pulsed Coherent Radar Sensor - Acconeer XM125 (Qwiic)
========================================

[![SparkFun Pulsed Coherent Radar Sensor – Acconeer XM125 (Qwiic)](https://cdn.sparkfun.com/r/600-600/assets/parts/2/4/8/6/5/SEN-24540-Pulsed-Coherent-Radar-Sensor-Feature.jpg)](https://www.sparkfun.com/products/24540)

[*SparkFun Pulsed Coherent Radar Sensor – Acconeer XM125 (Qwiic) (SEN-24540)*](https://www.sparkfun.com/products/24540)

Forget ultrasonic and infrared sensors; the SparkFun Qwiic Pulsed Coherent Radar Sensor - Acconeer XM125 brings powerful 60 GHz radar technology to your projects. This sensor isn't limited to surface detection; it can see through walls, cabinets, and even pockets (depending on the material), making it perfect for unique applications. Measure distances with millimeter precision, detect motion, the speed of an object, or even gestures!

The XM125 boasts an impressive range of up to 20 meters, allowing you to create long-range sensing projects. The actual measurable distance is dependent on the object size, shape, dielectric properties, and lens (e.g. water level measurements up to 20 meters with lens utilization, human presence detection up to 7 meters with lens-free utilization). Despite its power, the sensor has remarkably low in power consumption, which is ideal for battery-powered applications. The real magic lies in the sensor's ability to do more than measure distance; the XM125 can differentiate between stationary objects and moving targets using pulsed coherent radar. This means you can sense an object's presence and how fast something is moving!

We've included a USB type-C connector, ESD protection diodes on the USB data lines, and a CH340C USB-to-serial converter to connect the XM125 directly to your computer's COM port. Power is regulated down for the XM125 with the AP2112K 3.3V/600mA and RT9080 1.8V/600mA voltage regulators. Buttons for reset and boot are included when resetting the module or setting the board into bootloader mode. Utilizing our handy Qwiic system, no soldering is required to connect it to the rest of your system. However, we still have broken out 0.1in.-spaced pins if you prefer a breadboard.

We've written an Arduino library when the I<sup>2</sup>C presence or distance detection firmware is loaded onto the XM125 module. With the I<sup>2</sup>C presence detection firmware, you can sense when an object is moving in an environment and how far away it is from the sensor. You can detect slow and fast movements with the inter-presence and intra-presence scores, respectively. The I<sup>2</sup>C distance detection firmware is similar to the presence detector by providing distance measurements. However, distance detection will provide information when it detects objects within range. The distance detection firmware can also adjust the sensor's threshold and sensitivity. The read range can also be configured to a certain distance away with either firmware.

Acconeer has also developed a visualization tool written in Python that demonstrates data collection in real time. The [Acconeer Exploration Tool](https://github.com/acconeer/acconeer-python-exploration) is an incredible resource, especially when starting out with the XM125 module to debug and explore the sensor's capabilities. This allows you to fine-tune the sensor for your application. For example, it will graph distance or presence sensing, giving you a count of the number of sweeps, which communication port data is being sent through, and much more. It will also guide you to the optimal sensor settings and help you fine-tune the data processing for your final product implementation. The tool supports Windows and Linux and requires Python version 3.8 or later. This tool is available through their GitHub Repository. Head on over and take a look!

With the SparkFun Qwiic Pulsed Coherent Radar Sensor, a world of new project possibilities opens up. Imagine creating presence detection systems for smart homes and security applications, parking space occupancy detection, gesture recognition interfaces for unique user control, level measurement (for example, in tanks or waste containers), through-wall imaging systems for search and rescue, or even advanced robotics with object avoidance and navigation.

Repository Contents
-------------------

* **.github/workflows** - YAML files used for GitHub Actions and GitHub Pages/mkdocs
* **/Firmware** - Firmware for the XM125 module
* **/Hardware** - Eagle design files (.brd, .sch)
  * **/Production** - Production panel files (.brd)
* **/docs** - Online documentation files
  * **/assets** - Folder containing all the file assets used for product documentation
    * **/board_files** - Copy of design files used for product documentation
    * **/component_documentation** - Datasheets and manuals for hardware components
    * **/img** - Images for product documentation
  * **/github** - Files stating how to contribute and filing issues used for product documentation
  * **/javascript** - Folder containing custom javascript used for product documentation
  * **/stylesheet** - Folder containing CSS files used for product documentation
* **/overrides** - Customization files used for product documentation
  * **/.icons** - Icons used for GitHub used for product documentation
  * **./partials** - Used for product documentation

Documentation
--------------
* **[Library](https://github.com/sparkfun/SparkFun_Qwiic_XM125_Arduino_Library)** - Arduino library for the SparkFun Qwiic Pulsed Coherent Radar Sensor - XM125.
* **[Hookup Guide](https://docs.sparkfun.com/SparkFun_Qwiic_Pulsed_Radar_Sensor_XM125)** - Basic hookup guide for the SparkFUn Qwiic Pulsed Coherent Radar Sensor - XM125.

Product Versions
----------------
* [SEN-24540](https://www.sparkfun.com/products/24540) - Initial Release

Version History
---------------
* V1.0 - Intial Release

License Information
-------------------

This product is _**open source**_! 

Please review the LICENSE.md file for license information. 

If you have any questions or concerns on licensing, please contact technical support on our [SparkFun forums](https://forum.sparkfun.com/viewforum.php?f=152).

Distributed as-is; no warranty is given.

- Your friends at SparkFun.

_<COLLABORATION CREDIT>_
