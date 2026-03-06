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

    int GetsendTime() const { return sendTime; }
    string GetsendName() const { return sendName; }

private:
    int sendTime;
    string sendName;
};

class TextMessage : public Message {
public:
    TextMessage(int NewsendTime, string NewsendName, string Newtext)
        : Message(NewsendTime, NewsendName) {
        text = Newtext;
    }

    string GetText() const { return text; }

private:
    string text;
};

class ImageMessage : public Message {
public:
    ImageMessage(int NewsendTime, string NewsendName, Image* Newimage)
        : Message(NewsendTime, NewsendName) {
        image = Newimage;
    }

    Image* GetImage() const { return image; }

private:
    Image* image;
};

int main() {
    Image* dogImage = new Image;
    TextMessage* hello = new TextMessage(10, "두들", "안녕");
    ImageMessage* dog = new ImageMessage(20, "두들", dogImage);

    cout << "보낸 시간 : " << hello->GetsendTime() << endl;
    cout << "보낸 사람 : " << hello->GetsendName() << endl;
    cout << "내용 : " << hello->GetText() << endl;
    cout << endl;

    cout << "보낸 시간 : " << dog->GetsendTime() << endl;
    cout << "보낸 사람 : " << dog->GetsendName() << endl;
    cout << "내용 : " << (string)*dog->GetImage() << endl;
    cout << endl;

    delete dogImage;
    delete hello;
    delete dog;
}