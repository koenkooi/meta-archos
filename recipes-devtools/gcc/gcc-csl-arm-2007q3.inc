require recipes-devtools/gcc/gcc-common.inc

BINV = "4.2.1"
PV = "4.2.1+csl-arm-2007q3-53"

FILESDIR = "${FILE_DIRNAME}/gcc-csl-arm"

SRC_URI = "http://www.codesourcery.com/public/gnu_toolchain/arm-none-eabi/arm-2007q3-53-arm-none-eabi.src.tar.bz2 \
           file://gcc-new-makeinfo.patch \
           file://gcc41-configure.in.patch \
           file://arm-nolibfloat.patch \
           file://arm-softfloat.patch \
           file://zecke-xgcc-cpp.patch \
           file://gcc-Os-fix.diff \
"

SRC_URI[md5sum] = "ada6a8dff4a147f41de02174f8703a0b"
SRC_URI[sha256sum] = "adbc29af4d08e64a221e213597556bf2a7121503fd33a66a2ffceeeffb404e88"

S = "${WORKDIR}/gcc-4.2"

do_unpack2() {
	cd ${WORKDIR}
	tar -xvjf ./arm-2007q3-53-arm-none-eabi/gcc-2007q3-53.tar.bz2
}

# Language Overrides
FORTRAN = ""
#FORTRAN_linux-gnueabi = ",fortran"
#JAVA = ",java"

EXTRA_OECONF_BASE = "--enable-libssp --disable-bootstrap --disable-libgomp --disable-libmudflap"
EXTRA_OECONF_INITIAL = "--disable-libmudflap --disable-libgomp --disable-libssp --disable-bootstrap"
EXTRA_OECONF_INTERMEDIATE = "--disable-libmudflap --disable-libgomp --disable-libssp --disable-bootstrap"

ARM_INSTRUCTION_SET = "arm"

addtask unpack2 after do_unpack before do_patch
