# [ESP32](https://github.com/sochub/ESP32) 
[![sites](SoC/qitas.png)](http://www.qitas.cn)

#### [Vendor](https://github.com/sochub/Vendor)：[Espressif](https://github.com/sochub/espressif)
#### [MIPS](https://github.com/sochub/MIPS)：Xtensa LX6
#### [Level](https://github.com/sochub/Level)：600 MIPS / 240MHz

### [ESP32描述](https://github.com/sochub/ESP32/wiki) 

[ESP32](https://github.com/sochub/ESP32) 采用两个哈佛结构Xtensa LX6构成双核系统，运算能力高达600 MIPS，芯片集成448KB ROM + 520KB SRAM。所有的片上存储器、片外存储器以及外设都分布在两个 CPU的数据总线和／或指令总线上。

ESP32拥有丰富完整的外设资源，可以满足大多数嵌入式需求场景，风靡于创客群体。

Xtensa LX系列处理器具有很强的可重构性和可拓展性，来自Tensilica，是唯一一家拥有利用一个完整的软件开发工具环境生成定制微处理器核心,并可在几个小时内生产出新处理器配置的厂商,它使得费时的开发过程实现了自动化。

[![sites](docs/func.png)](https://www.espressif.com/zh-hans/products/hardware/esp32/overview)

### 关键参数：

兴趣特征： WiFi + BT/BLE & ETH MAC + CAN

* 40nm 32位双核Xtensa LX6、运算能力高达 600 MIPS（ESP32-S0WD 200 MIPS，ESP32-D2WD 400 MIPS）
* 1T1R 802.11 b/g/n WiFi，802.11n速度可达 150 Mbps
* 蓝牙v4.2完整标准，输出功率 +12 dBm，–97dBm的BLE接收灵敏度，集成balun、功率放大器、接收低噪声放大器、滤波器、电源管理模块等

### [资源收录](https://github.com/sochub/ESP32)

软件开发采用[ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/index.html)工具框架

* [文档](docs/) 
* [资源](src/) 
* [工程](project/) 

* [官方资源](https://www.espressif.com/zh-hans/products/hardware/esp32/resources) 

#### [硬件开发资源](https://github.com/sochub/ESP32)

[![sites](docs/ESP32.png)](http://www.qitas.cn)

* ESP32-D0WDQ6封装：QFN48 （6mm x 6mm）

[![sites](docs/ESP32-6.png)](http://www.qitas.cn)

* ESP32封装：QFN48 （5mm x 5mm）

[![sites](docs/ESP32-5.png)](http://www.qitas.cn)

* [kicad资源](src/kicad/)


### [选型建议](https://github.com/sochub/ESP32)

[Espressif](https://github.com/sochub/espressif) 乐鑫凭借现WiFi SoC [ESP8266](https://github.com/sochub/ESP8266)进入硬件开发者视野，在ARM大行其道的时代，让开发者接受了Xtensa系列处理器的开发。之后推出性能更强大，同时支持BT的[ESP32](https://github.com/sochub/ESP32)，拥抱arduino和各种社区，巩固了在开源硬件领域的地位。

相关的竞品如[RTL8710](https://github.com/sochub/RTL8710) 和 [RDA5981](https://github.com/sochub/RDA5981)等，都是基于arm cortex打造，产品的同质化严重，开发资源不及。


###  [SoC资源平台](http://www.qitas.cn)   
