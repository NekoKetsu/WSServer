project(Server_src)

set(HEADER_FILES
        debug.h
        server/server.h
        client/client.h
        client/manager/manager.h
        client/manager/statebased_manager.h
        util/synchronizedpool.h
        util/base64.h
        util/sha1.h
        util/timer.h
        util/string.h
        util/exception.h
        protocol/frame.h
        protocol/http.h
        protocol/packet/packet.h
        util/genericvalue.h
        impl/RED.h
        protocol/opcode.h
        protocol/statuscode.h
        server/config.h
        server/errors.h
        util/worker.h
        protocol/constant.h
        modules/client_timer.h
        modules/pub_sub.h
        modules/base_module.h
        util/algo.h
        impl/Chat.h
        modules/sessionmanager.h
        )

set(SOURCE_FILES
        debug.cpp
        client/client.cpp
        client/manager/manager.cpp
        client/manager/statebased_manager.cpp
        util/base64.cpp
        util/sha1.cpp
        util/timer.cpp
        util/genericvalue.cpp
        protocol/http.cpp
        protocol/packet/packet.cpp
        impl/RED.cpp
        protocol/opcode.cpp
        server/config.cpp
        protocol/frame.cpp
        modules/client_timer.cpp
        modules/pub_sub.cpp
        modules/base_module.cpp
        util/algo.cpp
        server/errors.cpp
        impl/Chat.cpp
        modules/sessionmanager.cpp db/DatabaseHandler.cpp db/DatabaseHandler.h)


add_library(Server_src STATIC ${SOURCE_FILES} ${HEADER_FILES} )

#target_link_libraries(Server_src ${OPENSSL_LIBRARIES} ${Boost_LIBRARIES} pthread boost_timer rapidjson)