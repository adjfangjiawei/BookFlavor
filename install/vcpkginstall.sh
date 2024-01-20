vcpkg install redis-plus-plus[async,async-std,cxx17,tls]:x64-linux-dynamic
vcpkg install  libconfig spdlog cli11 yalantinglibs scope-guard libgo openssl gtest avcpp tbb bitsery braft libmysql caf sobjectizer libphonenumber --triplet=x64-linux-dynamic
vcpkg install opencv4[ade,contrib,cuda,cudnn,dc1394,default-features,dnn,dnn-cuda,eigen,ffmpeg,freetype,gdcm,gstreamer,gtk,halide,ipp,jasper,jpeg,lapack,nonfree,openexr,opengl,openjpeg,openmp,openvino,ovis,png,python,qt,quirc,sfm,tbb,tiff,vtk,vulkan,webp,world]  libtorch[dist,leveldb,nnpack,opencv,tbb,vulkan,xnnpack,zstd] --triplet=x64-linux-dynamic
 vcpkg install tesseract[training-tools]:x64-linux-dynamic
vcpkg install nlohmann-json[diagnostics] quantlib --triplet=x64-linux-dynamic
vcpkg install ogre[assimp,bullet,freeimage,openexr,overlay,strict,tools,zip,zziplib] ogre-next[gl3plus,planar-reflections,vulkan]:x64-linux-dynamic --keep-going