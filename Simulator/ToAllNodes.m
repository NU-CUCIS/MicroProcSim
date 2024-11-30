function all = ToAllNodes(red, eqv)
if (isempty(eqv))
  all = red;
  return
end
[m n] = size(red);
if (n == 1) 
  transpose = 1;
  red = red';
  [m n] = size(red);
else
  transpose = 0;
end
eqvmax = max(eqv(1, :)); 
eqvmin = min(eqv(1, :)); 
if ( (n+1) ~= eqvmin)
  error('Data array does not match equivalence array')
end
nall = eqvmax;

all               = zeros(m, nall);    % allocate odf
all(:, 1:n)       = red;
all(:, eqv(1, :)) = red(eqv(2, :));

if (transpose)       % return vector of same type (row/col)
  all = all'; 
end
