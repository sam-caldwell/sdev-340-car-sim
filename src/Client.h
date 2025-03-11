#ifdef CLIENT_CLASS_H
#define CLIENT_CLASS_H

class Client{
    public:
    private:
      messageQueueWrapper *messageQueue;
      rtspStreamWrapper *rtspStream;
      Vehicle vehicle;

      Client();
      ~Client();
}

#endif
