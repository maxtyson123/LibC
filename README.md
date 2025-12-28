<!-- Improved compatibility of back to top link: See: https://github.com/maxtyson123/MaxOS/pull/73 -->
<a name="readme-top"></a>



<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Headers][headers-shield]][headers-url]
[![Functions][functions-shield]][functions-url]
[![Build][built-shield]][built-url]
[![Lines of Code][loc-shield]][loc-url]
[![wakatime][wakatime-shield]][wakatime-url]


<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/maxtyson123/LibC">
    <img src="docs/Screenshots/Logo.png" alt="Logo" width="80" height="90">
  </a>

<h3 align="center">LibC</h3>

  <p align="center">
    My own implementaion of the C standard library to be used in MaxOS (compatible with other OSes)
    <br />
    <a href="https://maxtyson123.github.io/LibC/html/"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/maxtyson123/LibC">View Demo</a>
    ·
    <a href="https://github.com/maxtyson123/LibC/issues">Report Bug</a>
    ·
    <a href="https://github.com/maxtyson123/LibC/issues">Request Feature</a>
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#add-your-own-platform">Add your own platform</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->

## About The Project

[![MaxOS][product-screenshot]](#)

LibC is my implementation of the C standard library, compliant with [The Open Group Standard Base Specifications's 
POSIX.1-2024 (IEEE Std 1003.1)](https://pubs.opengroup.org/onlinepubs/9799919799/) specification. This LibC is designed 
to be easily portable to other hobby kernels requiring a single header consisting of a only couple definitions and 16 'glue' functions.

I created this (rather than using a more efficient, pre-existing one ) as a learning experience. It has been fun diving 
into how a OS works and I thought it would also be fun to dive into how the OS exposes an API to userspace via the standard 
c library. Additionally, I didn't like the organisation of some of the other LibC implementations out there (personal preference) 
which was added incentive.

Currently, LibC is not finished and thus doesnt support any platforms, however, in the future I plan to implement support 
for MaxOS, MacOS and Linux. Maybe even a port for windows in the future.

This repo houses the source code for the standard library and some supporting scripts to build documentation. 
The repository also contains the latest build, which can be downloaded from the workflow artifacts.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- GETTING STARTED -->

## Getting Started

This is how to build the LibC library from source and install it into your system or project. (Alternatively, you can download the latest built library
from the workflow artifacts)

Currently, LibC cant build yet, will be updated later.

### Prerequisites

To build LibC needs a valid compiler and cmake version 3.31 or higher. 

You will also need to pick a target from the following:

| Target  | Description                                                  |
|---------|--------------------------------------------------------------|
| example | Minmal stub implementation, will compile but most will error |
| MaxOS   | Native LibC for MaxOS kernel and userspace                   |


### Build

1. Clone the repo
    ```shell
    git clone https://github.com/maxtyson123/LibC.git
    cd LibC
    ```
   
2. Choose a target and sysroot (can be anypath, doesnt have to follow format below)
    ```shell
    SYSROOT="$HOME/{target}/sysroot"
    mkdir -p $SYSROOT
    ```

3. Configure the build
    ```shell
    mkdir build
    cd build
    cmake -DCMAKE_BUILD_TYPE=Release -DLIBC_TARGET=example -DCMAKE_INSTALL_PREFIX=$SYSROOT ..
    ```

4. Build and install
    ```shell
    cmake --build .
    cmake --install .
    ```

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->

## Usage

- Option A:
   To use in a CMAKE project add the following lines to your CMAKELists.txt:
   ```cmake
    FIND_PACKAGE(LibC REQUIRED)
    TARGET_LINK_LIBRARIES(proj PRIVATE LibC::c)
   ```
- Option B:
   To use in a cross compiler:
   ```shell
    x86_64-elf-gcc --sysroot=$SYSROOT -ffreestanding -nostdlib main.c -lc -o main.elf
   ```
   _Note: Ensure -nostdlib and -ffreestanding are passed to avoid linking against the host libc._

<!-- Add your own platform -->

## Add your own platform
Included is the example platform target which is a minimal stub implementation of a platform the supports none of the 
platform specific features. Whilst the example platform should compile, it is not recommended to use as most of the 
standard functions will error.

When adding your own platform, it is recommended to copy the example and replace each part with the specific values and 
implementations that your platform offers. Additionally, you will have to setup the build options for your target in the 
CMakeLists.txt file.

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- CONTRIBUTING -->

## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any
contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also
simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- LICENSE -->

## License

Distributed under the BSD 3-Clause License. See `LICENSE` for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- ACKNOWLEDGMENTS -->

## Acknowledgments

* [POSIX Spec](https://pubs.opengroup.org/onlinepubs/9799919799/)
* [OSDev.org](https://wiki.osdev.org/Creating_a_C_Library)
* [NewLib](https://www.sourceware.org/newlib/)
* [Musl LibC](https://www.musl-libc.org/)
* [Musl Test](https://wiki.musl-libc.org/libc-test)
* [Duck OS](https://github.com/byteduck/duckOS)

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->

[product-screenshot]: docs/Screenshots/LibC.png

[contributors-shield]: https://img.shields.io/github/contributors/maxtyson123/MaxOS.svg?style=for-the-badge

[contributors-url]: https://github.com/maxtyson123/MaxOS/graphs/contributors

[headers-shield]: https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/maxtyson123/LibC/refs/heads/docs/metrics/headers.json

[headers-url]: https://github.com/maxtyson123/LibC/tree/main/include

[functions-shield]:https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/maxtyson123/LibC/refs/heads/docs/metrics/functions.json

[functions-url]: https://github.com/maxtyson123/LibC/tree/main/src

[built-shield]: https://img.shields.io/github/actions/workflow/status/maxtyson123/LibC/main.yml?style=for-the-badge

[built-url]: https://github.com/maxtyson123/LibC/actions/workflows/main.yml

[loc-shield]: https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/maxtyson123/LibC/refs/heads/docs/metrics/lines.json

[loc-url]: https://github.com/maxtyson123/LibC

[wakatime-shield]: https://wakatime.com/badge/github/maxtyson123/LibC.svg?style=for-the-badge

[wakatime-url]: https://wakatime.com/badge/github/maxtyson123/LibC