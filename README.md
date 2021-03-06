MACE-Kit: a Machine Learning Toolkit Powered by MACE
====================================================

In recent years, with the development of machine learning technology, 
the on-device machine learning applications are getting more and more 
popular on mobile phones or IoT devices.

For the AI application developers, it is efficient to use a great
machine learning framework to develop AI applications. 

**MACE-Kit** provides various APIs for usage services, such as Face Detection and
Recognition, Person Segmentation, Speech Recognition and so on.
You can use these APIs to deploy your models and applications easily.

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](LICENSE) |
[中文](README_zh.md)

Feature List
-------------

- [x] Face Detection
- [x] Face Recognition
- [x] Object Detection
- [x] Person Segmentation
- [x] Speech Recognition
- [ ] ……

## Environment requirement

| Software  | Installation command  | Tested version  |
| :-------: | :-------------------: | :-------------: |
| ADB  | apt-get install android-tools-adb  | Required by Android run, >= 1.0.32  |
| Android NDK  | [NDK installation guide](https://developer.android.com/ndk/guides/setup#install) | Required by Android build, r17c |
| CMake  | apt-get install cmake  | >= 3.11.3  |


How to build
-------------

Build with Android NDK
```sh
tool/cmake-build-android-armeabi-v7a.sh
```

Test on android
```bash
tool/cctest-android.sh
```

For more information(User Guide for Demos, How to contribute, FAQs), please read the [documentation](docs).

## License
[Apache License 2.0](LICENSE).

## Notice
For [third party](third_party) dependencies, please refer to thier licenses.
