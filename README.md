# Carelink-IoT--Based-Smart-Hospital-Ward-and-Patient-Room-Controller

1. Abstract

CareLink is an IoT-based smart hospital ward automation and patient assistance system designed to improve patient comfort, convenience, and communication with nursing staff.
In traditional hospital wards, patients may need assistance from nurses to operate electrical appliances or request emergency help. To overcome these difficulties, our project provides an automated system that allows patients and authorized staff to control hospital room appliances through an IoT dashboard.
The system uses an LPC2129 ARM7 microcontroller as the main controller and an ESP8266 Wi-Fi module for internet connectivity. The system allows users to control a bed light, fan, and night lamp. It also provides an emergency nurse-call facility. A relay module is used to control electrical appliances, while an LCD displays the system status.
This project aims to provide a smart, convenient, and efficient hospital environment through IoT technology.

2.Features

    1)Bed Light Control: Allows users to switch the bed light ON and OFF remotely.
    2)Fan Control: Enables remote operation of the room fan.
    3)Night Lamp Control: Provides control over the night lamp.
    4)Nurse Call Facility: Allows patients to request assistance during emergencies.
    5)IoT-Based Monitoring: Enables control through an internet-connected dashboard.
    6)LCD Display: Displays the current system status.
    7)Wi-Fi Connectivity: Uses ESP8266 for wireless communication.

3. Existing System

In the existing hospital system, most room appliances are controlled manually using physical switches.
Patients need to depend on nurses to operate appliances.
Emergency communication may require manually calling or contacting nurses.
There is no centralized IoT-based appliance control.
Manual operation consumes time and effort.
Patients with limited mobility may experience difficulties.

**Disadvantages of Existing System**
      =>More manual intervention.
      =>Less convenience for patients.
      =>Delays in requesting assistance.
      =>No remote appliance control.
      =>Difficult for patients with limited mobility.

4. Proposed System

The proposed CareLink system uses IoT technology to automate hospital room appliances and provide patient assistance.
The LPC2129 ARM7 microcontroller acts as the main controller. The ESP8266 Wi-Fi module establishes communication with the IoT cloud.
Users can operate the bed light, fan, and night lamp through an IoT dashboard. The commands are communicated to the controller, which operates the relay module to switch the appliances ON or OFF.
An emergency nurse-call facility is also provided so that patients can request assistance easily.
Controls the electrical appliances such as bed light, fan, and night lamp.

5.Working Principle of CARELINK

  1)ESP8266 connects to the internet through Wi-Fi.
  2)Arduino IoT Cloud provides a dashboard for controlling appliances.
  3)Users control the bed light, fan, and night lamp through the dashboard.
  5)ESP8266 receives commands from the cloud and sends them to LPC2129 through UART communication.
  6)LPC2129 processes the commands and controls the relay module.
  7)The relay switches the connected appliances ON or OFF.
  8)The LCD displays the system status.
  9)The patient can press the emergency push button to request nurse assistance.


6.Hardware Components Used

1) .LPC2129 ARM7 Microcontroller
Acts as the main controller. It processes commands and controls the connected hardware.
2). ESP8266 ESP-01 Wi-Fi Module
Provides wireless internet connectivity and communicates with the IoT cloud.
3). Four-Channel Relay Module
Controls the electrical appliances such as bed light, fan, and night lamp.
4). 16×2 LCD Display
Displays system information and operating status.
5). Push Button
Used by the patient to send an emergency nurse-call request.
6). Power Supply
Provides the required operating voltage to the electronic components.

7.Software Purpose

  1)Keil µVision Writing and compiling Embedded C programs for LPC2129.
  2)Flash Magic Uploading the HEX file into LPC2129.
  3)Arduino IDE Programming the ESP8266 Wi-Fi module.
  4)Arduino IoT Cloud Creating the dashboard and controlling appliances.
  5)Embedded C Programming the ARM7 controller.
  6)Arduino C++ Programming the ESP8266.

8.Advantages

=> Improves patient comfort and convenience.
=> Reduces manual operation.
=> Provides remote control of appliances.
=> Makes nurse assistance requests easier.
=> Supports smart hospital automation.
=> Reduces unnecessary movement for patients.

9. Disadvantages
=> Requires a stable Wi-Fi connection.
=> Depends on electricity and internet availability for cloud-based functions.
=> Initial installation cost may be higher than manual systems.
=> Requires regular maintenance.
=> The system needs proper security to prevent unauthorized access.

10.Applications

* Smart hospital wards.
* Patient room automation.
* Nurse-call systems.
* Remote appliance control.
*Assisted living facilities.

AUTHOR NAME: NAVEENA.A
