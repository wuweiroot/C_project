#include "socketclient.h"

//第一套接口
    //初始化环境
    int socketclient_init(void **handle)
    {
        return 0;
    }

    //发送信息
    int socketclient_send(void *handle , void *buf , int len)
    {
        return 0;
    }

    //接收信息
    int socketclient_recv(void *handle , void **buf , int len)
    {
        return 0;
    }

    //释放资源
    int socketclient_destroy(void **handle)
    {
        return 0;
    }