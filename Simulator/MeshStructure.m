function mesh = MeshStructure(crd, con, eqv, varargin)

MyName = mfilename;
%
%-------------------- Defaults and Keyword Arguments
%
optcell = {...
    'ElementType',  '', ...
    'Symmetries',   []  ...
       };
%
options = OptArgs(optcell, varargin);
%
%-------------------- Main Code
%
if (nargin == 0)
  crd = [];
  con = [];
  eqv = [];
elseif (nargin == 2)
  eqv = [];
end
%
mesh = struct('crd', crd, 'con', con, 'eqv', eqv);
%
%  Process optional arguments.
%
if nargin > 3
  %
  if options.ElementType
    mesh.etype = ElementTypeStruct(options.ElementType);
  end
  %
  if options.Symmetries
    mesh.symmetries = options.Symmetries;
  end
  %
end
