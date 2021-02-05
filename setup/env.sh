#!/bin/bash

export GRPC_DISABLE_ENV=yes
eval "optbin -s /opt/grpc/bin"
eval "optman -s /opt/grpc/share/man"
eval "optpkg -s /opt/grpc/lib/pkgconfig"
eval "optlib -s /opt/grpc/lib"

