Tanzanite Core
=============

Setup
---------------------
[Tanzanite Core](http://tanzanite.org/wallet) is the original Tanzanite client and it builds the backbone of the network. However, it downloads and stores the entire history of Tanzanite transactions; depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more. Thankfully you only have to do this once.

Running
---------------------
The following are some helpful notes on how to run Tanzanite Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/tanzanite-qt` (GUI) or
- `bin/tanzanited` (headless)

### Windows

Unpack the files into a directory, and then run tanzanite-qt.exe.

### macOS

Drag Tanzanite-Qt to your applications folder, and then run Tanzanite-Qt.

### Need Help?

* See the documentation at the [Tanzanite Wiki](https://github.com/Tanzanite-Project/Tanzanite/wiki)
for help and more information.
* Ask for help on [BitcoinTalk](https://bitcointalk.org/index.php?topic=1262920.0) or on the [Tanzanite Forum](http://forum.tanzanite.org/).
* Join our Discord server [Discord Server](https://discord.tanzanite.org)

Building
---------------------
The following are developer notes on how to build Tanzanite Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The Tanzanite repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://www.fuzzbawls.pw/tanzanite/doxygen/)
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Dnsseed Policy](dnsseed-policy.md)

### Resources
* Discuss on the [BitcoinTalk](https://bitcointalk.org/index.php?topic=1262920.0) or the [Tanzanite](http://forum.tanzanite.org/) forum.
* Join the [Tanzanite Discord](https://discord.tanzanite.org).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
