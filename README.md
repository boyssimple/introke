# 本项目仿映客直播，完成了关注列表 、热门、附近、直播观看、直播等功能

OC项目
## 安装说明
1. pod isntall

## 功能
* [x] 关注
* [x] 热门
* [x] 附近
* [x] 直播观看
* [x] 手机直播


![image](https://github.com/boyssimple/introke/blob/master/images/Simulator%20Screen%20Shot%202017%E5%B9%B43%E6%9C%8815%E6%97%A5%20%E4%B8%8A%E5%8D%8811.39.19.png)
![image](https://github.com/boyssimple/introke/blob/master/images/Simulator%20Screen%20Shot%202017%E5%B9%B43%E6%9C%8815%E6%97%A5%20%E4%B8%8A%E5%8D%8811.39.22.png)
![image](https://github.com/boyssimple/introke/blob/master/images/Simulator%20Screen%20Shot%202017%E5%B9%B43%E6%9C%8815%E6%97%A5%20%E4%B8%8A%E5%8D%8811.39.29.png)
![image](https://github.com/boyssimple/introke/blob/master/images/Simulator%20Screen%20Shot%202017%E5%B9%B43%E6%9C%8815%E6%97%A5%20%E4%B8%8A%E5%8D%8811.39.32.png)
![image](https://github.com/boyssimple/introke/blob/master/images/Simulator%20Screen%20Shot%202017%E5%B9%B43%E6%9C%8815%E6%97%A5%20%E4%B8%8A%E5%8D%8811.39.49.png)



美颜功能使用的是BeautifyFace，本框架可以很快速的实现美颜功能，效果不错，它的底层还是基于的GPUImage，对GPUImage十分喜爱的Developer，可以参照BeautifyFace，写出一个属于自己的美颜功能，并且添加各种滤镜。

播放端播放端用的针对RTMP优化过的ijkplayer（下面提供下载地址），ijkplayer是基于FFmpeg的跨平台播放器，这个开源项目已经被多个 App 使用，其中映客、美拍和斗鱼使用了 ijkplayer（目前GitHub5700+⭐️） 。在本文的末未提供了，已经打包好的ijkplayer，直接拖入项目就可以使用。省去了编译的过程（编译十分麻烦，并且容易出错）。

推流端使用的是LFLiveKit，推流端可以选择很多GitHub上的开源项目替代LFLiveKit，比如VideoCore,和LiveVideoCoreSDK。商用的话可以选择各大厂商的SDK，网易直播云、七牛、腾讯、百度、新浪、其中金山直播云本人用过。使用直播云的好处就是能快速上线App，功能十分齐全，可以播放器和推流端，服务器一套下来，有专业客服人员帮助集成到工程中，缺点就是流量费太贵了，具体可以了解下各大厂商的收费标准。

你想要的IJKMediaFramework.framework


推流服务器设置:Class/Camera/View/StartLiveView最后一个代码块，建议搭建自己的服务器Mac搭建nginx+rtmp服务器

备用服务器地址（亲测可用）：

rtmp://live.hkstv.hk.lxdns.com:1935/live/stream123

rtmp://live.hkstv.hk.lxdns.com:1935/live/hks （将hks名称改成其他的，比如aaa）

rtmp://202.69.69.180:443/live/aaa (rtmp://202.69.69.180:443/webcast/bshdlive-pc)

rtmp://v1.one-tv.com:1935/live/aaa (rtmp://v1.one-tv.com:1935/live/mpegts.stream)

rtmp://203.207.99.19:1935/live/aaa (rtmp://203.207.99.19:1935/live/CCTV1)

rtmp://202.117.80.19:1935/live/aaa (rtmp://202.117.80.19:1935/live/live4)

rtmp://ams.studytv.cn/live/aaa (rtmp://ams.studytv.cn/livepkgr/264)

rtmp://60.174.36.89:1935/live/aaa (rtmp://60.174.36.89:1935/live/vod3)
