% This script analyzes expeirmental results


figure()
plot(rt_dataPacket(:,1),rt_dataPacket(:,65))
hold on;
plot(rt_dataPacket(:,1),rt_dataPacket(:,68))
legend('Accel X command', 'True Ax')


figure()
plot(rt_dataPacket(:,1),rt_dataPacket(:,66))
hold on;
plot(rt_dataPacket(:,1),rt_dataPacket(:,69))
legend('Accel Y command', 'True Ay')

figure()
plot(rt_dataPacket(:,1),rt_dataPacket(:,67))
hold on;
plot(rt_dataPacket(:,1),rt_dataPacket(:,70))
legend('Alpha command', 'True Alpha')