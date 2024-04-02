


The [SparkFun Qwiic Pulsed Coherent Radar Sensor features Acconeer's XM125 module](https://www.sparkfun.com/products/24540) and adds powerful 60 GHz radar technology to your projects. This sensor isn't limited to surface detection; it can see through walls, cabinets, and even pockets (depending on the material), making it perfect for unique applications. Measure distances with millimeter precision, detect motion, the speed of an object, or even gestures!

<center>
<div class="grid cards" style="width:500px;" markdown>

-   <a href="https://www.sparkfun.com/products/24540">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/r/600-600/assets/parts/2/4/8/6/5/SEN-24540-Pulsed-Coherent-Radar-Sensor-Feature.jpg" style="width:140px; height:140px; object-fit:contain;" alt="SparkFun Qwiic Pulsed Coherent Radar Sensor - Acconeer XM125">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/24540">
      <b>SparkFun Qwiic Pulsed Coherent Radar Sensor - Acconeer XM125</b>
      <br />
      SEN-24540
      <br />
      <center>[Purchase from SparkFun :fontawesome-solid-cart-plus:](https://www.sparkfun.com/products/24540){ .md-button .md-button--primary }</center>
    </a>
</div>
</center>

<div style="text-align: center;">
  <iframe width="560" height="315" src="https://www.youtube.com/embed/BdbWGezCCSg?si=iPh1UjlKv02k81HY" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>
</div>

The XM125 boasts an impressive range of up to 20 meters, allowing you to create long-range sensing projects. The actual measurable distance is dependent on the object size, shape, dielectric properties, and lens (e.g. water level measurements up to 20 meters with lens utilization, human presence detection up to 7 meters with lens-free utilization). Despite its power, the sensor has remarkably low in power consumption, which is ideal for battery-powered applications. The real magic lies in the sensor's ability to do more than measure distance. The XM125 can differentiate between stationary objects and moving targets using pulsed coherent radar. This means you can sense an object's presence and how fast it is moving.

In this tutorial, we'll go over the hardware and how to hookup the breakout board. We will also go over a few basic Arduino examples to get started!



### Required Materials

To follow along with this tutorial, you will need the following materials at a minimum. You may not need everything though depending on what you have. Add it to your cart, read through the guide, and adjust the cart as necessary.

* 1x [Reversible USB A to C Cable - 0.8m [CAB-15425]](https://www.sparkfun.com/products/15425)
* 1x [SparkFun IoT RedBoard - ESP32 Development Board [WRL-19177]](https://www.sparkfun.com/products/19177)
* 1x [Flexible Qwiic Cable - 100mm [PRT-17259]](https://www.sparkfun.com/products/17259)
* 1x [SparkFun Pulsed Coherent Radar Sensor - Acconeer XM125 (Qwiic) [SEN-24540]](https://www.sparkfun.com/products/24540)

<div class="grid cards hide col-4" markdown>

<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/15425">
      <figure markdown>
        <img src="https://cdn.sparkfun.com//assets/parts/1/3/9/8/4/15425-Reversible_USB_A_to_C_Cable_-_0.8m-02.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Reversible USB A to C Cable - 0.8m">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/15425">
      <b>Reversible USB A to C Cable - 0.8m</b>
      <br />
      CAB-15425
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/19177">
      <figure markdown>
        <img src="https://cdn.sparkfun.com//assets/parts/1/8/8/0/0/ESP32_03.jpg" style="width:140px; height:140px; object-fit:contain;" alt="SparkFun IoT RedBoard - ESP32 Development Board">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/19177">
      <b>SparkFun IoT RedBoard - ESP32 Development Board</b>
      <br />
      WRL-19177
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/17259">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/parts/1/6/2/4/6/17259-Flexible_Qwiic_Cable_-_100mm-01.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Flexible Qwiic Cable - 100mm">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/17259">
      <b>Flexible Qwiic Cable - 100mm</b>
      <br />
      PRT-17259
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/24540">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/r/600-600/assets/parts/2/4/8/6/5/SEN-24540-Pulsed-Coherent-Radar-Sensor-Feature.jpg" style="width:140px; height:140px; object-fit:contain;" alt="SparkFun Qwiic Pulsed Coherent Radar Sensor - Acconeer XM125 (Qwiic)">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/24540">
      <b>SparkFun Qwiic Pulsed Coherent Radar Sensor - Acconeer XM125 (Qwiic)</b>
      <br />
      SEN-24540
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
</div>



### Tools &nbsp;_(Optional)_

You will need a soldering iron, solder, and [general soldering accessories](https://www.sparkfun.com/categories/49) for a secure connection when using the plated through holes. You may also need a hobby knife to modify the jumpers.

<!--
* [PINECIL Soldering Iron Kit [TOL-24063]](https://www.sparkfun.com/products/24063)
* [Solder Lead Free - 15-gram Tube [TOL-9163]](https://www.sparkfun.com/products/9163)
* [Flush Cutters - Xcelite [TOL-14782]](https://www.sparkfun.com/products/14782)
* [Hook-Up Wire - Assortment (Stranded, 22 AWG) [PRT-11375]](https://www.sparkfun.com/products/11375)
* [Wire Stripper - 20-30 AWG Solid (22-32 AWG Stranded) [TOL-22263]](https://www.sparkfun.com/products/22263)
* [Magnetic Third-Hand Kit [TOL-19944](https://www.sparkfun.com/products/19944)]
* [Hobby Knife [TOL-09200]](https://www.sparkfun.com/products/9200)
* [Multimeter [TOL-12966]](https://www.sparkfun.com/products/12966)
* [Banana to Alligator Cable [CAB-00509](https://www.sparkfun.com/products/509)
* [Segger J-Link EDU Mini [PGM-24078]](https://www.sparkfun.com/products/24078)
-->

<div class="grid cards hide col-4" markdown>

-   <a href="https://www.sparkfun.com/products/24063">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/r/600-600/assets/parts/2/4/3/8/5/KIT-24063-PINECIL-Soldering-Iron-Kit-Feature.jpg" style="width:140px; height:140px; object-fit:contain;" alt="PINECIL Soldering Iron Kit">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/24063">
      <b>PINECIL Soldering Iron Kit</b>
      <br />
      TOL-24063
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/9163">
      <figure markdown>
        <img src="https://cdn.sparkfun.com//assets/parts/2/5/8/7/09162-02-L.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Solder Lead Free - 15-gram Tube">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/9163">
      <b>Solder Lead Free - 15-gram Tube</b>
      <br>
      TOL-09163
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/11375">
      <figure markdown>
        <img src="https://cdn.sparkfun.com//assets/parts/7/1/2/0/11375-Hook-Up_Wire_-_Assortment__Solid_Core__22_AWG_-01.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Hook-Up Wire - Assortment (Stranded, 22 AWG)">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/11375">
      <b>Hook-Up Wire - Assortment (Stranded, 22 AWG)</b>
      <br />
      PRT-11375
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/24771">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/r/600-600/assets/parts/2/3/9/4/7/24771-Wire-Strippers-Feature.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Wire Strippers - 20-30 AWG">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/24771">
      <b>Wire Strippers - 20-30 AWG</b>
      <br />
      TOL-24771
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/14782">
      <figure markdown>
        <img src="https://cdn.sparkfun.com//assets/parts/1/3/0/3/6/14782-Flush_Cutters_-_Xcelite-02.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Flush Cutters - Xcelite">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/14782">
      <b>Flush Cutters - Xcelite</b>
      <br />
      TOL-14782
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->

-   <a href="https://www.sparkfun.com/products/19944">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/parts/1/9/6/7/9/19944-Magnetic_Third-Hand_Kit-01.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Magnetic Third-Hand Kit">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/19944">
      <b>Magnetic Third-Hand Kit</b>
      <br />
      TOL-19944
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->

-   <a href="https://www.sparkfun.com/products/9200">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/r/600-600/assets/parts/2/6/4/6/09200-Hobby_Knife-01.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Hobby Knife">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/9200">
      <b>Hobby Knife</b>
      <br />
      TOL-09200
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->

-   <a href="https://www.sparkfun.com/products/12966">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/parts/9/9/0/7/Multimeter.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Digital Multimeter - Basic">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/12966">
      <b>Digital Multimeter - Basic</b>
      <br />
      TOL-12966
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->

-   <a href="https://www.sparkfun.com/products/509">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/parts/3/4/9/509-feature.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Banana to Alligator Cable">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/509">
      <b>Banana to Alligator Cable</b>
      <br />
      CAB-00509
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->

-   <a href="https://www.sparkfun.com/products/24078">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/parts/2/4/4/0/2/24078-J-Link-Mini-Feature.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Segger J-Link EDU Mini">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/24078">
      <b>Segger J-Link EDU Mini</b>
      <br />
      PGM-24078
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
</div>

!!! note
    For advanced users, the [Acconeer's XM125 Software User Guide](../assets/component_documentation/XM125%20Software%20User%20Guide.pdf) recommends using a Segger J-Link debug probe. They list the J-Link BASE Compact or an ST-Link debugger. For users that are using the XM125 module for hobby or educational use, you can also use the Segger J-Link EDU Mini. The J-Link EDU Mini is a stripped-down, budget-friendly model of the J-Link debug probe created for educational use. Even with its reduced size, it maintains the J-Link features.



### Prototyping Accessories &nbsp;_(Optional)_

For users connecting to the PTHs, you will need the following prototyping accessories. You could use IC hooks for a temporary connection depending on your setup and what you have available. Of course, you will want to the solder header pins for a secure connection. Below are a few prototyping accessories that you may want to consider.

<!--
* [Breadboard - Self-Adhesive (White) [PRT-12002]](https://www.sparkfun.com/products/12002)
* [IC Hook with Pigtail [CAB-09741]](https://www.sparkfun.com/products/9741)
* [Break Away Headers - Straight [PRT-00116]](https://www.sparkfun.com/products/116)
* [Female Headers [PRT-00115]](https://www.sparkfun.com/products/115)
* [Jumper Wires Premium 6" M/M Pack of 10 [PRT-08431]](https://www.sparkfun.com/products/8431)
* [Jumper Wire Kit - 140pcs [PRT-00124](https://www.sparkfun.com/products/124)
-->

<div class="grid cards hide col-4" markdown>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/12002">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/parts/8/5/0/3/12002-Breadboard_-_Self-Adhesive__White_-01.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Breadboard - Self-Adhesive (White)">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/12002">
      <b>Breadboard - Self-Adhesive (White)</b>
      <br />
      PRT-12002
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/9741">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/parts/3/6/9/6/09741-01.jpg" style="width:140px; height:140px; object-fit:contain;" alt="IC Hook with Pigtail">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/9741">
      <b>IC Hook with Pigtail</b>
      <br>
      CAB-09741
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/116">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/parts/1/0/6/00116-02-L.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Break Away Headers - Straight">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/116">
      <b>Break Away Headers - Straight</b>
      <br />
      PRT-00116
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/115">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/parts/1/0/5/00115-03-L.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Female Headers">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/115">
      <b>Female Headers</b>
      <br />
      PRT-00115
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/22890">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/parts/1/6/2/7/2/22890-_1.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Header - 2x5 Pin 1.27mm SMD Unshrouded (JTAG)">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/22890">
      <b>Header - 2x5 Pin 1.27mm SMD Unshrouded (JTAG)</b>
      <br />
      PRT-22890
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/8431">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/parts/1/1/8/1/JumperWire-Male-01-L.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Jumper Wires Premium 6" M/M Pack of 10">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/8431">
      <b>Jumper Wires Premium 6" M/M Pack of 10</b>
      <br />
      PRT-08431
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
-   <a href="https://www.sparkfun.com/products/124">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/parts/1/1/2/00124-Jumper_Wire_Kit_-_140pcs-01.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Jumper Wire Kit - 140pcs">
      </figure>
    </a>

    ---

    <a href="https://www.sparkfun.com/products/124">
      <b>Jumper Wire Kit - 140pcs</b>
      <br />
      PRT-00124
    </a>
<!-- ----------WHITE SPACE BETWEEN PRODUCTS---------- -->
</div>



### Suggested Reading

If you aren't familiar with the Qwiic Connection System, we recommend reading [here for an overview](https://www.sparkfun.com/qwiic).

<div style="text-align: center">
  <table style="border-style:none">
    <tr>
     <td style="text-align: center; vertical-align: middle;">
     <div style="text-align: center"><a href="https://www.sparkfun.com/qwiic"><img src="../assets/Qwiic-registered-updated.png" alt="Qwiic Connection System" title="Click to learn more about the Qwiic Connection System!"></a>
     </div>
    </td>
    </tr>
    <tr>
      <td style="text-align: center; vertical-align: middle;"><div style="text-align: center"><i><a href="https://www.sparkfun.com/qwiic">Qwiic Connection System</a></i></div></td>
    </tr>
  </table>
</div>

If you aren’t familiar with the following concepts, we also recommend checking out a few of these tutorials before continuing.

<div class="grid cards hide col-4" markdown>
<!-- ----------WHITE SPACE BETWEEN GRID CARDS---------- -->
-   <a href="https://learn.sparkfun.com/tutorials/i2c">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/c/264-148/assets/learn_tutorials/8/2/I2C-Block-Diagram.jpg" style="width:264px; height:148px; object-fit:contain;" alt="I2C">
      </figure>
    </a>

    ---

    <a href="https://learn.sparkfun.com/tutorials/i2c">
      <b>I2C</b>
    </a>
<!-- ----------WHITE SPACE BETWEEN GRID CARDS---------- -->
-   <a href="https://learn.sparkfun.com/tutorials/how-to-work-with-jumper-pads-and-pcb-traces/introduction">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/r/600-600/assets/learn_tutorials/6/6/4/PCB_TraceCutLumenati.jpg" style="width:264px; height:148px; object-fit:contain;" alt="How to Work with Jumper Pads and PCB Traces">
      </figure>
    </a>

    ---

    <a href="https://learn.sparkfun.com/tutorials/how-to-work-with-jumper-pads-and-pcb-traces/introduction">
      <b>How to Work with Jumper Pads and PCB Traces</b>
    </a>
<!-- ----------WHITE SPACE BETWEEN GRID CARDS---------- -->
-   <a href="https://learn.sparkfun.com/tutorials/how-to-solder-through-hole-soldering">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/learn_tutorials/5/Soldering_Action-01.jpg"style="width:264px; height:148px; object-fit:contain;" alt="How to Solder: Through-Hole Soldering">
      </figure>
    </a>

    ---

    <a href="https://learn.sparkfun.com/tutorials/how-to-solder-through-hole-soldering">
      <b>How to Solder: Through-Hole Soldering</b>
    </a>
<!-- ----------WHITE SPACE BETWEEN GRID CARDS---------- -->
-   <a href="https://learn.sparkfun.com/tutorials/installing-arduino-ide">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/learn_tutorials/6/1/arduinoThumb.jpg" style="width:264px; height:148px; object-fit:contain;" alt="Installing Arduino IDE">
      </figure>
    </a>

    ---

    <a href="https://learn.sparkfun.com/tutorials/installing-arduino-ide">
      <b>Installing Arduino IDE</b>
    </a>
<!-- ----------WHITE SPACE BETWEEN GRID CARDS---------- -->
-   <a href="https://learn.sparkfun.com/tutorials/installing-board-definitions-in-the-arduino-ide">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/c/178-100/assets/learn_tutorials/1/2/6/5/sparkfun_boards.PNG" style="width:264px; height:148px; object-fit:contain;" alt="Installing Board Definitions in the Arduino IDE">
      </figure>
    </a>

    ---

    <a href="https://learn.sparkfun.com/tutorials/installing-board-definitions-in-the-arduino-ide">
      <b>Installing Board Definitions in the Arduino IDE</b>
    </a>
<!-- ----------WHITE SPACE BETWEEN GRID CARDS---------- -->
-   <a href="https://learn.sparkfun.com/tutorials/iot-redboard-esp32-development-board-hookup-guide">
      <figure markdown>
        <img src="https://cdn.sparkfun.com/assets/learn_tutorials/2/2/5/7/285808434_548438690244031_7008413248633042033_n.jpg"style="width:264px; height:148px; object-fit:contain;" alt="IoT RedBoard ESP32 Development Board Hookup Guide">
      </figure>
    </a>

    ---

    <a href="https://learn.sparkfun.com/tutorials/iot-redboard-esp32-development-board-hookup-guide">
      <b>IoT RedBoard ESP32 Development Board Hookup Guide</b>
    </a>
<!-- ----------WHITE SPACE BETWEEN GRID CARDS---------- -->
</div>
