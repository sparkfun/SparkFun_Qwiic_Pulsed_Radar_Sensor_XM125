Before you are able to use the Exploration Tool with the XM125, you will also need to flash the appropriate firmware (e.g. the **acc_exploration_server_a121.bin**). You can use the [instructions outlined earlier with the STM32CubeProgrammer](../flashing_firmware_xm125). You can also use Acconeer's Exploration Tool to flash firmware as well.



### Installing XM125 Firmware with the Exploration Tool

As explained earlier, each application requires a specific firmware to be flashed on the XM125. By default, the presence detection firmware (i.e. _i2c_presence_detector.bin_) is loaded on the SparkFun Pulsed Coherent Radar Sensor - Acconeer XM125 (Qwiic). For users that are interested in loading other firmware, we recommend heading over Acconeer's developer site to download the latest firmware. At the time of writing, this should be located under **Developer Tools & Support** > **A121 Docs & Software** > **XM125 / XE125** > **Acconeer XM125 A121 (SDK for XM125)**.

<div style="text-align: center"><a href="https://developer.acconeer.com/home/a121-docs-software/xm125-xe125/" class="md-button">Download the XM125 Firmware!</a></div>

!!! note
    You will need an account to download the firmware.  Make sure to register for an account and sign in to download the XM125 firmware.



### Flashing Firmware

Open the Acconeer Exploration Tool. You'll be presented with two options. For the scope of this tutorial, you will select the **A121**.

<div style="text-align: center;">
  <table>
    <tr style="vertical-align:middle;">
     <td style="text-align: center; vertical-align: middle; border: solid 1px #cccccc;"><a href="../assets/img/Python_Exploration_Tool_Select_A121.JPG"><img src="../assets/img/Python_Exploration_Tool_Select_A121.JPG" width="600px" height="600px" alt="Select A121 on the Acconeer Exploration Tool"></a></td>
    </tr>
  </table>
</div>

Connect a USB between the SparkFun Pulsed Coherent Radar Sensor - Acconeer XM125 (Qwiic) and your computer.

<div style="text-align: center;">
  <table>
    <tr style="vertical-align:middle;">
     <td style="text-align: center; vertical-align: middle; border: solid 1px #cccccc;"><a href="../assets/img/SEN-24540-Pulsed_Coherent_Radar_Acconeer_XM125_A121_USB_Cable.jpg"><img src="../assets/img/SEN-24540-Pulsed_Coherent_Radar_Acconeer_XM125_A121_USB_Cable.jpg" width="600px" height="600px" alt="USB Cable Inserted into Pulsed Coherent Radar Sensor"></a></td>
    </tr>
  </table>
</div>

Select the **Flash** tab from the side navigation bar.  

<div style="text-align: center;">
  <table>
    <tr style="vertical-align:middle;">
     <td style="text-align: center; vertical-align: middle; border: solid 1px #cccccc;"><a href="../assets/img/Acconeer_Exploration_Tool_Flash_Firmware_Tab.JPG"><img src="../assets/img/Acconeer_Exploration_Tool_Flash_Firmware_Tab.JPG" width="600px" height="600px" alt="Flash Firmware Tab"></a></td>
    </tr>
  </table>
</div>

Select the firmware to flash to the SparkFun Pulsed Coherent Radar Sensor - Acconeer XM125 by clicking on the **Browse** button. In this case, you will need to head to: .. > **acconeer_xm125_a121-v1_5_0** > **xm125** > **out**. The version number will change depending on when you downloaded the firmware. Select **acc_exploration_server_a121.bin**.

<div style="text-align: center;">
  <table>
    <tr style="vertical-align:middle;">
     <td style="text-align: center; vertical-align: middle; border: solid 1px #cccccc;"><a href="../assets/img/Select_XM125_Firmware_acc_exploration_server_a121.JPG"><img src="../assets/img/Select_XM125_Firmware_acc_exploration_server_a121.JPG" width="600px" height="600px" alt="Select Acconeer Exploration Server A121 Firmware"></a></td>
    </tr>
  </table>
</div>

Select **Serial**. Then select the COM port that the SparkFun Pulsed Coherent Radar Sensor - Acconeer XM125 enumerated to. In this case it was **COM22 ()**. The COM port with the parenthesis will most likely be the COM port. From the drop down menu, select **XM125**.

