function perim =  PlotFRPerimeter(symtype)

if (strcmpi(symtype, 'cubic'))
  ptope = CubPolytope;
elseif (strcmpi(symtype, 'hexagonal'))
  ptope = HexPolytope;
elseif (strcmpi(symtype, 'orthorhombic'))
  ptope = OrtPolytope;
else
  wid = 'PlotFRPerimeter:symmetry';
  msg = 'symmetry type not recognized';
  warning(wid, msg)
  return
end
%
verts  = ptope.vertices;
faces  = ptope.faces;
nfaces = length(faces);
%
perim = [];
for i=1:nfaces
  list = faces{i};
  pts = verts(:, [list list(1)]);
  prm = plot3(pts(1, :), pts(2, :), pts(3, :), 'ko-');
  perim = [perim; prm];
  hold on
end
