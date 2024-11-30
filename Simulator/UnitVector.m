function uvec = UnitVector(vec, ipmat)
m = size(vec, 1);
if (nargin > 1) 
  nrm2 = dot(vec, ipmat*vec, 1)
else
  nrm2 = dot(vec, vec, 1);
end
nrm  = repmat(sqrt(nrm2), [m 1]);
uvec = vec./nrm;
