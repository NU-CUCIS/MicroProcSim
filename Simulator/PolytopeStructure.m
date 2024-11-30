function pstruct = PolytopeStructure(matrix, rhs, vertices, faces)
 
pstruct.matrix   = matrix;
pstruct.rhs      = rhs;
%
if (nargin >= 3)
  pstruct.vertices = vertices;
else
  pstruct.vertices = [];
end % if (nargin >= 3)
%
if (nargin >= 4)
  pstruct.faces = faces;
else
  pstruct.faces = [];
end % if (nargin >= 4)
