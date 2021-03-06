//
// Created by hacketo on 10/08/16.
//
#include "manager.h"
#include "../../debug.h"
#include "../client.h"

Manager::Manager(ModulesManager* modulesManager) :
		modulesManager(modulesManager){
}

bool Manager::onEnter(Client *client){
	debug::print("New client : ",client->get_id(),"-",client->get_ip());
	return true;
}


bool Manager::onReady(Client *client, protocol::http::http_header& map){
	debug::print("Start Listening : ",client->get_id(),"-",client->get_ip());
	return true;
}

void Manager::onReceive(Client *client, protocol::packet::Packet *packet){}
void Manager::onClose(Client *client){}
void Manager::onError(Client *client){}
void Manager::onServerError(){}
void Manager::onExit(){}

ModulesManager* Manager::getModulesManager(){
	return modulesManager;
}