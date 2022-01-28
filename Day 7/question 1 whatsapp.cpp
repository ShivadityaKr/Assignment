#include<bits/stdc++.h>
using namespace std;
class Message{
	protected:
		int messageID;
};
class Status{
	protected:
		int statusID;
};
class Text : protected Message, protected Status{
	Text(){
		cout<<"Text"<<endl;
	}
};
class Audio : protected Message{
	Audio(){
		cout<<"Audio"<<endl;
	}
};
class Video : protected Message, protected Status{
	Video(){
		cout<<"Video"<<endl;
	}
};
class Image : protected Message, protected Status{
	Image(){
		cout<<"Image"<<endl;
	}
};

class Chat{
	protected:
	int id;
	int status_id;
	Message message;
};
class Contact{
	protected:
	int contactID;
	list<Status> statusList;
	string name;
	string number;
	string about;
	Image image;
};
class Setting{
	public:
		accountSetting(){
		}
		chatSetting(){
		}
		notificationSetting(){
		}
};
class Group{
	Contact contact[];
	int id;
};
class User{
	int userID;
	string name;
	string number;
	Contact contact[];
	map<Contact,Chat[]> Chats;
	list<Status> statusList;
	public:
		void addContact(Contact contact){
			
		}
};
class ChatManager : protected Contact, protected Message{
	public:
		sendMessage(Message message, int contactID){
		}
		receiverMessage(Message message){
		}
		deleteMessage(int messageID){
		}
		showChats(int contactID){
		}
};
class CallManager : protected User, protected Contact{
	public:
		call(int contactID, string number){
		}
		receiveCall(string number, int contactID){
		}
};
class StatusManager : protected Contact, protected Status{
	public:
		showStatus(){
		}
		receiveStatus(int contactID, Status status){
		}
		shareStatus(Status status){
		}
};
class ProfileDetail{
	Setting setting;
	Image image;
	string about;
};
class Whatsapp{
	User user;
	CallManager callManager;
	StatusManager statusManager;
	ChatManager chatManager;
};
int main(){
	
}
