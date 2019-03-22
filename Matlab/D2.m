load('curve.mat');
figure

subplot(4,2,[1 2]);
plot(tv, vfl, tv, vfr, tv, vrl, tv, vrr);
title('v overlay');

subplot(4,2,3);
plot(tv, vfl);
title('v front left');

subplot(4,2,4);
plot(tv, vfr);
title('v front right');

subplot(4,2,5);
plot(tv, vrl);
title('v rear left');

subplot(4,2,6);
plot(tv, vrr);
title('v rear right');

subplot(4,2,[7 8]);
title('steering wheel signal');
plot(tv, sw);

%Berechnung Kurvenradius bei Zeitpunkt allen Zeitpunkten
%Rrl = (w+1)/(Vrr/Vrl)
w = 1.53;
Vrl = vrl(1); 
Vrr = vrr(1);
Rrl = (w)./((vrr./vrl)-1);
B = 2.65;
Rfl = (B.^2+Rrl.^2).^0.5;
plot(tv,Rfl);
vfl1 = vfl(1);



