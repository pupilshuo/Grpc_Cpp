#grpc
# 安装pkg-config：
sudo apt-get install pkg-config

# 然后安装依赖文件autoconf、automake、libtool、make、g++、unzip、libgflags-dev、libgtest-dev、clang、libc+±dev：
 sudo apt-get install autoconf automake libtool make g++ unzip

 sudo apt-get install libgflags-dev libgtest-dev

 sudo apt-get install clang libc++-dev

# 下载gRPC源码进行安装：
git clone https://github.com/grpc/grpc.git
cd grpc
git submodule update --init  //更新第三方源码

# 安装protobuf源码
//首先要进入gRPC目录下
cd third_party/protobuf/
git submodule update --init --recursive   //确保克隆子模块，更新第三方源码
sudo ./autogen.sh      //生成配置脚本
sudo ./configure         //生成Makefile文件，为下一步的编译做准备，可以加上安装路径：--prefix=path，默认安装路径为usr/local/bin/
sudo make                 //从Makefile读取指令，然后编译
sudo make install //从Makefile读取指令，安装到指定位置，默认为/usr/local/，也可以指定安装目录：--prefix=path。
sudo ldconfig       // 更新共享库缓存
which protoc       // 查看软件的安装位置
protoc --version   //检查是否安装成功

# 安装gRPC
cd ../..
sudo make                          //从Makefile读取指令，然后编译
sudo make install 

# 编写然后编译proto文件
protoc --cpp_out=. helloworld.proto
protoc --grpc_out=. --plugin=protoc-gen-grpc=/usr/local/bin/grpc_cpp_plugin helloworld.proto

# 编写服务器端代码
g++ -std=c++11 *.cc -o server -pthread -lprotobuf -lgrpc++

# 在终端中使用./server


