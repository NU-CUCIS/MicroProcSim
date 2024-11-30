function cycle = CycleIndices(n)
ident = 1:n;
%
cols = repmat(ident, n, 1);
rows = cols';
%
cycle = 1 + mod(cols + rows - 2, n);