<div style="text-align: center;">
  <table>
    <tr style="vertical-align:middle;">
     <td style="text-align: center; vertical-align: middle; border: solid 1px #cccccc;"><a href="../assets/img/Flash_XM125_Firmware_acc_exploration_server_a121_Python_Exploration_Tool.JPG"><img src="../assets/img/Flash_XM125_Firmware_acc_exploration_server_a121_Python_Exploration_Tool.JPG" width="600px" height="600px" alt="Flash Acconeer Exploration Server A121 Firmware"></a></td>
    </tr>
  </table>
</div>

You will need to set the XM125 in bootloader mode.

- Press and hold the BOOT button.
- Press the RST button while still holding down the BOOT button.
- Release the RST button.
- After a short moment, release the BOOT button.

<div style="text-align: center;">
  <table>
    <tr style="vertical-align:middle;">
     <td style="text-align: center; vertical-align: middle; border: solid 1px #cccccc;"><a href="../assets/img/SEN-24540-Pulsed_Coherent_Radar_Acconeer_XM125_A121_Boot_Mode-1.jpg"><img src="../assets/img/SEN-24540-Pulsed_Coherent_Radar_Acconeer_XM125_A121_Boot_Mode-1.jpg" width="600px" height="600px" alt="Press and hold BOOT Button"></a></td>
     <td style="text-align: center; vertical-align: middle; border: solid 1px #cccccc;"><a href="../assets/img/SEN-24540-Pulsed_Coherent_Radar_Acconeer_XM125_A121_Boot_Mode-2.jpg"><img src="../assets/img/SEN-24540-Pulsed_Coherent_Radar_Acconeer_XM125_A121_Boot_Mode-2.jpg" width="600px" height="600px" alt="Press Reset Button"></a></td>
     <td style="text-align: center; vertical-align: middle; border: solid 1px #cccccc;"><a href="../assets/img/SEN-24540-Pulsed_Coherent_Radar_Acconeer_XM125_A121_Boot_Mode-1.jpg"><img src="../assets/img/SEN-24540-Pulsed_Coherent_Radar_Acconeer_XM125_A121_Boot_Mode-1.jpg" width="600px" height="600px" alt="Keep Holding Down BOOT Button"></a></td>
     <td style="text-align: center; vertical-align: middle; border: solid 1px #cccccc;"><a href="../assets/img/SEN-24540-Pulsed_Coherent_Radar_Acconeer_XM125_A121_Boot_Mode-3.jpg"><img src="../assets/img/SEN-24540-Pulsed_Coherent_Radar_Acconeer_XM125_A121_Boot_Mode-3.jpg" width="600px" height="600px" alt="After a Short Moment, Release Boot Button"></a></td>
   </tr>
  </table>
</div>

!!! note
    You will want to wait a short moment before releasing the BOOT button to give the XM125 a moment to recognize that the BOOT button is being held low. Releasing the RST button too fast after the XM125 resets may prevent the module from properly entering bootloader mode.

Click the **Flash** button to flash the firmware. After a few seconds, you should get a message: "Flashing done!"

<div style="text-align: center;">
  <table>
    <tr style="vertical-align:middle;">
     <td style="text-align: center; vertical-align: middle; border: solid 1px #cccccc;"><a href="../assets/img/Flash_XM125_Firmware_acc_exploration_server_a121_Python_Exploration_Tool_Done.JPG"><img src="../assets/img/Flash_XM125_Firmware_acc_exploration_server_a121_Python_Exploration_Tool_Done.JPG" width="600px" height="600px" alt="Flashed Acconeer Exploration Server A121 Firmware"></a></td>
    </tr>
  </table>
</div>



### Getting Started with the Exploration Tool

Click on **Stream** from the side navigation bar. Select **Serial**. Then select the COM port that the board enumerated to. In this case, it was **COM22 ()** just like when the board was flashed earlier with the Exploration Tool.

<div style="text-align: center;">
  <table>
    <tr style="vertical-align:middle;">
     <td style="text-align: center; vertical-align: middle; border: solid 1px #cccccc;"><a href="../assets/img/Acconeer_Exploratoin_Tool_A121_Connect_XM125_SparkFun.JPG"><img src="../assets/img/Acconeer_Exploratoin_Tool_A121_Connect_XM125_SparkFun.JPG" width="600px" height="600px" alt="Connect to COM Port on the Acconeer Exploration Tool"></a></td>
    </tr>
  </table>
