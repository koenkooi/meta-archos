require linux.inc

PATH_prepend = "${STAGING_BINDIR_TOOLCHAIN}.gcc-cross-kernel:"

DESCRIPTION = "Archos 5 Linux kernel for OMAP processors"
KERNEL_IMAGETYPE = "zImage"

COMPATIBLE_MACHINE = "archos5"

PV = "2.6.22.1-omap1"

SRC_URI = "${KERNELORG_MIRROR}/pub/linux/kernel/v2.6/linux-2.6.22.tar.bz2;name=kernel \
           file://2.6.22-omap1.patch \
           file://archos-2.6.22-omap1.patch \
           file://defconfig"

S = "${WORKDIR}/linux-2.6.22"

SRC_URI[kernel.md5sum] = "2e230d005c002fb3d38a3ca07c0200d0"
SRC_URI[kernel.sha256sum] = "73c10604c53f1a6ee65ef805293d23903696f8cef864f42d7de9506f0d2ba4c7"
