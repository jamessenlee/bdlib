#COMAKE2 edit-mode: -*- Makefile -*-
####################64Bit Mode####################
ifeq ($(shell uname -m),x86_64)
CC=ccache ../../../../..//ps/se/toolchain/gcc_only_4.8.2/bin/g++
CXX=ccache ../../../../..//ps/se/toolchain/gcc_only_4.8.2/bin/g++
CXXFLAGS=-g \
  -pipe \
  -W \
  -Wall \
  -Werror \
  -fPIC \
  -O2 \
  -fpermissive \
  -Wno-write-strings \
  -Wno-literal-suffix \
  -Wno-ignored-qualifiers \
  -Wno-unused-local-typedefs \
  -Wno-invalid-offsetof \
  -Wno-unused-parameter \
  -Wno-unused-function \
  -Wno-narrowing \
  -D_GLIBCXX_HAVE_GTHR_DEFAULT \
  -Wno-strict-aliasing \
  -Wno-parentheses \
  -Wno-unused-but-set-variable
CFLAGS=
CPPFLAGS=-D_GNU_SOURCE \
  -D__STDC_LIMIT_MACROS \
  -DNDEBUG
INCPATH=-I.
DEP_INCPATH=-I../../../../../app/ecom/cm/global \
  -I../../../../../app/ecom/cm/global/include \
  -I../../../../../app/ecom/cm/global/output \
  -I../../../../../app/ecom/cm/global/output/include \
  -I../../../../../app/ecom/cm/utility/output/include \
  -I../../../../../app/ecom/nova/afs/config-io \
  -I../../../../../app/ecom/nova/afs/config-io/include \
  -I../../../../../app/ecom/nova/afs/config-io/output \
  -I../../../../../app/ecom/nova/afs/config-io/output/include \
  -I../../../../../app/ecom/nova/afs/dynamic-protobuf \
  -I../../../../../app/ecom/nova/afs/dynamic-protobuf/include \
  -I../../../../../app/ecom/nova/afs/dynamic-protobuf/output \
  -I../../../../../app/ecom/nova/afs/dynamic-protobuf/output/include \
  -I../../../../../app/ecom/nova/afs/smalltable \
  -I../../../../../app/ecom/nova/afs/smalltable/include \
  -I../../../../../app/ecom/nova/afs/smalltable/output \
  -I../../../../../app/ecom/nova/afs/smalltable/output/include \
  -I../../../../../com/btest/gtest \
  -I../../../../../com/btest/gtest/include \
  -I../../../../../com/btest/gtest/output \
  -I../../../../../com/btest/gtest/output/include \
  -I../../../../../lib2-64/bsl \
  -I../../../../../lib2-64/bsl/include \
  -I../../../../../lib2-64/bsl/output \
  -I../../../../../lib2-64/bsl/output/include \
  -I../../../../../lib2-64/ullib \
  -I../../../../../lib2-64/ullib/include \
  -I../../../../../lib2-64/ullib/output \
  -I../../../../../lib2-64/ullib/output/include \
  -I../../../../../ps/se/toolchain \
  -I../../../../../ps/se/toolchain/include \
  -I../../../../../ps/se/toolchain/output \
  -I../../../../../ps/se/toolchain/output/include \
  -I../../../../../public/configure \
  -I../../../../../public/configure/include \
  -I../../../../../public/configure/output \
  -I../../../../../public/configure/output/include \
  -I../../../../../public/sign \
  -I../../../../../public/sign/include \
  -I../../../../../public/sign/output \
  -I../../../../../public/sign/output/include \
  -I../../../../../public/spreg \
  -I../../../../../public/spreg/include \
  -I../../../../../public/spreg/output \
  -I../../../../../public/spreg/output/include \
  -I../../../../../quality/autotest/reportlib/cpp \
  -I../../../../../quality/autotest/reportlib/cpp/include \
  -I../../../../../quality/autotest/reportlib/cpp/output \
  -I../../../../../quality/autotest/reportlib/cpp/output/include \
  -I../../../../../third-64/boost \
  -I../../../../../third-64/boost/include \
  -I../../../../../third-64/boost/output \
  -I../../../../../third-64/boost/output/include \
  -I../../../../../third-64/libxml2 \
  -I../../../../../third-64/libxml2/include \
  -I../../../../../third-64/libxml2/output \
  -I../../../../../third-64/libxml2/output/include \
  -I../../../../../third-64/pcre \
  -I../../../../../third-64/pcre/include \
  -I../../../../../third-64/pcre/output \
  -I../../../../../third-64/pcre/output/include \
  -I../../../../../third-64/protobuf \
  -I../../../../../third-64/protobuf/include \
  -I../../../../../third-64/protobuf/output \
  -I../../../../../third-64/protobuf/output/include \
  -I../../../../../third-64/tcmalloc \
  -I../../../../../third-64/tcmalloc/include \
  -I../../../../../third-64/tcmalloc/output \
  -I../../../../../third-64/tcmalloc/output/include

#============ CCP vars ============
CCHECK=@ccheck.py
CCHECK_FLAGS=
PCLINT=@pclint
PCLINT_FLAGS=
CCP=@ccp.py
CCP_FLAGS=


