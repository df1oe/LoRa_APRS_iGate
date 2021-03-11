#ifndef MESSAGESTACK_H_
#define MESSAGESTACK_H_

#include <Arduino.h>
#include <configuration.h>
class MessageStack {
    public:
    
    static MessageStack & _instance()
    {
       static MessageStack _instance;
       return _instance;
    };

	~MessageStack() {}

    void push(String call, String source, String time, String rssi, String snr, String msg);

}; 
   
class StackEntry {
    public:
    
    static StackEntry & _instance()
    {
        static  StackEntry _instance;
        return _instance;
    }
    
    ~StackEntry() {}

    String call;
    String source;
    String time;
    String rssi;
    String snr;
    String msg;


};

#endif
