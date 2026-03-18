#include <iostream>
#include <string>
using namespace std;

class Image {
public:
    operator string() {
        return "사진";
    }
};

class Message {
public:
    Message(int NewsendTime, string NewsendName) {
        sendTime = NewsendTime;
        sendName = NewsendName;
    }
    virtual ~Message() {}

    int GetSendTime() const { return sendTime; }
    string GetSendName() const { return sendName; }
    virtual string GetContent() const { return ""; }

private:
    int sendTime;
    string sendName;
};

class TextMessage : public Message {
public:
    TextMessage(int NewsendTime, string NewsendName, string  Newtext)
        : Message(NewsendTime, NewsendName) {
        text = Newtext;
    }

    string GetContent() const { return text; }

private:
    string text;
};

class ImageMessage : public Message {
public:
    ImageMessage(int NewsendTime, string NewsendName, Image* Newimage)
        : Message(NewsendTime, NewsendName) {
        image = Newimage;
    }

    string GetContent() const { return (string)*image; }

private:
    Image* image;
};

void printMessage(const Message &m) {
    cout << "보낸 시간 : " << m.GetSendTime() << endl;
    cout << "보낸 사람 : " << m.GetSendName() << endl;
    cout << " 내 용   : " << m.GetContent() << endl;
    cout << endl;
}

int main() {
    Image* dogImage = new Image;
    
    Message* messages[] = {
        new TextMessage(10, "두들", "안녕"),
        new ImageMessage(20, "두들", dogImage),
        new TextMessage(30, "두들", "잘가")
    };

    for (Message* m : messages)
    {
        printMessage(*m);
    }

    for (Message* m : messages)
    {
        delete m;
    }
    delete dogImage;

}