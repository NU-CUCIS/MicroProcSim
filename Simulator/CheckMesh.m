function CheckMesh(mesh, vector)
crd = mesh.crd;
eqv = mesh.eqv;
%
ncrd = size(crd, 2);
if (isempty(eqv))
  maxeqv = ncrd;
else
  maxeqv = max(eqv(1, :));
end
%
if (ncrd ~= maxeqv)
  error('Mesh coordinates inconsistent with equivalence array.')
end
%
if (nargin == 2)
  if (isempty(eqv))
    nreduced = ncrd;
  else
    nreduced = min(eqv(1, :)) - 1;
  end
  lenvec = length(vector);
  if (lenvec ~= nreduced)
    error ('Vector does not match mesh.');
  end
end
