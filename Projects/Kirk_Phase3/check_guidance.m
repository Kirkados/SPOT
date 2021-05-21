% This script analyzes expeirmental results

close all

figure()
plot(rt_dataPacket(:,1),rt_dataPacket(:,65))
hold on;
plot(rt_dataPacket(:,1),rt_dataPacket(:,71))
legend('Accel X command', 'True Ax')


figure()
plot(rt_dataPacket(:,1),rt_dataPacket(:,66))
hold on;
plot(rt_dataPacket(:,1),rt_dataPacket(:,72))
legend('Accel Y command', 'True Ay')

figure()
plot(rt_dataPacket(:,1),rt_dataPacket(:,67))
hold on;
plot(rt_dataPacket(:,1),rt_dataPacket(:,73))
legend('Alpha command', 'True Alpha')

figure()
plot(rt_dataPacket(:,1),rt_dataPacket(:,68))
hold on;
plot(rt_dataPacket(:,1),rt_dataPacket(:,81))  
plot(rt_dataPacket(:,1),rt_dataPacket(:,78))
yyaxis right
plot(rt_dataPacket(:,1),rt_dataPacket(:,75))
legend('Shoulder  \alpha command', 'Shoulder \omega command', 'True shoulder \omega','\theta shoulder')

figure()
plot(rt_dataPacket(:,1),rt_dataPacket(:,69))
hold on;
plot(rt_dataPacket(:,1),rt_dataPacket(:,82))  
plot(rt_dataPacket(:,1),rt_dataPacket(:,79))
yyaxis right
plot(rt_dataPacket(:,1),rt_dataPacket(:,76))
legend('Elbow  \alpha command', 'Elbow \omega command', 'True Elbow \omega','\theta elbow')

figure()
plot(rt_dataPacket(:,1),rt_dataPacket(:,70))
hold on;
plot(rt_dataPacket(:,1),rt_dataPacket(:,83))  
plot(rt_dataPacket(:,1),rt_dataPacket(:,80))
yyaxis right
plot(rt_dataPacket(:,1),rt_dataPacket(:,77))
legend('Wrist  \alpha command', 'Wrist \omega command', 'True wrist \omega','\theta wrist')