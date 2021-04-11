% Plot the fft of the measured PhaseSpace position signal
close all 

X = rt_dataPacket(:,5);
X = downsample(X, 2);

X = X_filtered

Fs = 240;            % Sampling frequency                    
T = 1/Fs;             % Sampling period       
L = size(X,1);             % Length of signal
t = (0:L-1)*T;        % Time vector

Y = fft(X);
%Compute the two-sided spectrum P2. Then compute the single-sided spectrum P1 based on P2 and the even-valued signal length L.

P2 = abs(Y/L);
P1 = P2(1:L/2+1);
P1(2:end-1) = 2*P1(2:end-1);
%Define the frequency domain f and plot the single-sided amplitude spectrum P1. The amplitudes are not exactly at 0.7 and 1, as expected, because of the added noise. On average, longer signals produce better frequency approximations.

f = Fs*(0:(L/2))/L;
plot(f,P1) 
title('Single-Sided Amplitude Spectrum of X(t)')
xlabel('f (Hz)')
ylabel('|P1(f)|')


n = 2^nextpow2(L);
%Convert the Gaussian pulse to the frequency domain.

Y = fft(X,n);
%Define the frequency domain and plot the unique frequencies.

f = Fs*(0:(n/2))/n;
P = abs(Y/n).^2;

figure()
plot(f,P(1:n/2+1)) 
title('Gaussian Pulse in Frequency Domain')
xlabel('Frequency (f)')
ylabel('|P(f)|^2')