</div>

Configure the COM port by clicking on the gear between the COM port and Connect button. A small window will pop up to configure the COM port. Make sure to deselect the **Auto-connect** and manually enter the baud rate: **115200**. You may get an error when starting a measurements. Close the window by clicking the **X** button. Then click the **Connect** button.

<div style="text-align: center;">
  <table>
    <tr style="vertical-align:middle;">
     <td style="text-align: center; vertical-align: middle; border: solid 1px #cccccc;"><a href="../assets/img/Acconeer_Exploration_Tool_XM125_Baud_Rate.JPG"><img src="../assets/img/Acconeer_Exploration_Tool_XM125_Baud_Rate.JPG" width="600px" height="600px" alt="Configure COM Port on the Acconeer Exploration Tool"></a></td>
    </tr>
  </table>
</div>

There are several demos available with the Acconeer Exploration Tool. Let&apos;s check out the presence detector example. Click on the **Presence detector** button. Then click on the **Start Measurement** button. Try placing your hand over the sensor and then moving it away

<div style="text-align: center;">
  <table>
    <tr style="vertical-align:middle;">
     <td style="text-align: center; vertical-align: middle; border: solid 1px #cccccc;"><a href="../assets/img/SEN-24540-Pulsed_Coherent_Radar_Acconeer_XM125_A121_Hand_Near.jpg"><img src="../assets/img/SEN-24540-Pulsed_Coherent_Radar_Acconeer_XM125_A121_Hand_Near.jpg" width="600px" height="600px" alt="Hand in front of XM125 and Close"></a></td>
     <td style="text-align: center; vertical-align: middle; border: solid 1px #cccccc;"><a href="../assets/img/SEN-24540-Pulsed_Coherent_Radar_Acconeer_XM125_A121_Hand_Farther_Away.jpg"><img src="../assets/img/SEN-24540-Pulsed_Coherent_Radar_Acconeer_XM125_A121_Hand_Farther_Away.jpg" width="600px" height="600px" alt="Hand in front of XM125 and Farther Away"></a></td>
    </tr>
  </table>
</div>

You should see the presence distance values increase in the plot. From the history, I had moved my hand quickly away from the sensor resulting in the intra-presence score to increase. Then I moved it back and slowly moved it away resulting in the inter-presence score to increase. The  presence distance values would also be displayed in the bottom plot.

<div style="text-align: center;">
  <table>
    <tr style="vertical-align:middle;">
     <td style="text-align: center; vertical-align: middle; border: solid 1px #cccccc;"><a href="../assets/img/SparkFun_Acconeer_XM125_Exploration_Tool_Presense_Detector_Output.png"><img src="../assets/img/SparkFun_Acconeer_XM125_Exploration_Tool_Presense_Detector_Output.png" width="600px" height="600px" alt="Output from XM125 with Presence Detector Example on Acconeer Exploration Tool"></a></td>
    </tr>
  </table>
</div>

Let&apos;s check out the distance detector example. Click on the **Distance detector** button. Then click on the **Start Measurement** button. Placing my hand over the sensor and then moving it away, you should see the distance values increase in the plot. This was indicated by the four orange dots on the bottom graph.

<div style="text-align: center;">
  <table>
    <tr style="vertical-align:middle;">
     <td style="text-align: center; vertical-align: middle; border: solid 1px #cccccc;"><a href="../assets/img/SparkFun_Acconeer_XM125_Exploration_Tool_Distance_Detector_Output.png"><img src="../assets/img/SparkFun_Acconeer_XM125_Exploration_Tool_Distance_Detector_Output.png" width="600px" height="600px" alt="Output from XM125 with Distance Detector Example on Acconeer Exploration Tool"></a></td>
    </tr>
  </table>
</div>

Try checking out Acconeer's documentation for the Exploration tool and adjusting each value for your application. Or even place the sensor behind a wooden door or glass window to see if the sensor can detect your presence or distance from the sensor. There are also applications to measure breathing rate, detect parked cars, adjust the range of the presence detection into zones, measure tank levels, and measure speed!

<div style="text-align: center"><a href="https://docs.acconeer.com/en/latest/exploration_tool/algo/a121/index.html" class="md-button">Click Here to Browse Acconeer's Documentation for the Exploration Tool</a></div>
