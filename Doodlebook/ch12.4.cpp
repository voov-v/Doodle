#include <iostream>
#include <string>
using namespace std;

class Image {
public:
    operator string() {
        return "사진";
    }
};

class TextMessage {
public:
    TextMessage(int NewsendTime, string NewsendName, string  Newtext) {
        sendTime = NewsendTime;
        sendName = NewsendName;
        text = Newtext;
    }

    int GetsendTime() { return sendTime; }
    string GetsendName() { return sendName; }
    string Gettext() { return text; }

private:
    int sendTime;
    string sendName;
    string text;
};

class ImageMessage {
public:
    ImageMessage(int NewsendTime, string NewsendName, Image* Newimage) {
        sendTime = NewsendTime;
        sendName = NewsendName;
        image = Newimage;
    }

    int GetsendTime() { return sendTime; }
    string GetsendName() { return sendName; }
    Image* GetImage() { return image; }

private:
    int sendTime;
    string sendName;
    Image* image;
};

int main() {
    Image* dogImage = new Image;
    TextMessage* hello = new TextMessage(10, "두들", "안녕");
    ImageMessage* dog = new ImageMessage(20, "사장", dogImage);

    cout << "보낸 시간 : " << hello->GetsendTime() << endl;
    cout << "보낸 사람 : " << hello->GetsendName() << endl;
    cout << "보낸 내용 : " << hello->Gettext() << endl;
    cout << endl;

    cout << "보낸 시간 : " << dog->GetsendTime() << endl;
    cout << "보낸 사람 : " << dog->GetsendName() << endl;
    cout << "보낸 내용 : " << (string)*dog->GetImage() << endl;
    cout << endl;

    delete dogImage;
    delete hello;
    delete dog;
}