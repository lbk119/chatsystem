CFLAGS = -std=c++17 -I ../../../common -I ../../../odb -I ../ 
CSOURCE = ../relation-odb.cxx ../friend_apply-odb.cxx ../chat_session_member-odb.cxx ../chat_session-odb.cxx 
main:main.cc $(CSOURCE)
	g++ -o $@ $^ $(CFLAGS) -lodb-mysql -lodb -lodb-boost -lfmt -lspdlog -lgflags