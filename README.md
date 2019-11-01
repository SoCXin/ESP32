# [ESP32](https://github.com/sochub/ESP32) 
[![sites](SoC/qitas.png)](http://www.qitas.cn)

#### 厂商：[espressif](https://github.com/sochub/espressif)
#### 架构：[MIPS](https://github.com/sochub/MIPS)
#### 芯片定级：[Level](https://github.com/sochub/Level)
### [ESP32描述](https://github.com/sochub/ESP32/wiki) 

[ESP32](https://github.com/sochub/ESP32) 采用两个哈佛结构Xtensa LX6构成双核系统，运算能力高达600 MIPS，芯片集成448KB ROM + 520KB SRAM。所有的片上存储器、片外存储器以及外设都分布在两个 CPU 的数据总线和／或指令总线上。

ESP32拥有丰富完整的外设资源，可以满足大多数嵌入式需求场景，风靡于创客群体。

Xtensa LX系列处理器具有很强的可重构性和可拓展性，来自Tensilica，是唯一一家拥有利用一个完整的软件开发工具环境生成定制微处理器核心,并可在几个小时内生产出新处理器配置的厂商,它使得费时的开发过程实现了自动化。

[![sites](docs/func.png)](https://www.espressif.com/zh-hans/products/hardware/esp32/overview)

### 关键参数：

* 40nm 32位双核Xtensa LX6、运算能力高达 600 MIPS（ESP32-S0WD 200 MIPS，ESP32-D2WD 400 MIPS）
* 1T1R 802.11 b/g/n，802.11n速度可达 150 Mbps
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

espressif乐鑫凭借现象级 WiFi SoC [ESP8266](https://github.com/sochub/ESP8266)进入开发者视野，各种工程案例和硬件设备/模块广泛流传，极大拉低了市场WIFI芯片的价格，也让开发者接受了Xtensa系列处理器的开发方式。

espressif乐鑫之后推出性能更强大，同时支持BT的[ESP32](https://github.com/sochub/ESP32)，虽然性价比很高，但此时的市场已经有越来越多的竞争者，例如[RTL8710](https://github.com/sochub/RTL8710) 和 [RDA5981](https://github.com/sochub/RDA5981)等，向上是TI的CC3200系列，向下还有更多的进入者。

ESP32最大的痛点在于没有足够的片上flash，需要外挂SPI Flash导致BOM成本提高，后ESP32-D2WD内置16-Mbit，然后就是window下的开发工具不友好，毕竟不是arm阵营，好多资源用不上，低功耗性能也不好可以当作从上至下的一种产品定位。


###  [SoC资源平台](http://www.qitas.cn)   
