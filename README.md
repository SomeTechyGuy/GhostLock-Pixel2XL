# THIS PROJECT IS INCOMPLETE, NO ROOT ACCESS HAS BEEN ACHIEVED YET.

# GhostLock 4.4
## This project uses AI for a lot of stuff (other than the original code from [R0rt1z2](https://github.com/R0rt1z2) and this README which I wrote manually).


Temporary root for the Google Pixel 2 XL on Android 11 (Build RP1A.201005.004.A1 from December 2020), adapted from CVE-2026-43499 in [CyberMeowfia](https://github.com/NebuSec/CyberMeowfia).

This repo will only support rooting Android 11 RP1A.201005.004.A1 on kernel 4.4.223-g52750b8f2138-ab6846512, do not ask for other Android versions or devices to be supported.

## Building

Requires GNU Make and Android NDK r29 (`makedist.sh` downloads it if it is missing).

```sh
./makedist.sh
```

The zip is written to `dist/`.

## Credits

- [CyberMeowfia](https://github.com/NebuSec/CyberMeowfia): original IonStack (CVE-2026-43499) exploit
- [IonStackQuest3](https://github.com/F-19-F/IonStackQuest3): ARM32 `setsockopt` stack-stamping reference
- [gitchw/ghostlock-cve-2026-43499](https://github.com/gitchw/ghostlock-cve-2026-43499): ARM32 futex-PI UAF reference
