package=libpng
$(package)_version=1.6.35
$(package)_download_path=http://prdownloads.sourceforge.net/libpng/libpng-1.6.35.tar.xz?download
$(package)_file_name=$(package)-$($(package)_version).tar.xz

define $(package)_config_cmds
  ./configure --host=x86_64-w64-mingw32 --prefix=$PWD/krugercoin/depends/x86_64-w64-mingw32 --enable-shared=no
endef

define $(package)_build_cmds
  make && make install
endef