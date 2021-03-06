[![GitHub release](https://img.shields.io/github/release/polistern/pbotectl.svg?label=latest%20release)](https://github.com/polistern/pbotectl/releases/latest)
[![License](https://img.shields.io/github/license/polistern/pbotectl.svg)](https://github.com/polistern/pbotectl/blob/master/LICENSE)

# pbotectl

pbotectl (Plus Bote Control Tool) - is a CLI utility for [pboted](https://github.com/polistern/pboted)

## Features

- Show some pboted entities (JSON and plain text)

### Planned Features

- Bote identity creation
- Aliases controling
- Launching periodic tasks
- Metrics and statuses

## Resources

* [Tickets/Issues](https://github.com/polistern/pbotectl/issues)

## Installing

You can fetch precompiled packages and binaries on [release](https://github.com/polistern/pbotectl/releases/latest) page.

### Supported systems

- GNU/Linux - [![Build](https://github.com/polistern/pbotectl/actions/workflows/build.yml/badge.svg)](https://github.com/polistern/pbotectl/actions/workflows/build.yml)
  - Debian / Ubuntu - [![Build DEB](https://github.com/polistern/pbotectl/actions/workflows/build-deb.yml/badge.svg)](https://github.com/polistern/pbotectl/actions/workflows/build-deb.yml)

## Building

- Install requirements
    - Compiler with C99 support (GCC >= 5, clang)
    - cmake >= 3.7
    - libcjson-dev >= 1.7.10
- Build

```bash
cd build
cmake .
make
```

## Usage

- **pboted** need to be run as UNIX-daemon
- You can see available commands with `./pbotectl help`

## Donations

- **BTC**: 
- **GOST**: 
- **XMR**: `89xqER2GpS3Bqm8z8AuqKx5Cpf9BR1codN1VdufcAEbFP2t9oWPvKpzfr6s6dNDRFHVfRijiCQA3uCFYQLzfsWtM3ahbSqp`

## License

This project is licensed under the GPL-3.0 license, which can be found in the file LICENSE in the root of the project source code.