#COMAKE UUID
COMAKE_MD5=33c1f41f85f305b29f86cde0c17c3f79  COMAKE


.PHONY:all
all:comake2_makefile_check lib libbdlib.a 
	@echo "[[1;32;40mCOMAKE:BUILD[0m][Target:'[1;32;40mall[0m']"
	@echo "make all done"

.PHONY:comake2_makefile_check
comake2_makefile_check:
	@echo "[[1;32;40mCOMAKE:BUILD[0m][Target:'[1;32;40mcomake2_makefile_check[0m']"
	#in case of error, update 'Makefile' by 'comake2'
	@echo "$(COMAKE_MD5)">comake2.md5
	@md5sum -c --status comake2.md5
	@rm -f comake2.md5

.PHONY:ccpclean
ccpclean:
	@echo "[[1;32;40mCOMAKE:BUILD[0m][Target:'[1;32;40mccpclean[0m']"
	@echo "make ccpclean done"

.PHONY:clean
clean:ccpclean
	@echo "[[1;32;40mCOMAKE:BUILD[0m][Target:'[1;32;40mclean[0m']"
	rm -rf lib
	rm -rf ./output/bin/lib
	rm -rf libbdlib.a
	rm -rf ./output/lib/libbdlib.a
	rm -rf lib_main.o

.PHONY:dist
dist:
	@echo "[[1;32;40mCOMAKE:BUILD[0m][Target:'[1;32;40mdist[0m']"
	tar czvf output.tar.gz output
	@echo "make dist done"

.PHONY:distclean
distclean:clean
	@echo "[[1;32;40mCOMAKE:BUILD[0m][Target:'[1;32;40mdistclean[0m']"
	rm -f output.tar.gz
	@echo "make distclean done"

.PHONY:love
love:
	@echo "[[1;32;40mCOMAKE:BUILD[0m][Target:'[1;32;40mlove[0m']"
	@echo "make love done"

lib:lib_main.o
	@echo "[[1;32;40mCOMAKE:BUILD[0m][Target:'[1;32;40mlib[0m']"
	$(CXX) lib_main.o -Xlinker "-("  ../../../../../app/ecom/cm/utility/libcm_utility.a \
  ../../../../../app/ecom/nova/afs/config-io/libconfigio.a \
  ../../../../../app/ecom/nova/afs/dynamic-protobuf/libdynamicprotobuf.a \
  ../../../../../app/ecom/nova/afs/smalltable/libsmalltable.a \
  ../../../../../com/btest/gtest/output/lib/libgtest.a \
  ../../../../../lib2-64/bsl/lib/libbsl.a \
  ../../../../../lib2-64/bsl/lib/libbsl_ResourcePool.a \
  ../../../../../lib2-64/bsl/lib/libbsl_archive.a \
  ../../../../../lib2-64/bsl/lib/libbsl_buffer.a \
  ../../../../../lib2-64/bsl/lib/libbsl_check_cast.a \
  ../../../../../lib2-64/bsl/lib/libbsl_exception.a \
  ../../../../../lib2-64/bsl/lib/libbsl_pool.a \
  ../../../../../lib2-64/bsl/lib/libbsl_utils.a \
  ../../../../../lib2-64/bsl/lib/libbsl_var.a \
  ../../../../../lib2-64/bsl/lib/libbsl_var_implement.a \
  ../../../../../lib2-64/bsl/lib/libbsl_var_utils.a \
  ../../../../../lib2-64/ullib/lib/libullib.a \
  ../../../../../public/configure/libconfig.a \
  ../../../../../public/sign/libuln_sign.a \
  ../../../../../public/spreg/libspreg.a \
  ../../../../../quality/autotest/reportlib/cpp/libautotest.a \
  ../../../../../third-64/boost/lib/libboost_regex.a \
  ../../../../../third-64/libxml2/lib/libxml2.a \
  ../../../../../third-64/pcre/lib/libpcre.a \
  ../../../../../third-64/pcre/lib/libpcrecpp.a \
  ../../../../../third-64/pcre/lib/libpcreposix.a \
  ../../../../../third-64/protobuf/lib/libprotobuf-lite.a \
  ../../../../../third-64/protobuf/lib/libprotobuf.a \
  ../../../../../third-64/protobuf/lib/libprotoc.a \
  ../../../../../third-64/tcmalloc/lib/libtcmalloc.a -static-libgcc \
  -static-libstdc++ \
  -lpthread \
  -lcrypto \
  -lrt -Xlinker "-)" -o lib
	mkdir -p ./output/bin
	cp -f --link lib ./output/bin

libbdlib.a:
	@echo "[[1;32;40mCOMAKE:BUILD[0m][Target:'[1;32;40mlibbdlib.a[0m']"
	ar crs libbdlib.a 
	mkdir -p ./output/lib
	cp -f --link libbdlib.a ./output/lib

lib_main.o:main.cpp
	@echo "[[1;32;40mCOMAKE:BUILD[0m][Target:'[1;32;40mlib_main.o[0m']"
	$(CXX) -c $(INCPATH) $(DEP_INCPATH) $(CPPFLAGS) $(CXXFLAGS)  -o lib_main.o main.cpp

endif #ifeq ($(shell uname -m),x86_64)


