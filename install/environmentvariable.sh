cd /usr/local/lib
sudo wget https://www.antlr.org/download/antlr-4.9.2-complete.jar
echo 'export CLASSPATH=".:/usr/local/lib/antlr-4.9.2-complete.jar:$CLASSPATH"' >> ~/.bashrc
echo 'alias antlr4="java -jar /usr/local/lib/antlr-4.9.2-complete.jar"' >> ~/.bashrc
echo 'alias grun="java org.antlr.v4.gui.TestRig"' >> ~/.bashrc
source ~/.bashrc
git clone https://github.com/antlr/antlr4.git
cmake -B Build -S . -DANTLR_JAR_LOCATION=/usr/local/lib/antlr-4.13.1-complete.jar -DWITH_DEMO=True -G Ninja -DCMAKE_INSTALL_PREFIX=install