#FDOG(Flow-based DoG)
this repository is a implement of `Kang H, Lee S, Chui C K. Flow-Based Image Abstraction[J]. IEEE Transactions on Visualization & Computer Graphics, 2009, 15(1):62-76.`


#Envirnment
to run this project, [QT and openCV](http://blog.csdn.net/springzfx/article/details/44019917) is needed. You may need to modify the `.pro' file to adapt your envirnment.
```c++
INCLUDEPATH += C:/Opencv/include

LIBS += -LC:/Opencv/lib/ \
    -lopencv_core2410 \
    -lopencv_highgui2410 \
    -lopencv_imgproc2410d
```


#Attention
* I only use openCV to achieve image input and output in the `main.cpp`. So you can change it if you don't have openCV installed.

* This project don't use any widget of QT, So you can transplant code to other IDEs(like,visual studio) easily.

* Major code of this project is provided by my DIP teacher. I think the code may originally comes from the paper author. I'm not sure.


#Example
![example](https://github.com/springzfx/FDOG/blob/master/example.jpg)