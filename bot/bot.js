console.log('beep boop');

const Discord = require('discord.js');
const client = new Discord.Client();
const privateMessage = require('./privateMessage');

client.login('ODY2MzU5MzI0ODQyMjYyNTQ4.YPRZ_w.wLX4ZMzFzaUxEaNJ4PVFFe8Ecv0')
client.on('ready', () => {
    console.log('Working!')

    privateMessage(client, 'ping', 'pong')

    client.users.fetch('216323177448472576').then(user => {
        user.send('Hello World!')
    })
})
