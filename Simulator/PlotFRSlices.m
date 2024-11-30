function PlotFRSlices(mesh, odf, type, planes)

if (nargin < 3)
  type = 'cubic';
end
%
if (nargin < 4)
  planes = SymPlanes(type);
end
%
if isempty(planes)
  planes = SymPlanes('cubic');
end
%
for p=planes
  [sm, e, ecrd] = SliceMesh(mesh, p.Point, p.Normal);
  %[e, ecrd] = tsearchn(mesh.crd', mesh.con', sm.crd');
  eodf      = odf(mesh.con(:, e));
  slice_odf = dot(ecrd, eodf, 1);
  %
  PlotSurface(sm, slice_odf);
  %
end
%
%--------------------Private Functions----------------------------------
%
function planes = SymPlanes(type)
% CUBPLANES - 
%   
Z  = [0; 0; 0];
%
if (strcmpi(type, 'cubic'))
  %
  E  = eye(3);
  E1 = E(:, 1);
  E2 = E(:, 2);
  E3 = E(:, 3);
  planes = struct('Point', Z, 'Normal', {E1, E2, E3});
  %
elseif (strcmpi(type, 'hexagonal'))
  %
  n_z  = [0 0 1]';
  theta = (0:5)*2*pi/5;
  n_xy = [cos(theta); sin(theta); zeros(1, 6)];
  planes = struct('Point', Z, 'Normal', num2cell([n_z, n_xy], 1));
  %
else
  %
  %  Default planes to display.
  %
  E  = eye(3);
  E1 = E(:, 1);
  E2 = E(:, 2);
  E3 = E(:, 3);
  planes = struct('Point', Z, 'Normal', {E1, E2, E3});
  %
end
