require linux.inc

DESCRIPTION = "Archos gen8 Linux kernel for OMAP processors"
KERNEL_IMAGETYPE = "zImage"

COMPATIBLE_MACHINE = "archosa32"

PV = "2.6.29"

SRCREV = "7e17e8438403a01bcbdb3bc707cf73c7fa896ab6"
SRC_URI = "git://gitorious.org/archos/archos-gpl-gen8-kernel.git;protocol=git \
           file://0001-archos_hdd-fix-include-path.patch \
           file://defconfig"

S = "${WORKDIR}/git"

# disable perf, it doesn't build
do_compile_perf() {
    :
}

do_install_perf() {
    :
}

