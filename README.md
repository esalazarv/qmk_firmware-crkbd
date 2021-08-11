# QMK Firmware for corne keyboard


### Dependencies 
QMK cli

For Mac OS 

```sh
brew install qmk/qmk/qmk
```

For another OS follow the QMK setup [guide](https://beta.docs.qmk.fm/tutorial/newbs_getting_started)


### Setup

Once you have installed `qmk` you must set up yor environment

```sh
qmk setup
````

It will install a lot a dependencies and can take time, take a coffee

after that you can see a new  `~/qmk_firmware` directory in your home 

Go to corne keyboard keymaps directory 

```sh
cd ~/qmk_firmware/keyboards/crkbd/keymaps
```

clone this project 

```
git clone https://github.com/esalazarv/qmk_firmware-crkbd.git esalazarv
```

### Compile Firmware

Run following command to build your custom firmware, replace `esalazarv` if you cloned this repo with another dirname in your 
`~/qmk_firmware/keyboards/crkbd/keymaps` directory

```sh
qmk compile -kb crkbd -km esalazarv
```

It will create a new `crkbd_rev1_esalazarv.hex` file in your `~/qmk_firmware` directory 

then you can use that firmware to configure your keyboard using `qmk` or `QMK Toolbox` you can download it [here](https://github.com/qmk/qmk_toolbox/releases)

And you are done!!

happy typings

