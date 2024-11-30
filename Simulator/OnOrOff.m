function toggle = OnOrOff(string)

string = lower(string); % to lower case
%
if     (strcmp(string, 'on'))
  toggle = 1;
elseif (strcmp(string, 'off'))
  toggle = 0;
else
  error('string is not either ''on'' or ''off''')
end
