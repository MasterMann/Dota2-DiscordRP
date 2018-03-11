'use strict';

const  d2gsi = require('dota2-gsi');
const fs = require('fs');

var server = new d2gsi({
	port: 3000,
	tokens: "drpauth-986101163845561"
});
var d2client = null;

server.events.on('newclient', function (client) {
	console.log("[!] New client connection, IP address: " + client.ip);
	if (client.auth && client.auth.token) {
		console.log("[!] Auth token: " + client.auth.token);
	} else {
		console.log("[!] No Auth token");
	}

	d2client = client;
});

setInterval(function () {
	if (d2client) {
		fs.appendFile("gsi-latest.bin", JSON.stringify(d2client.gamestate), (err) => {
			if (err) throw err;
		});
	}
	else {
		console.log("[-] Waiting for client...");
	}
}, 15 * 1000); // Update the state every 15 seconds